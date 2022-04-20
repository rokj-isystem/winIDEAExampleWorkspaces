#include <stdint.h>

struct G3M_Data_Buffer_Operation_Function_Registers_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDBEN:1;
      uint64_t CDBCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDBCR;

};

#define G3M_Data_Buffer_Operation_Function_Registers (*(volatile struct G3M_Data_Buffer_Operation_Function_Registers_tag *) 0xd18)

struct FLXA0_tag
{
  uint32_t FROC;
  uint8_t res0[4];

  uint32_t FROS;
  uint8_t res1[12];

  uint32_t FRLCK;
  uint32_t FREIR;
  uint32_t FRSIR;
  uint32_t FREILS;
  uint32_t FRSILS;
  uint32_t FREIES;
  uint32_t FREIER;
  uint32_t FRSIES;
  uint32_t FRSIER;
  uint32_t FRILE;
  uint32_t FRT0C;
  uint32_t FRT1C;
  uint32_t FRSTPW1;
  uint32_t FRSTPW2;
  uint8_t res2[44];

  uint32_t FRSUCC1;
  uint32_t FRSUCC2;
  uint32_t FRSUCC3;
  uint32_t FRNEMC;
  uint32_t FRPRTC1;
  uint32_t FRPRTC2;
  uint32_t FRMHDC;
  uint8_t res3[4];

  uint32_t FRGTUC1;
  uint32_t FRGTUC2;
  uint32_t FRGTUC3;
  uint32_t FRGTUC4;
  uint32_t FRGTUC5;
  uint32_t FRGTUC6;
  uint32_t FRGTUC7;
  uint32_t FRGTUC8;
  uint32_t FRGTUC9;
  uint32_t FRGTUC10;
  uint32_t FRGTUC11;
  uint8_t res4[52];

  uint32_t FRCCSV;
  uint32_t FRCCEV;
  uint8_t res5[8];

  uint32_t FRSCV;
  uint32_t FRMTCCV;
  uint32_t FRRCV;
  uint32_t FROCV;
  uint32_t FRSFS;
  uint32_t FRSWNIT;
  uint32_t FRACS;
  uint8_t res6[4];

  uint32_t FRESID1;
  uint32_t FRESID2;
  uint32_t FRESID3;
  uint32_t FRESID4;
  uint32_t FRESID5;
  uint32_t FRESID6;
  uint32_t FRESID7;
  uint32_t FRESID8;
  uint32_t FRESID9;
  uint32_t FRESID10;
  uint32_t FRESID11;
  uint32_t FRESID12;
  uint32_t FRESID13;
  uint32_t FRESID14;
  uint32_t FRESID15;
  uint8_t res7[4];

  uint32_t FROSID1;
  uint32_t FROSID2;
  uint32_t FROSID3;
  uint32_t FROSID4;
  uint32_t FROSID5;
  uint32_t FROSID6;
  uint32_t FROSID7;
  uint32_t FROSID8;
  uint32_t FROSID9;
  uint32_t FROSID10;
  uint32_t FROSID11;
  uint32_t FROSID12;
  uint32_t FROSID13;
  uint32_t FROSID14;
  uint32_t FROSID15;
  uint8_t res8[4];

  uint32_t FRNMV1;
  uint32_t FRNMV2;
  uint32_t FRNMV3;
  uint8_t res9[324];

  uint32_t FRMRC;
  uint32_t FRFRF;
  uint32_t FRFRFM;
  uint32_t FRFCL;
  uint32_t FRMHDS;
  uint32_t FRLDTS;
  uint32_t FRFSR;
  uint32_t FRMHDF;
  uint32_t FRTXRQ1;
  uint32_t FRTXRQ2;
  uint32_t FRTXRQ3;
  uint32_t FRTXRQ4;
  uint32_t FRNDAT1;
  uint32_t FRNDAT2;
  uint32_t FRNDAT3;
  uint32_t FRNDAT4;
  uint32_t FRMBSC1;
  uint32_t FRMBSC2;
  uint32_t FRMBSC3;
  uint32_t FRMBSC4;
  uint8_t res10[176];

  uint32_t FRWRDS1;
  uint32_t FRWRDS2;
  uint32_t FRWRDS3;
  uint32_t FRWRDS4;
  uint32_t FRWRDS5;
  uint32_t FRWRDS6;
  uint32_t FRWRDS7;
  uint32_t FRWRDS8;
  uint32_t FRWRDS9;
  uint32_t FRWRDS10;
  uint32_t FRWRDS11;
  uint32_t FRWRDS12;
  uint32_t FRWRDS13;
  uint32_t FRWRDS14;
  uint32_t FRWRDS15;
  uint32_t FRWRDS16;
  uint32_t FRWRDS17;
  uint32_t FRWRDS18;
  uint32_t FRWRDS19;
  uint32_t FRWRDS20;
  uint32_t FRWRDS21;
  uint32_t FRWRDS22;
  uint32_t FRWRDS23;
  uint32_t FRWRDS24;
  uint32_t FRWRDS25;
  uint32_t FRWRDS26;
  uint32_t FRWRDS27;
  uint32_t FRWRDS28;
  uint32_t FRWRDS29;
  uint32_t FRWRDS30;
  uint32_t FRWRDS31;
  uint32_t FRWRDS32;
  uint32_t FRWRDS33;
  uint32_t FRWRDS34;
  uint32_t FRWRDS35;
  uint32_t FRWRDS36;
  uint32_t FRWRDS37;
  uint32_t FRWRDS38;
  uint32_t FRWRDS39;
  uint32_t FRWRDS40;
  uint32_t FRWRDS41;
  uint32_t FRWRDS42;
  uint32_t FRWRDS43;
  uint32_t FRWRDS44;
  uint32_t FRWRDS45;
  uint32_t FRWRDS46;
  uint32_t FRWRDS47;
  uint32_t FRWRDS48;
  uint32_t FRWRDS49;
  uint32_t FRWRDS50;
  uint32_t FRWRDS51;
  uint32_t FRWRDS52;
  uint32_t FRWRDS53;
  uint32_t FRWRDS54;
  uint32_t FRWRDS55;
  uint32_t FRWRDS56;
  uint32_t FRWRDS57;
  uint32_t FRWRDS58;
  uint32_t FRWRDS59;
  uint32_t FRWRDS60;
  uint32_t FRWRDS61;
  uint32_t FRWRDS62;
  uint32_t FRWRDS63;
  uint32_t FRWRDS64;
  uint32_t FRWRHS1;
  uint32_t FRWRHS2;
  uint32_t FRWRHS3;
  uint8_t res11[4];

  uint32_t FRIBCM;
  uint32_t FRIBCR;
  uint8_t res12[232];

  uint32_t FRRDDS1;
  uint32_t FRRDDS2;
  uint32_t FRRDDS3;
  uint32_t FRRDDS4;
  uint32_t FRRDDS5;
  uint32_t FRRDDS6;
  uint32_t FRRDDS7;
  uint32_t FRRDDS8;
  uint32_t FRRDDS9;
  uint32_t FRRDDS10;
  uint32_t FRRDDS11;
  uint32_t FRRDDS12;
  uint32_t FRRDDS13;
  uint32_t FRRDDS14;
  uint32_t FRRDDS15;
  uint32_t FRRDDS16;
  uint32_t FRRDDS17;
  uint32_t FRRDDS18;
  uint32_t FRRDDS19;
  uint32_t FRRDDS20;
  uint32_t FRRDDS21;
  uint32_t FRRDDS22;
  uint32_t FRRDDS23;
  uint32_t FRRDDS24;
  uint32_t FRRDDS25;
  uint32_t FRRDDS26;
  uint32_t FRRDDS27;
  uint32_t FRRDDS28;
  uint32_t FRRDDS29;
  uint32_t FRRDDS30;
  uint32_t FRRDDS31;
  uint32_t FRRDDS32;
  uint32_t FRRDDS33;
  uint32_t FRRDDS34;
  uint32_t FRRDDS35;
  uint32_t FRRDDS36;
  uint32_t FRRDDS37;
  uint32_t FRRDDS38;
  uint32_t FRRDDS39;
  uint32_t FRRDDS40;
  uint32_t FRRDDS41;
  uint32_t FRRDDS42;
  uint32_t FRRDDS43;
  uint32_t FRRDDS44;
  uint32_t FRRDDS45;
  uint32_t FRRDDS46;
  uint32_t FRRDDS47;
  uint32_t FRRDDS48;
  uint32_t FRRDDS49;
  uint32_t FRRDDS50;
  uint32_t FRRDDS51;
  uint32_t FRRDDS52;
  uint32_t FRRDDS53;
  uint32_t FRRDDS54;
  uint32_t FRRDDS55;
  uint32_t FRRDDS56;
  uint32_t FRRDDS57;
  uint32_t FRRDDS58;
  uint32_t FRRDDS59;
  uint32_t FRRDDS60;
  uint32_t FRRDDS61;
  uint32_t FRRDDS62;
  uint32_t FRRDDS63;
  uint32_t FRRDDS64;
  uint32_t FRRDHS1;
  uint32_t FRRDHS2;
  uint32_t FRRDHS3;
  uint32_t FRMBS;
  uint32_t FROBCM;
  uint32_t FROBCR;
  uint8_t res13[232];

  uint32_t FRITC;
  uint32_t FROTC;
  uint32_t FRIBA;
  uint32_t FRFBA;
  uint32_t FROBA;
  uint32_t FRIQC;
  uint32_t FRUIR;
  uint32_t FRUOR;
  uint32_t FRITS;
  uint32_t FROTS;
  uint32_t FRAES;
  uint32_t FRAEA;
  uint32_t FRDA0;
  uint32_t FRDA1;
  uint32_t FRDA2;
  uint32_t FRDA3;
  uint32_t FRAHBC;
  uint32_t FRT2C;
};

#define FLXA0 (*(volatile struct FLXA0_tag *) 0x10020004)

struct FLMD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

};

#define FLMD (*(volatile struct FLMD_tag *) 0xffa00000)

struct FLASH_tag
{
  uint32_t SELFID0;
  uint32_t SELFID1;
  uint32_t SELFID2;
  uint32_t SELFID3;
  uint32_t SELFIDST;
  uint8_t res0[2430972];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FRDCYCLD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EEPRDCYCL;

  uint8_t res1[485391];

  uint32_t GREG8;
  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERROUTSEL:1;
      uint64_t reservedSpace1:12;
      uint64_t OPEVTI:1;
      uint64_t OPEVTO:1;
      uint64_t reservedSpace2:5;
      uint64_t OPWDMDS:1;
      uint64_t OPWDVAC:1;
      uint64_t reservedSpace3:2;
      uint64_t OPWDOVF:3;
      uint64_t reservedSpace4:3;
      uint64_t OPWDRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPBT0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t OPJTAG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPBT2;

  uint8_t res4[148];

  uint32_t PRDNAME1;
  uint32_t PRDNAME2;
  uint32_t PRDNAME3;
  uint32_t PRDNAME4;
  uint8_t res5[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSNREFDL:12;
      uint64_t reservedSpace0:4;
      uint64_t TSNREFDH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSNREFD;

  uint8_t res6[2826864];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHVE3CNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FHVE3;

  uint8_t res7[32796];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHVE15CNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FHVE15;

};

#define FLASH (*(volatile struct FLASH_tag *) 0xffa08000)

struct FACI_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t FWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPMON;

  uint8_t res0[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECRCT:1;
      uint64_t reservedSpace0:2;
      uint64_t DFAE:1;
      uint64_t CMDLK:1;
      uint64_t reservedSpace1:2;
      uint64_t CFAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FASTAT;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECRCTIE:1;
      uint64_t reservedSpace0:2;
      uint64_t DFAEIE:1;
      uint64_t CMDLKIE:1;
      uint64_t reservedSpace1:2;
      uint64_t CFAEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FAEINT;

  uint8_t res2[11];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CFAS:1;
      uint64_t reservedSpace1:6;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FAREASELC;

  uint8_t res3[14];

  uint32_t FSADDR;
  uint32_t FEADDR;
  uint8_t res4[72];

  uint32_t FSTATR;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FENTRYC:1;
      uint64_t reservedSpace0:6;
      uint64_t FENTRYD:1;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FENTRYR;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FPROTCN:1;
      uint64_t reservedSpace0:7;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FPROTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SUINIT:1;
      uint64_t reservedSpace0:7;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FSUINITR;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLOCKST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLKSTAT;

  uint8_t res8[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTECRCT:1;
      uint64_t RTEDTCT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FRTSTAT;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTECIE:1;
      uint64_t RTEDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FRTEINT;

  uint8_t res10[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCMDR:8;
      uint64_t CMDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCMDR;

  uint8_t res11[30];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PEERRST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FPESTAT;

  uint8_t res12[14];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BCDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FBCCNT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BCST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FBCSTAT;

  uint8_t res14[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSADR:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPSADDR;

  uint8_t res15[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ESUSPMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCPSR;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCKA:8;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FPCKAR;

  uint8_t res17[10];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EMSQMD:4;
      uint64_t reservedSpace0:2;
      uint64_t ERREMU:1;
      uint64_t EMMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLEMU;

  uint8_t res18[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAPE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEAD;

  uint8_t res19[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FECCM:9;
      uint64_t FAPARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FECCEMON;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ECCDISE:1;
      uint64_t reservedSpace0:3;
      uint64_t DECCVE:1;
      uint64_t CECCVE:1;
      uint64_t reservedSpace1:2;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FECCTMD;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMYECC:9;
      uint64_t DMYAPAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FDMYECC;

  uint8_t res22[2395902];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BFAA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BFASELR;

};

#define FACI (*(volatile struct FACI_tag *) 0xffa10000)

struct SINT_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t C0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) R0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t C1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) R1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t C2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) R2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t C3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) R3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t C4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) R4;

};

#define SINT (*(volatile struct SINT_tag *) 0xffc00000)

struct BRAM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT3;

};

#define BRAM (*(volatile struct BRAM_tag *) 0xffc0a000)

struct PORT_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t P0_0:1;
      uint64_t P0_1:1;
      uint64_t P0_2:1;
      uint64_t P0_3:1;
      uint64_t P0_4:1;
      uint64_t P0_5:1;
      uint64_t P0_6:1;
      uint64_t P0_7:1;
      uint64_t P0_8:1;
      uint64_t P0_9:1;
      uint64_t P0_10:1;
      uint64_t P0_11:1;
      uint64_t P0_12:1;
      uint64_t P0_13:1;
      uint64_t P0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P0;

  uint8_t res0[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSR0_0:1;
      uint64_t PSR0_1:1;
      uint64_t PSR0_2:1;
      uint64_t PSR0_3:1;
      uint64_t PSR0_4:1;
      uint64_t PSR0_5:1;
      uint64_t PSR0_6:1;
      uint64_t PSR0_7:1;
      uint64_t PSR0_8:1;
      uint64_t PSR0_9:1;
      uint64_t PSR0_10:1;
      uint64_t PSR0_11:1;
      uint64_t PSR0_12:1;
      uint64_t PSR0_13:1;
      uint64_t PSR0_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PSR0_16:1;
      uint64_t PSR0_17:1;
      uint64_t PSR0_18:1;
      uint64_t PSR0_19:1;
      uint64_t PSR0_20:1;
      uint64_t PSR0_21:1;
      uint64_t PSR0_22:1;
      uint64_t PSR0_23:1;
      uint64_t PSR0_24:1;
      uint64_t PSR0_25:1;
      uint64_t PSR0_26:1;
      uint64_t PSR0_27:1;
      uint64_t PSR0_28:1;
      uint64_t PSR0_29:1;
      uint64_t PSR0_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PNOT0_0:1;
      uint64_t PNOT0_1:1;
      uint64_t PNOT0_2:1;
      uint64_t PNOT0_3:1;
      uint64_t PNOT0_4:1;
      uint64_t PNOT0_5:1;
      uint64_t PNOT0_6:1;
      uint64_t PNOT0_7:1;
      uint64_t PNOT0_8:1;
      uint64_t PNOT0_9:1;
      uint64_t PNOT0_10:1;
      uint64_t PNOT0_11:1;
      uint64_t PNOT0_12:1;
      uint64_t PNOT0_13:1;
      uint64_t PNOT0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PNOT0;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPR0_0:1;
      uint64_t PPR0_1:1;
      uint64_t PPR0_2:1;
      uint64_t PPR0_3:1;
      uint64_t PPR0_4:1;
      uint64_t PPR0_5:1;
      uint64_t PPR0_6:1;
      uint64_t PPR0_7:1;
      uint64_t PPR0_8:1;
      uint64_t PPR0_9:1;
      uint64_t PPR0_10:1;
      uint64_t PPR0_11:1;
      uint64_t PPR0_12:1;
      uint64_t PPR0_13:1;
      uint64_t PPR0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PPR0;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PM0_0:1;
      uint64_t PM0_1:1;
      uint64_t PM0_2:1;
      uint64_t PM0_3:1;
      uint64_t PM0_4:1;
      uint64_t PM0_5:1;
      uint64_t PM0_6:1;
      uint64_t PM0_7:1;
      uint64_t PM0_8:1;
      uint64_t PM0_9:1;
      uint64_t PM0_10:1;
      uint64_t PM0_11:1;
      uint64_t PM0_12:1;
      uint64_t PM0_13:1;
      uint64_t PM0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PM0;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PMC0_0:1;
      uint64_t PMC0_1:1;
      uint64_t PMC0_2:1;
      uint64_t PMC0_3:1;
      uint64_t PMC0_4:1;
      uint64_t PMC0_5:1;
      uint64_t PMC0_6:1;
      uint64_t PMC0_7:1;
      uint64_t PMC0_8:1;
      uint64_t PMC0_9:1;
      uint64_t PMC0_10:1;
      uint64_t PMC0_11:1;
      uint64_t PMC0_12:1;
      uint64_t PMC0_13:1;
      uint64_t PMC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PMC0;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFC0_0:1;
      uint64_t PFC0_1:1;
      uint64_t PFC0_2:1;
      uint64_t PFC0_3:1;
      uint64_t PFC0_4:1;
      uint64_t PFC0_5:1;
      uint64_t PFC0_6:1;
      uint64_t PFC0_7:1;
      uint64_t PFC0_8:1;
      uint64_t PFC0_9:1;
      uint64_t PFC0_10:1;
      uint64_t PFC0_11:1;
      uint64_t PFC0_12:1;
      uint64_t PFC0_13:1;
      uint64_t PFC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFC0;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCE0_0:1;
      uint64_t PFCE0_1:1;
      uint64_t PFCE0_2:1;
      uint64_t PFCE0_3:1;
      uint64_t PFCE0_4:1;
      uint64_t PFCE0_5:1;
      uint64_t PFCE0_6:1;
      uint64_t PFCE0_7:1;
      uint64_t PFCE0_8:1;
      uint64_t PFCE0_9:1;
      uint64_t reservedSpace0:3;
      uint64_t PFCE0_13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCE0;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSR0_0:1;
      uint64_t PMSR0_1:1;
      uint64_t PMSR0_2:1;
      uint64_t PMSR0_3:1;
      uint64_t PMSR0_4:1;
      uint64_t PMSR0_5:1;
      uint64_t PMSR0_6:1;
      uint64_t PMSR0_7:1;
      uint64_t PMSR0_8:1;
      uint64_t PMSR0_9:1;
      uint64_t PMSR0_10:1;
      uint64_t PMSR0_11:1;
      uint64_t PMSR0_12:1;
      uint64_t PMSR0_13:1;
      uint64_t PMSR0_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PMSR0_16:1;
      uint64_t PMSR0_17:1;
      uint64_t PMSR0_18:1;
      uint64_t PMSR0_19:1;
      uint64_t PMSR0_20:1;
      uint64_t PMSR0_21:1;
      uint64_t PMSR0_22:1;
      uint64_t PMSR0_23:1;
      uint64_t PMSR0_24:1;
      uint64_t PMSR0_25:1;
      uint64_t PMSR0_26:1;
      uint64_t PMSR0_27:1;
      uint64_t PMSR0_28:1;
      uint64_t PMSR0_29:1;
      uint64_t PMSR0_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMCSR0_0:1;
      uint64_t PMCSR0_1:1;
      uint64_t PMCSR0_2:1;
      uint64_t PMCSR0_3:1;
      uint64_t PMCSR0_4:1;
      uint64_t PMCSR0_5:1;
      uint64_t PMCSR0_6:1;
      uint64_t PMCSR0_7:1;
      uint64_t PMCSR0_8:1;
      uint64_t PMCSR0_9:1;
      uint64_t PMCSR0_10:1;
      uint64_t PMCSR0_11:1;
      uint64_t PMCSR0_12:1;
      uint64_t PMCSR0_13:1;
      uint64_t PMCSR0_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PMCSR0_16:1;
      uint64_t PMCSR0_17:1;
      uint64_t PMCSR0_18:1;
      uint64_t PMCSR0_19:1;
      uint64_t PMCSR0_20:1;
      uint64_t PMCSR0_21:1;
      uint64_t PMCSR0_22:1;
      uint64_t PMCSR0_23:1;
      uint64_t PMCSR0_24:1;
      uint64_t PMCSR0_25:1;
      uint64_t PMCSR0_26:1;
      uint64_t PMCSR0_27:1;
      uint64_t PMCSR0_28:1;
      uint64_t PMCSR0_29:1;
      uint64_t PMCSR0_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCSR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCAE0_0:1;
      uint64_t PFCAE0_1:1;
      uint64_t PFCAE0_2:1;
      uint64_t PFCAE0_3:1;
      uint64_t PFCAE0_4:1;
      uint64_t PFCAE0_5:1;
      uint64_t PFCAE0_6:1;
      uint64_t PFCAE0_7:1;
      uint64_t PFCAE0_8:1;
      uint64_t PFCAE0_9:1;
      uint64_t reservedSpace0:1;
      uint64_t PFCAE0_11:1;
      uint64_t PFCAE0_12:1;
      uint64_t PFCAE0_13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCAE0;

  uint8_t res7[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINV0_0:1;
      uint64_t PINV0_1:1;
      uint64_t PINV0_2:1;
      uint64_t PINV0_3:1;
      uint64_t PINV0_4:1;
      uint64_t PINV0_5:1;
      uint64_t PINV0_6:1;
      uint64_t PINV0_7:1;
      uint64_t PINV0_8:1;
      uint64_t PINV0_9:1;
      uint64_t PINV0_10:1;
      uint64_t PINV0_11:1;
      uint64_t PINV0_12:1;
      uint64_t PINV0_13:1;
      uint64_t PINV0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINV0;

  uint8_t res8[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P1_0:1;
      uint64_t P1_1:1;
      uint64_t P1_2:1;
      uint64_t P1_3:1;
      uint64_t P1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P1;

  uint8_t res9[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSR1_0:1;
      uint64_t PSR1_1:1;
      uint64_t PSR1_2:1;
      uint64_t PSR1_3:1;
      uint64_t PSR1_4:1;
      uint64_t reservedSpace0:11;
      uint64_t PSR1_16:1;
      uint64_t PSR1_17:1;
      uint64_t PSR1_18:1;
      uint64_t PSR1_19:1;
      uint64_t PSR1_20:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PNOT1_0:1;
      uint64_t PNOT1_1:1;
      uint64_t PNOT1_2:1;
      uint64_t PNOT1_3:1;
      uint64_t PNOT1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PNOT1;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPR1_0:1;
      uint64_t PPR1_1:1;
      uint64_t PPR1_2:1;
      uint64_t PPR1_3:1;
      uint64_t PPR1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PPR1;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PM1_0:1;
      uint64_t PM1_1:1;
      uint64_t PM1_2:1;
      uint64_t PM1_3:1;
      uint64_t PM1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PM1;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PMC1_0:1;
      uint64_t PMC1_1:1;
      uint64_t PMC1_2:1;
      uint64_t PMC1_3:1;
      uint64_t PMC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PMC1;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFC1_0:1;
      uint64_t PFC1_1:1;
      uint64_t PFC1_2:1;
      uint64_t PFC1_3:1;
      uint64_t PFC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFC1;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCE1_0:1;
      uint64_t PFCE1_1:1;
      uint64_t PFCE1_2:1;
      uint64_t PFCE1_3:1;
      uint64_t PFCE1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCE1;

  uint8_t res15[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSR1_0:1;
      uint64_t PMSR1_1:1;
      uint64_t PMSR1_2:1;
      uint64_t PMSR1_3:1;
      uint64_t PMSR1_4:1;
      uint64_t reservedSpace0:11;
      uint64_t PMSR1_16:1;
      uint64_t PMSR1_17:1;
      uint64_t PMSR1_18:1;
      uint64_t PMSR1_19:1;
      uint64_t PMSR1_20:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMCSR1_0:1;
      uint64_t PMCSR1_1:1;
      uint64_t PMCSR1_2:1;
      uint64_t PMCSR1_3:1;
      uint64_t PMCSR1_4:1;
      uint64_t reservedSpace0:11;
      uint64_t PMCSR1_16:1;
      uint64_t PMCSR1_17:1;
      uint64_t PMCSR1_18:1;
      uint64_t PMCSR1_19:1;
      uint64_t PMCSR1_20:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCSR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCAE1_0:1;
      uint64_t PFCAE1_1:1;
      uint64_t PFCAE1_2:1;
      uint64_t PFCAE1_3:1;
      uint64_t PFCAE1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCAE1;

  uint8_t res16[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINV1_0:1;
      uint64_t PINV1_1:1;
      uint64_t PINV1_2:1;
      uint64_t PINV1_3:1;
      uint64_t PINV1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINV1;

  uint8_t res17[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2_0:1;
      uint64_t P2_1:1;
      uint64_t P2_2:1;
      uint64_t P2_3:1;
      uint64_t P2_4:1;
      uint64_t P2_5:1;
      uint64_t P2_6:1;
      uint64_t P2_7:1;
      uint64_t P2_8:1;
      uint64_t P2_9:1;
      uint64_t P2_10:1;
      uint64_t P2_11:1;
      uint64_t P2_12:1;
      uint64_t P2_13:1;
      uint64_t P2_14:1;
      uint64_t P2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P2;

  uint8_t res18[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSR2_0:1;
      uint64_t PSR2_1:1;
      uint64_t PSR2_2:1;
      uint64_t PSR2_3:1;
      uint64_t PSR2_4:1;
      uint64_t PSR2_5:1;
      uint64_t PSR2_6:1;
      uint64_t PSR2_7:1;
      uint64_t PSR2_8:1;
      uint64_t PSR2_9:1;
      uint64_t PSR2_10:1;
      uint64_t PSR2_11:1;
      uint64_t PSR2_12:1;
      uint64_t PSR2_13:1;
      uint64_t PSR2_14:1;
      uint64_t PSR2_15:1;
      uint64_t PSR2_16:1;
      uint64_t PSR2_17:1;
      uint64_t PSR2_18:1;
      uint64_t PSR2_19:1;
      uint64_t PSR2_20:1;
      uint64_t PSR2_21:1;
      uint64_t PSR2_22:1;
      uint64_t PSR2_23:1;
      uint64_t PSR2_24:1;
      uint64_t PSR2_25:1;
      uint64_t PSR2_26:1;
      uint64_t PSR2_27:1;
      uint64_t PSR2_28:1;
      uint64_t PSR2_29:1;
      uint64_t PSR2_30:1;
      uint64_t PSR2_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PNOT2_0:1;
      uint64_t PNOT2_1:1;
      uint64_t PNOT2_2:1;
      uint64_t PNOT2_3:1;
      uint64_t PNOT2_4:1;
      uint64_t PNOT2_5:1;
      uint64_t PNOT2_6:1;
      uint64_t PNOT2_7:1;
      uint64_t PNOT2_8:1;
      uint64_t PNOT2_9:1;
      uint64_t PNOT2_10:1;
      uint64_t PNOT2_11:1;
      uint64_t PNOT2_12:1;
      uint64_t PNOT2_13:1;
      uint64_t PNOT2_14:1;
      uint64_t PNOT2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PNOT2;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPR2_0:1;
      uint64_t PPR2_1:1;
      uint64_t PPR2_2:1;
      uint64_t PPR2_3:1;
      uint64_t PPR2_4:1;
      uint64_t PPR2_5:1;
      uint64_t PPR2_6:1;
      uint64_t PPR2_7:1;
      uint64_t PPR2_8:1;
      uint64_t PPR2_9:1;
      uint64_t PPR2_10:1;
      uint64_t PPR2_11:1;
      uint64_t PPR2_12:1;
      uint64_t PPR2_13:1;
      uint64_t PPR2_14:1;
      uint64_t PPR2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PPR2;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PM2_0:1;
      uint64_t PM2_1:1;
      uint64_t PM2_2:1;
      uint64_t PM2_3:1;
      uint64_t PM2_4:1;
      uint64_t PM2_5:1;
      uint64_t PM2_6:1;
      uint64_t PM2_7:1;
      uint64_t PM2_8:1;
      uint64_t PM2_9:1;
      uint64_t PM2_10:1;
      uint64_t PM2_11:1;
      uint64_t PM2_12:1;
      uint64_t PM2_13:1;
      uint64_t PM2_14:1;
      uint64_t PM2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PM2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PMC2_0:1;
      uint64_t PMC2_1:1;
      uint64_t PMC2_2:1;
      uint64_t PMC2_3:1;
      uint64_t PMC2_4:1;
      uint64_t PMC2_5:1;
      uint64_t PMC2_6:1;
      uint64_t PMC2_7:1;
      uint64_t PMC2_8:1;
      uint64_t PMC2_9:1;
      uint64_t PMC2_10:1;
      uint64_t PMC2_11:1;
      uint64_t PMC2_12:1;
      uint64_t PMC2_13:1;
      uint64_t PMC2_14:1;
      uint64_t PMC2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PMC2;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFC2_0:1;
      uint64_t PFC2_1:1;
      uint64_t PFC2_2:1;
      uint64_t PFC2_3:1;
      uint64_t PFC2_4:1;
      uint64_t PFC2_5:1;
      uint64_t PFC2_6:1;
      uint64_t PFC2_7:1;
      uint64_t PFC2_8:1;
      uint64_t PFC2_9:1;
      uint64_t PFC2_10:1;
      uint64_t PFC2_11:1;
      uint64_t PFC2_12:1;
      uint64_t PFC2_13:1;
      uint64_t PFC2_14:1;
      uint64_t PFC2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFC2;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCE2_0:1;
      uint64_t PFCE2_1:1;
      uint64_t PFCE2_2:1;
      uint64_t PFCE2_3:1;
      uint64_t PFCE2_4:1;
      uint64_t PFCE2_5:1;
      uint64_t PFCE2_6:1;
      uint64_t PFCE2_7:1;
      uint64_t PFCE2_8:1;
      uint64_t PFCE2_9:1;
      uint64_t PFCE2_10:1;
      uint64_t PFCE2_11:1;
      uint64_t PFCE2_12:1;
      uint64_t PFCE2_13:1;
      uint64_t PFCE2_14:1;
      uint64_t PFCE2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCE2;

  uint8_t res24[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSR2_0:1;
      uint64_t PMSR2_1:1;
      uint64_t PMSR2_2:1;
      uint64_t PMSR2_3:1;
      uint64_t PMSR2_4:1;
      uint64_t PMSR2_5:1;
      uint64_t PMSR2_6:1;
      uint64_t PMSR2_7:1;
      uint64_t PMSR2_8:1;
      uint64_t PMSR2_9:1;
      uint64_t PMSR2_10:1;
      uint64_t PMSR2_11:1;
      uint64_t PMSR2_12:1;
      uint64_t PMSR2_13:1;
      uint64_t PMSR2_14:1;
      uint64_t PMSR2_15:1;
      uint64_t PMSR2_16:1;
      uint64_t PMSR2_17:1;
      uint64_t PMSR2_18:1;
      uint64_t PMSR2_19:1;
      uint64_t PMSR2_20:1;
      uint64_t PMSR2_21:1;
      uint64_t PMSR2_22:1;
      uint64_t PMSR2_23:1;
      uint64_t PMSR2_24:1;
      uint64_t PMSR2_25:1;
      uint64_t PMSR2_26:1;
      uint64_t PMSR2_27:1;
      uint64_t PMSR2_28:1;
      uint64_t PMSR2_29:1;
      uint64_t PMSR2_30:1;
      uint64_t PMSR2_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMCSR2_0:1;
      uint64_t PMCSR2_1:1;
      uint64_t PMCSR2_2:1;
      uint64_t PMCSR2_3:1;
      uint64_t PMCSR2_4:1;
      uint64_t PMCSR2_5:1;
      uint64_t PMCSR2_6:1;
      uint64_t PMCSR2_7:1;
      uint64_t PMCSR2_8:1;
      uint64_t PMCSR2_9:1;
      uint64_t PMCSR2_10:1;
      uint64_t PMCSR2_11:1;
      uint64_t PMCSR2_12:1;
      uint64_t PMCSR2_13:1;
      uint64_t PMCSR2_14:1;
      uint64_t PMCSR2_15:1;
      uint64_t PMCSR2_16:1;
      uint64_t PMCSR2_17:1;
      uint64_t PMCSR2_18:1;
      uint64_t PMCSR2_19:1;
      uint64_t PMCSR2_20:1;
      uint64_t PMCSR2_21:1;
      uint64_t PMCSR2_22:1;
      uint64_t PMCSR2_23:1;
      uint64_t PMCSR2_24:1;
      uint64_t PMCSR2_25:1;
      uint64_t PMCSR2_26:1;
      uint64_t PMCSR2_27:1;
      uint64_t PMCSR2_28:1;
      uint64_t PMCSR2_29:1;
      uint64_t PMCSR2_30:1;
      uint64_t PMCSR2_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCSR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PFCAE2_1:1;
      uint64_t PFCAE2_2:1;
      uint64_t PFCAE2_3:1;
      uint64_t PFCAE2_4:1;
      uint64_t PFCAE2_5:1;
      uint64_t PFCAE2_6:1;
      uint64_t PFCAE2_7:1;
      uint64_t PFCAE2_8:1;
      uint64_t PFCAE2_9:1;
      uint64_t PFCAE2_10:1;
      uint64_t PFCAE2_11:1;
      uint64_t PFCAE2_12:1;
      uint64_t PFCAE2_13:1;
      uint64_t PFCAE2_14:1;
      uint64_t PFCAE2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCAE2;

  uint8_t res25[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINV2_0:1;
      uint64_t PINV2_1:1;
      uint64_t PINV2_2:1;
      uint64_t PINV2_3:1;
      uint64_t PINV2_4:1;
      uint64_t PINV2_5:1;
      uint64_t PINV2_6:1;
      uint64_t PINV2_7:1;
      uint64_t PINV2_8:1;
      uint64_t PINV2_9:1;
      uint64_t PINV2_10:1;
      uint64_t PINV2_11:1;
      uint64_t PINV2_12:1;
      uint64_t PINV2_13:1;
      uint64_t PINV2_14:1;
      uint64_t PINV2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINV2;

  uint8_t res26[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P3_0:1;
      uint64_t P3_1:1;
      uint64_t P3_2:1;
      uint64_t P3_3:1;
      uint64_t P3_4:1;
      uint64_t P3_5:1;
      uint64_t P3_6:1;
      uint64_t P3_7:1;
      uint64_t P3_8:1;
      uint64_t P3_9:1;
      uint64_t P3_10:1;
      uint64_t P3_11:1;
      uint64_t P3_12:1;
      uint64_t P3_13:1;
      uint64_t P3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P3;

  uint8_t res27[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSR3_0:1;
      uint64_t PSR3_1:1;
      uint64_t PSR3_2:1;
      uint64_t PSR3_3:1;
      uint64_t PSR3_4:1;
      uint64_t PSR3_5:1;
      uint64_t PSR3_6:1;
      uint64_t PSR3_7:1;
      uint64_t PSR3_8:1;
      uint64_t PSR3_9:1;
      uint64_t PSR3_10:1;
      uint64_t PSR3_11:1;
      uint64_t PSR3_12:1;
      uint64_t PSR3_13:1;
      uint64_t PSR3_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PSR3_16:1;
      uint64_t PSR3_17:1;
      uint64_t PSR3_18:1;
      uint64_t PSR3_19:1;
      uint64_t PSR3_20:1;
      uint64_t PSR3_21:1;
      uint64_t PSR3_22:1;
      uint64_t PSR3_23:1;
      uint64_t PSR3_24:1;
      uint64_t PSR3_25:1;
      uint64_t PSR3_26:1;
      uint64_t PSR3_27:1;
      uint64_t PSR3_28:1;
      uint64_t PSR3_29:1;
      uint64_t PSR3_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PNOT3_0:1;
      uint64_t PNOT3_1:1;
      uint64_t PNOT3_2:1;
      uint64_t PNOT3_3:1;
      uint64_t PNOT3_4:1;
      uint64_t PNOT3_5:1;
      uint64_t PNOT3_6:1;
      uint64_t PNOT3_7:1;
      uint64_t PNOT3_8:1;
      uint64_t PNOT3_9:1;
      uint64_t PNOT3_10:1;
      uint64_t PNOT3_11:1;
      uint64_t PNOT3_12:1;
      uint64_t PNOT3_13:1;
      uint64_t PNOT3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PNOT3;

  uint8_t res28[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPR3_0:1;
      uint64_t PPR3_1:1;
      uint64_t PPR3_2:1;
      uint64_t PPR3_3:1;
      uint64_t PPR3_4:1;
      uint64_t PPR3_5:1;
      uint64_t PPR3_6:1;
      uint64_t PPR3_7:1;
      uint64_t PPR3_8:1;
      uint64_t PPR3_9:1;
      uint64_t PPR3_10:1;
      uint64_t PPR3_11:1;
      uint64_t PPR3_12:1;
      uint64_t PPR3_13:1;
      uint64_t PPR3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PPR3;

  uint8_t res29[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PM3_0:1;
      uint64_t PM3_1:1;
      uint64_t PM3_2:1;
      uint64_t PM3_3:1;
      uint64_t PM3_4:1;
      uint64_t PM3_5:1;
      uint64_t PM3_6:1;
      uint64_t PM3_7:1;
      uint64_t PM3_8:1;
      uint64_t PM3_9:1;
      uint64_t PM3_10:1;
      uint64_t PM3_11:1;
      uint64_t PM3_12:1;
      uint64_t PM3_13:1;
      uint64_t PM3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PM3;

  uint8_t res30[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PMC3_0:1;
      uint64_t PMC3_1:1;
      uint64_t PMC3_2:1;
      uint64_t PMC3_3:1;
      uint64_t PMC3_4:1;
      uint64_t PMC3_5:1;
      uint64_t PMC3_6:1;
      uint64_t PMC3_7:1;
      uint64_t PMC3_8:1;
      uint64_t PMC3_9:1;
      uint64_t PMC3_10:1;
      uint64_t PMC3_11:1;
      uint64_t PMC3_12:1;
      uint64_t PMC3_13:1;
      uint64_t PMC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PMC3;

  uint8_t res31[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFC3_0:1;
      uint64_t PFC3_1:1;
      uint64_t PFC3_2:1;
      uint64_t PFC3_3:1;
      uint64_t PFC3_4:1;
      uint64_t PFC3_5:1;
      uint64_t PFC3_6:1;
      uint64_t PFC3_7:1;
      uint64_t PFC3_8:1;
      uint64_t PFC3_9:1;
      uint64_t PFC3_10:1;
      uint64_t PFC3_11:1;
      uint64_t PFC3_12:1;
      uint64_t PFC3_13:1;
      uint64_t PFC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFC3;

  uint8_t res32[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCE3_0:1;
      uint64_t PFCE3_1:1;
      uint64_t PFCE3_2:1;
      uint64_t PFCE3_3:1;
      uint64_t PFCE3_4:1;
      uint64_t PFCE3_5:1;
      uint64_t PFCE3_6:1;
      uint64_t PFCE3_7:1;
      uint64_t PFCE3_8:1;
      uint64_t PFCE3_9:1;
      uint64_t reservedSpace0:1;
      uint64_t PFCE3_11:1;
      uint64_t PFCE3_12:1;
      uint64_t PFCE3_13:1;
      uint64_t PFCE3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCE3;

  uint8_t res33[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSR3_0:1;
      uint64_t PMSR3_1:1;
      uint64_t PMSR3_2:1;
      uint64_t PMSR3_3:1;
      uint64_t PMSR3_4:1;
      uint64_t PMSR3_5:1;
      uint64_t PMSR3_6:1;
      uint64_t PMSR3_7:1;
      uint64_t PMSR3_8:1;
      uint64_t PMSR3_9:1;
      uint64_t PMSR3_10:1;
      uint64_t PMSR3_11:1;
      uint64_t PMSR3_12:1;
      uint64_t PMSR3_13:1;
      uint64_t PMSR3_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PMSR3_16:1;
      uint64_t PMSR3_17:1;
      uint64_t PMSR3_18:1;
      uint64_t PMSR3_19:1;
      uint64_t PMSR3_20:1;
      uint64_t PMSR3_21:1;
      uint64_t PMSR3_22:1;
      uint64_t PMSR3_23:1;
      uint64_t PMSR3_24:1;
      uint64_t PMSR3_25:1;
      uint64_t PMSR3_26:1;
      uint64_t PMSR3_27:1;
      uint64_t PMSR3_28:1;
      uint64_t PMSR3_29:1;
      uint64_t PMSR3_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMCSR3_0:1;
      uint64_t PMCSR3_1:1;
      uint64_t PMCSR3_2:1;
      uint64_t PMCSR3_3:1;
      uint64_t PMCSR3_4:1;
      uint64_t PMCSR3_5:1;
      uint64_t PMCSR3_6:1;
      uint64_t PMCSR3_7:1;
      uint64_t PMCSR3_8:1;
      uint64_t PMCSR3_9:1;
      uint64_t PMCSR3_10:1;
      uint64_t PMCSR3_11:1;
      uint64_t PMCSR3_12:1;
      uint64_t PMCSR3_13:1;
      uint64_t PMCSR3_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PMCSR3_16:1;
      uint64_t PMCSR3_17:1;
      uint64_t PMCSR3_18:1;
      uint64_t PMCSR3_19:1;
      uint64_t PMCSR3_20:1;
      uint64_t PMCSR3_21:1;
      uint64_t PMCSR3_22:1;
      uint64_t PMCSR3_23:1;
      uint64_t PMCSR3_24:1;
      uint64_t PMCSR3_25:1;
      uint64_t PMCSR3_26:1;
      uint64_t PMCSR3_27:1;
      uint64_t PMCSR3_28:1;
      uint64_t PMCSR3_29:1;
      uint64_t PMCSR3_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCSR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCAE3_0:1;
      uint64_t PFCAE3_1:1;
      uint64_t PFCAE3_2:1;
      uint64_t PFCAE3_3:1;
      uint64_t PFCAE3_4:1;
      uint64_t PFCAE3_5:1;
      uint64_t PFCAE3_6:1;
      uint64_t PFCAE3_7:1;
      uint64_t PFCAE3_8:1;
      uint64_t PFCAE3_9:1;
      uint64_t PFCAE3_10:1;
      uint64_t PFCAE3_11:1;
      uint64_t PFCAE3_12:1;
      uint64_t PFCAE3_13:1;
      uint64_t PFCAE3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCAE3;

  uint8_t res34[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINV3_0:1;
      uint64_t PINV3_1:1;
      uint64_t PINV3_2:1;
      uint64_t PINV3_3:1;
      uint64_t PINV3_4:1;
      uint64_t PINV3_5:1;
      uint64_t PINV3_6:1;
      uint64_t PINV3_7:1;
      uint64_t PINV3_8:1;
      uint64_t PINV3_9:1;
      uint64_t PINV3_10:1;
      uint64_t PINV3_11:1;
      uint64_t PINV3_12:1;
      uint64_t PINV3_13:1;
      uint64_t PINV3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINV3;

  uint8_t res35[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P4_0:1;
      uint64_t P4_1:1;
      uint64_t P4_2:1;
      uint64_t P4_3:1;
      uint64_t P4_4:1;
      uint64_t P4_5:1;
      uint64_t P4_6:1;
      uint64_t P4_7:1;
      uint64_t P4_8:1;
      uint64_t P4_9:1;
      uint64_t P4_10:1;
      uint64_t P4_11:1;
      uint64_t P4_12:1;
      uint64_t P4_13:1;
      uint64_t P4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P4;

  uint8_t res36[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSR4_0:1;
      uint64_t PSR4_1:1;
      uint64_t PSR4_2:1;
      uint64_t PSR4_3:1;
      uint64_t PSR4_4:1;
      uint64_t PSR4_5:1;
      uint64_t PSR4_6:1;
      uint64_t PSR4_7:1;
      uint64_t PSR4_8:1;
      uint64_t PSR4_9:1;
      uint64_t PSR4_10:1;
      uint64_t PSR4_11:1;
      uint64_t PSR4_12:1;
      uint64_t PSR4_13:1;
      uint64_t PSR4_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PSR4_16:1;
      uint64_t PSR4_17:1;
      uint64_t PSR4_18:1;
      uint64_t PSR4_19:1;
      uint64_t PSR4_20:1;
      uint64_t PSR4_21:1;
      uint64_t PSR4_22:1;
      uint64_t PSR4_23:1;
      uint64_t PSR4_24:1;
      uint64_t PSR4_25:1;
      uint64_t PSR4_26:1;
      uint64_t PSR4_27:1;
      uint64_t PSR4_28:1;
      uint64_t PSR4_29:1;
      uint64_t PSR4_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PNOT4_0:1;
      uint64_t PNOT4_1:1;
      uint64_t PNOT4_2:1;
      uint64_t PNOT4_3:1;
      uint64_t PNOT4_4:1;
      uint64_t PNOT4_5:1;
      uint64_t PNOT4_6:1;
      uint64_t PNOT4_7:1;
      uint64_t PNOT4_8:1;
      uint64_t PNOT4_9:1;
      uint64_t PNOT4_10:1;
      uint64_t PNOT4_11:1;
      uint64_t PNOT4_12:1;
      uint64_t PNOT4_13:1;
      uint64_t PNOT4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PNOT4;

  uint8_t res37[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPR4_0:1;
      uint64_t PPR4_1:1;
      uint64_t PPR4_2:1;
      uint64_t PPR4_3:1;
      uint64_t PPR4_4:1;
      uint64_t PPR4_5:1;
      uint64_t PPR4_6:1;
      uint64_t PPR4_7:1;
      uint64_t PPR4_8:1;
      uint64_t PPR4_9:1;
      uint64_t PPR4_10:1;
      uint64_t PPR4_11:1;
      uint64_t PPR4_12:1;
      uint64_t PPR4_13:1;
      uint64_t PPR4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PPR4;

  uint8_t res38[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PM4_0:1;
      uint64_t PM4_1:1;
      uint64_t PM4_2:1;
      uint64_t PM4_3:1;
      uint64_t PM4_4:1;
      uint64_t PM4_5:1;
      uint64_t PM4_6:1;
      uint64_t PM4_7:1;
      uint64_t PM4_8:1;
      uint64_t PM4_9:1;
      uint64_t PM4_10:1;
      uint64_t PM4_11:1;
      uint64_t PM4_12:1;
      uint64_t PM4_13:1;
      uint64_t PM4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PM4;

  uint8_t res39[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PMC4_0:1;
      uint64_t PMC4_1:1;
      uint64_t PMC4_2:1;
      uint64_t PMC4_3:1;
      uint64_t PMC4_4:1;
      uint64_t PMC4_5:1;
      uint64_t PMC4_6:1;
      uint64_t PMC4_7:1;
      uint64_t PMC4_8:1;
      uint64_t PMC4_9:1;
      uint64_t PMC4_10:1;
      uint64_t PMC4_11:1;
      uint64_t PMC4_12:1;
      uint64_t PMC4_13:1;
      uint64_t PMC4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PMC4;

  uint8_t res40[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFC4_0:1;
      uint64_t PFC4_1:1;
      uint64_t PFC4_2:1;
      uint64_t PFC4_3:1;
      uint64_t PFC4_4:1;
      uint64_t PFC4_5:1;
      uint64_t PFC4_6:1;
      uint64_t PFC4_7:1;
      uint64_t PFC4_8:1;
      uint64_t PFC4_9:1;
      uint64_t PFC4_10:1;
      uint64_t PFC4_11:1;
      uint64_t PFC4_12:1;
      uint64_t PFC4_13:1;
      uint64_t PFC4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFC4;

  uint8_t res41[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCE4_0:1;
      uint64_t PFCE4_1:1;
      uint64_t PFCE4_2:1;
      uint64_t PFCE4_3:1;
      uint64_t PFCE4_4:1;
      uint64_t PFCE4_5:1;
      uint64_t PFCE4_6:1;
      uint64_t PFCE4_7:1;
      uint64_t PFCE4_8:1;
      uint64_t PFCE4_9:1;
      uint64_t PFCE4_10:1;
      uint64_t PFCE4_11:1;
      uint64_t PFCE4_12:1;
      uint64_t PFCE4_13:1;
      uint64_t PFCE4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCE4;

  uint8_t res42[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSR4_0:1;
      uint64_t PMSR4_1:1;
      uint64_t PMSR4_2:1;
      uint64_t PMSR4_3:1;
      uint64_t PMSR4_4:1;
      uint64_t PMSR4_5:1;
      uint64_t PMSR4_6:1;
      uint64_t PMSR4_7:1;
      uint64_t PMSR4_8:1;
      uint64_t PMSR4_9:1;
      uint64_t PMSR4_10:1;
      uint64_t PMSR4_11:1;
      uint64_t PMSR4_12:1;
      uint64_t PMSR4_13:1;
      uint64_t PMSR4_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PMSR4_16:1;
      uint64_t PMSR4_17:1;
      uint64_t PMSR4_18:1;
      uint64_t PMSR4_19:1;
      uint64_t PMSR4_20:1;
      uint64_t PMSR4_21:1;
      uint64_t PMSR4_22:1;
      uint64_t PMSR4_23:1;
      uint64_t PMSR4_24:1;
      uint64_t PMSR4_25:1;
      uint64_t PMSR4_26:1;
      uint64_t PMSR4_27:1;
      uint64_t PMSR4_28:1;
      uint64_t PMSR4_29:1;
      uint64_t PMSR4_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMCSR4_0:1;
      uint64_t PMCSR4_1:1;
      uint64_t PMCSR4_2:1;
      uint64_t PMCSR4_3:1;
      uint64_t PMCSR4_4:1;
      uint64_t PMCSR4_5:1;
      uint64_t PMCSR4_6:1;
      uint64_t PMCSR4_7:1;
      uint64_t PMCSR4_8:1;
      uint64_t PMCSR4_9:1;
      uint64_t PMCSR4_10:1;
      uint64_t PMCSR4_11:1;
      uint64_t PMCSR4_12:1;
      uint64_t PMCSR4_13:1;
      uint64_t PMCSR4_14:1;
      uint64_t reservedSpace0:1;
      uint64_t PMCSR4_16:1;
      uint64_t PMCSR4_17:1;
      uint64_t PMCSR4_18:1;
      uint64_t PMCSR4_19:1;
      uint64_t PMCSR4_20:1;
      uint64_t PMCSR4_21:1;
      uint64_t PMCSR4_22:1;
      uint64_t PMCSR4_23:1;
      uint64_t PMCSR4_24:1;
      uint64_t PMCSR4_25:1;
      uint64_t PMCSR4_26:1;
      uint64_t PMCSR4_27:1;
      uint64_t PMCSR4_28:1;
      uint64_t PMCSR4_29:1;
      uint64_t PMCSR4_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCSR4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCAE4_0:1;
      uint64_t PFCAE4_1:1;
      uint64_t PFCAE4_2:1;
      uint64_t PFCAE4_3:1;
      uint64_t PFCAE4_4:1;
      uint64_t PFCAE4_5:1;
      uint64_t PFCAE4_6:1;
      uint64_t PFCAE4_7:1;
      uint64_t PFCAE4_8:1;
      uint64_t PFCAE4_9:1;
      uint64_t PFCAE4_10:1;
      uint64_t PFCAE4_11:1;
      uint64_t PFCAE4_12:1;
      uint64_t PFCAE4_13:1;
      uint64_t PFCAE4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCAE4;

  uint8_t res43[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINV4_0:1;
      uint64_t PINV4_1:1;
      uint64_t PINV4_2:1;
      uint64_t PINV4_3:1;
      uint64_t PINV4_4:1;
      uint64_t PINV4_5:1;
      uint64_t PINV4_6:1;
      uint64_t PINV4_7:1;
      uint64_t PINV4_8:1;
      uint64_t PINV4_9:1;
      uint64_t PINV4_10:1;
      uint64_t PINV4_11:1;
      uint64_t PINV4_12:1;
      uint64_t PINV4_13:1;
      uint64_t PINV4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINV4;

  uint8_t res44[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P5_0:1;
      uint64_t P5_1:1;
      uint64_t P5_2:1;
      uint64_t P5_3:1;
      uint64_t P5_4:1;
      uint64_t P5_5:1;
      uint64_t P5_6:1;
      uint64_t P5_7:1;
      uint64_t P5_8:1;
      uint64_t P5_9:1;
      uint64_t P5_10:1;
      uint64_t P5_11:1;
      uint64_t P5_12:1;
      uint64_t P5_13:1;
      uint64_t P5_14:1;
      uint64_t P5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P5;

  uint8_t res45[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSR5_0:1;
      uint64_t PSR5_1:1;
      uint64_t PSR5_2:1;
      uint64_t PSR5_3:1;
      uint64_t PSR5_4:1;
      uint64_t PSR5_5:1;
      uint64_t PSR5_6:1;
      uint64_t PSR5_7:1;
      uint64_t PSR5_8:1;
      uint64_t PSR5_9:1;
      uint64_t PSR5_10:1;
      uint64_t PSR5_11:1;
      uint64_t PSR5_12:1;
      uint64_t PSR5_13:1;
      uint64_t PSR5_14:1;
      uint64_t PSR5_15:1;
      uint64_t PSR5_16:1;
      uint64_t PSR5_17:1;
      uint64_t PSR5_18:1;
      uint64_t PSR5_19:1;
      uint64_t PSR5_20:1;
      uint64_t PSR5_21:1;
      uint64_t PSR5_22:1;
      uint64_t PSR5_23:1;
      uint64_t PSR5_24:1;
      uint64_t PSR5_25:1;
      uint64_t PSR5_26:1;
      uint64_t PSR5_27:1;
      uint64_t PSR5_28:1;
      uint64_t PSR5_29:1;
      uint64_t PSR5_30:1;
      uint64_t PSR5_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PNOT5_0:1;
      uint64_t PNOT5_1:1;
      uint64_t PNOT5_2:1;
      uint64_t PNOT5_3:1;
      uint64_t PNOT5_4:1;
      uint64_t PNOT5_5:1;
      uint64_t PNOT5_6:1;
      uint64_t PNOT5_7:1;
      uint64_t PNOT5_8:1;
      uint64_t PNOT5_9:1;
      uint64_t PNOT5_10:1;
      uint64_t PNOT5_11:1;
      uint64_t PNOT5_12:1;
      uint64_t PNOT5_13:1;
      uint64_t PNOT5_14:1;
      uint64_t PNOT5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PNOT5;

  uint8_t res46[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPR5_0:1;
      uint64_t PPR5_1:1;
      uint64_t PPR5_2:1;
      uint64_t PPR5_3:1;
      uint64_t PPR5_4:1;
      uint64_t PPR5_5:1;
      uint64_t PPR5_6:1;
      uint64_t PPR5_7:1;
      uint64_t PPR5_8:1;
      uint64_t PPR5_9:1;
      uint64_t PPR5_10:1;
      uint64_t PPR5_11:1;
      uint64_t PPR5_12:1;
      uint64_t PPR5_13:1;
      uint64_t PPR5_14:1;
      uint64_t PPR5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PPR5;

  uint8_t res47[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PM5_0:1;
      uint64_t PM5_1:1;
      uint64_t PM5_2:1;
      uint64_t PM5_3:1;
      uint64_t PM5_4:1;
      uint64_t PM5_5:1;
      uint64_t PM5_6:1;
      uint64_t PM5_7:1;
      uint64_t PM5_8:1;
      uint64_t PM5_9:1;
      uint64_t PM5_10:1;
      uint64_t PM5_11:1;
      uint64_t PM5_12:1;
      uint64_t PM5_13:1;
      uint64_t PM5_14:1;
      uint64_t PM5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PM5;

  uint8_t res48[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PMC5_0:1;
      uint64_t PMC5_1:1;
      uint64_t PMC5_2:1;
      uint64_t PMC5_3:1;
      uint64_t PMC5_4:1;
      uint64_t PMC5_5:1;
      uint64_t PMC5_6:1;
      uint64_t PMC5_7:1;
      uint64_t PMC5_8:1;
      uint64_t PMC5_9:1;
      uint64_t PMC5_10:1;
      uint64_t PMC5_11:1;
      uint64_t PMC5_12:1;
      uint64_t PMC5_13:1;
      uint64_t PMC5_14:1;
      uint64_t PMC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PMC5;

  uint8_t res49[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFC5_0:1;
      uint64_t PFC5_1:1;
      uint64_t PFC5_2:1;
      uint64_t reservedSpace0:1;
      uint64_t PFC5_4:1;
      uint64_t PFC5_5:1;
      uint64_t PFC5_6:1;
      uint64_t PFC5_7:1;
      uint64_t PFC5_8:1;
      uint64_t PFC5_9:1;
      uint64_t PFC5_10:1;
      uint64_t PFC5_11:1;
      uint64_t PFC5_12:1;
      uint64_t PFC5_13:1;
      uint64_t PFC5_14:1;
      uint64_t PFC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFC5;

  uint8_t res50[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCE5_0:1;
      uint64_t PFCE5_1:1;
      uint64_t PFCE5_2:1;
      uint64_t PFCE5_3:1;
      uint64_t PFCE5_4:1;
      uint64_t PFCE5_5:1;
      uint64_t PFCE5_6:1;
      uint64_t PFCE5_7:1;
      uint64_t PFCE5_8:1;
      uint64_t PFCE5_9:1;
      uint64_t PFCE5_10:1;
      uint64_t PFCE5_11:1;
      uint64_t PFCE5_12:1;
      uint64_t PFCE5_13:1;
      uint64_t PFCE5_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCE5;

  uint8_t res51[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMSR5_0:1;
      uint64_t PMSR5_1:1;
      uint64_t PMSR5_2:1;
      uint64_t PMSR5_3:1;
      uint64_t PMSR5_4:1;
      uint64_t PMSR5_5:1;
      uint64_t PMSR5_6:1;
      uint64_t PMSR5_7:1;
      uint64_t PMSR5_8:1;
      uint64_t PMSR5_9:1;
      uint64_t PMSR5_10:1;
      uint64_t PMSR5_11:1;
      uint64_t PMSR5_12:1;
      uint64_t PMSR5_13:1;
      uint64_t PMSR5_14:1;
      uint64_t PMSR5_15:1;
      uint64_t PMSR5_16:1;
      uint64_t PMSR5_17:1;
      uint64_t PMSR5_18:1;
      uint64_t PMSR5_19:1;
      uint64_t PMSR5_20:1;
      uint64_t PMSR5_21:1;
      uint64_t PMSR5_22:1;
      uint64_t PMSR5_23:1;
      uint64_t PMSR5_24:1;
      uint64_t PMSR5_25:1;
      uint64_t PMSR5_26:1;
      uint64_t PMSR5_27:1;
      uint64_t PMSR5_28:1;
      uint64_t PMSR5_29:1;
      uint64_t PMSR5_30:1;
      uint64_t PMSR5_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMCSR5_0:1;
      uint64_t PMCSR5_1:1;
      uint64_t PMCSR5_2:1;
      uint64_t PMCSR5_3:1;
      uint64_t PMCSR5_4:1;
      uint64_t PMCSR5_5:1;
      uint64_t PMCSR5_6:1;
      uint64_t PMCSR5_7:1;
      uint64_t PMCSR5_8:1;
      uint64_t PMCSR5_9:1;
      uint64_t PMCSR5_10:1;
      uint64_t PMCSR5_11:1;
      uint64_t PMCSR5_12:1;
      uint64_t PMCSR5_13:1;
      uint64_t PMCSR5_14:1;
      uint64_t PMCSR5_15:1;
      uint64_t PMCSR5_16:1;
      uint64_t PMCSR5_17:1;
      uint64_t PMCSR5_18:1;
      uint64_t PMCSR5_19:1;
      uint64_t PMCSR5_20:1;
      uint64_t PMCSR5_21:1;
      uint64_t PMCSR5_22:1;
      uint64_t PMCSR5_23:1;
      uint64_t PMCSR5_24:1;
      uint64_t PMCSR5_25:1;
      uint64_t PMCSR5_26:1;
      uint64_t PMCSR5_27:1;
      uint64_t PMCSR5_28:1;
      uint64_t PMCSR5_29:1;
      uint64_t PMCSR5_30:1;
      uint64_t PMCSR5_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCSR5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PFCAE5_0:1;
      uint64_t PFCAE5_1:1;
      uint64_t PFCAE5_2:1;
      uint64_t PFCAE5_3:1;
      uint64_t PFCAE5_4:1;
      uint64_t PFCAE5_5:1;
      uint64_t PFCAE5_6:1;
      uint64_t PFCAE5_7:1;
      uint64_t PFCAE5_8:1;
      uint64_t PFCAE5_9:1;
      uint64_t PFCAE5_10:1;
      uint64_t PFCAE5_11:1;
      uint64_t PFCAE5_12:1;
      uint64_t PFCAE5_13:1;
      uint64_t PFCAE5_14:1;
      uint64_t PFCAE5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFCAE5;

  uint8_t res52[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINV5_0:1;
      uint64_t PINV5_1:1;
      uint64_t PINV5_2:1;
      uint64_t PINV5_3:1;
      uint64_t PINV5_4:1;
      uint64_t PINV5_5:1;
      uint64_t PINV5_6:1;
      uint64_t PINV5_7:1;
      uint64_t PINV5_8:1;
      uint64_t PINV5_9:1;
      uint64_t PINV5_10:1;
      uint64_t PINV5_11:1;
      uint64_t PINV5_12:1;
      uint64_t PINV5_13:1;
      uint64_t PINV5_14:1;
      uint64_t PINV5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINV5;

  uint8_t res53[7820];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t reservedSpace0:3;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t reservedSpace0:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace1:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t reservedSpace0:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace1:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t reservedSpace0:3;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0_14;

  uint8_t res54[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:2;
      uint64_t PISA:1;
      uint64_t reservedSpace6:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:2;
      uint64_t PISA:1;
      uint64_t reservedSpace6:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1_4;

  uint8_t res55[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t reservedSpace0:2;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:2;
      uint64_t PISA:1;
      uint64_t reservedSpace6:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t reservedSpace0:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace1:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3_14;

  uint8_t res56[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:2;
      uint64_t PISA:1;
      uint64_t reservedSpace5:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:2;
      uint64_t PISA:1;
      uint64_t reservedSpace6:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:2;
      uint64_t PISA:1;
      uint64_t reservedSpace6:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:2;
      uint64_t PISA:1;
      uint64_t reservedSpace6:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:2;
      uint64_t PISA:1;
      uint64_t reservedSpace6:1;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4_14;

  uint8_t res57[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t reservedSpace1:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace1:1;
      uint64_t PM:1;
      uint64_t reservedSpace2:1;
      uint64_t PMC:1;
      uint64_t reservedSpace3:1;
      uint64_t PPR:1;
      uint64_t reservedSpace4:3;
      uint64_t P:1;
      uint64_t reservedSpace5:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace6:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace7:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace8:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t PFCE:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace0:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace1:1;
      uint64_t PPR:1;
      uint64_t reservedSpace2:3;
      uint64_t P:1;
      uint64_t reservedSpace3:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace4:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace5:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace6:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFC:1;
      uint64_t reservedSpace0:1;
      uint64_t PFCAE:1;
      uint64_t reservedSpace1:1;
      uint64_t PM:1;
      uint64_t PIPC:1;
      uint64_t PMC:1;
      uint64_t reservedSpace2:1;
      uint64_t PPR:1;
      uint64_t reservedSpace3:3;
      uint64_t P:1;
      uint64_t reservedSpace4:3;
      uint64_t PIBC:1;
      uint64_t PBDC:1;
      uint64_t PD:1;
      uint64_t PU:1;
      uint64_t reservedSpace5:4;
      uint64_t PDSC:1;
      uint64_t PUCC:1;
      uint64_t reservedSpace6:1;
      uint64_t PODCE:1;
      uint64_t PODC:1;
      uint64_t reservedSpace7:1;
      uint64_t PINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5_15;

  uint8_t res58[7808];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIBC0_0:1;
      uint64_t PIBC0_1:1;
      uint64_t PIBC0_2:1;
      uint64_t PIBC0_3:1;
      uint64_t PIBC0_4:1;
      uint64_t PIBC0_5:1;
      uint64_t PIBC0_6:1;
      uint64_t PIBC0_7:1;
      uint64_t PIBC0_8:1;
      uint64_t PIBC0_9:1;
      uint64_t PIBC0_10:1;
      uint64_t PIBC0_11:1;
      uint64_t PIBC0_12:1;
      uint64_t PIBC0_13:1;
      uint64_t PIBC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIBC0;

  uint8_t res59[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBDC0_0:1;
      uint64_t PBDC0_1:1;
      uint64_t PBDC0_2:1;
      uint64_t PBDC0_3:1;
      uint64_t PBDC0_4:1;
      uint64_t PBDC0_5:1;
      uint64_t PBDC0_6:1;
      uint64_t PBDC0_7:1;
      uint64_t PBDC0_8:1;
      uint64_t PBDC0_9:1;
      uint64_t PBDC0_10:1;
      uint64_t PBDC0_11:1;
      uint64_t PBDC0_12:1;
      uint64_t PBDC0_13:1;
      uint64_t PBDC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBDC0;

  uint8_t res60[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIPC0_0:1;
      uint64_t PIPC0_1:1;
      uint64_t PIPC0_2:1;
      uint64_t PIPC0_3:1;
      uint64_t PIPC0_4:1;
      uint64_t PIPC0_5:1;
      uint64_t PIPC0_6:1;
      uint64_t PIPC0_7:1;
      uint64_t PIPC0_8:1;
      uint64_t PIPC0_9:1;
      uint64_t PIPC0_10:1;
      uint64_t PIPC0_11:1;
      uint64_t PIPC0_12:1;
      uint64_t PIPC0_13:1;
      uint64_t PIPC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIPC0;

  uint8_t res61[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PU0_0:1;
      uint64_t PU0_1:1;
      uint64_t PU0_2:1;
      uint64_t PU0_3:1;
      uint64_t PU0_4:1;
      uint64_t PU0_5:1;
      uint64_t PU0_6:1;
      uint64_t PU0_7:1;
      uint64_t PU0_8:1;
      uint64_t PU0_9:1;
      uint64_t PU0_10:1;
      uint64_t PU0_11:1;
      uint64_t PU0_12:1;
      uint64_t PU0_13:1;
      uint64_t PU0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PU0;

  uint8_t res62[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PD0_0:1;
      uint64_t PD0_1:1;
      uint64_t PD0_2:1;
      uint64_t PD0_3:1;
      uint64_t PD0_4:1;
      uint64_t PD0_5:1;
      uint64_t PD0_6:1;
      uint64_t PD0_7:1;
      uint64_t PD0_8:1;
      uint64_t PD0_9:1;
      uint64_t PD0_10:1;
      uint64_t PD0_11:1;
      uint64_t PD0_12:1;
      uint64_t PD0_13:1;
      uint64_t PD0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PD0;

  uint8_t res63[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODC0_0:1;
      uint64_t PODC0_1:1;
      uint64_t PODC0_2:1;
      uint64_t PODC0_3:1;
      uint64_t PODC0_4:1;
      uint64_t PODC0_5:1;
      uint64_t PODC0_6:1;
      uint64_t PODC0_7:1;
      uint64_t PODC0_8:1;
      uint64_t PODC0_9:1;
      uint64_t PODC0_10:1;
      uint64_t PODC0_11:1;
      uint64_t PODC0_12:1;
      uint64_t PODC0_13:1;
      uint64_t PODC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSC0_0:1;
      uint64_t PDSC0_1:1;
      uint64_t PDSC0_2:1;
      uint64_t PDSC0_3:1;
      uint64_t PDSC0_4:1;
      uint64_t PDSC0_5:1;
      uint64_t PDSC0_6:1;
      uint64_t PDSC0_7:1;
      uint64_t PDSC0_8:1;
      uint64_t PDSC0_9:1;
      uint64_t PDSC0_10:1;
      uint64_t PDSC0_11:1;
      uint64_t PDSC0_12:1;
      uint64_t PDSC0_13:1;
      uint64_t PDSC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSC0;

  uint8_t res64[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUCC0_0:1;
      uint64_t PUCC0_1:1;
      uint64_t PUCC0_2:1;
      uint64_t PUCC0_3:1;
      uint64_t PUCC0_4:1;
      uint64_t PUCC0_5:1;
      uint64_t PUCC0_6:1;
      uint64_t PUCC0_7:1;
      uint64_t PUCC0_8:1;
      uint64_t PUCC0_9:1;
      uint64_t PUCC0_10:1;
      uint64_t PUCC0_11:1;
      uint64_t PUCC0_12:1;
      uint64_t PUCC0_13:1;
      uint64_t PUCC0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCC0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PISA0_3:1;
      uint64_t PISA0_4:1;
      uint64_t PISA0_5:1;
      uint64_t PISA0_6:1;
      uint64_t PISA0_7:1;
      uint64_t PISA0_8:1;
      uint64_t PISA0_9:1;
      uint64_t reservedSpace1:3;
      uint64_t PISA0_13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PISA0;

  uint8_t res65[14];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODCE0_0:1;
      uint64_t PODCE0_1:1;
      uint64_t PODCE0_2:1;
      uint64_t PODCE0_3:1;
      uint64_t PODCE0_4:1;
      uint64_t PODCE0_5:1;
      uint64_t PODCE0_6:1;
      uint64_t PODCE0_7:1;
      uint64_t PODCE0_8:1;
      uint64_t PODCE0_9:1;
      uint64_t PODCE0_10:1;
      uint64_t PODCE0_11:1;
      uint64_t PODCE0_12:1;
      uint64_t PODCE0_13:1;
      uint64_t PODCE0_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODCE0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIBC1_0:1;
      uint64_t PIBC1_1:1;
      uint64_t PIBC1_2:1;
      uint64_t PIBC1_3:1;
      uint64_t PIBC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIBC1;

  uint8_t res66[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBDC1_0:1;
      uint64_t PBDC1_1:1;
      uint64_t PBDC1_2:1;
      uint64_t PBDC1_3:1;
      uint64_t PBDC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBDC1;

  uint8_t res67[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PIPC1_3:1;
      uint64_t PIPC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIPC1;

  uint8_t res68[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PU1_0:1;
      uint64_t PU1_1:1;
      uint64_t PU1_2:1;
      uint64_t PU1_3:1;
      uint64_t PU1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PU1;

  uint8_t res69[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PD1_0:1;
      uint64_t PD1_1:1;
      uint64_t PD1_2:1;
      uint64_t PD1_3:1;
      uint64_t PD1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PD1;

  uint8_t res70[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODC1_0:1;
      uint64_t PODC1_1:1;
      uint64_t PODC1_2:1;
      uint64_t PODC1_3:1;
      uint64_t PODC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSC1_0:1;
      uint64_t PDSC1_1:1;
      uint64_t PDSC1_2:1;
      uint64_t PDSC1_3:1;
      uint64_t PDSC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSC1;

  uint8_t res71[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUCC1_0:1;
      uint64_t PUCC1_1:1;
      uint64_t PUCC1_2:1;
      uint64_t PUCC1_3:1;
      uint64_t PUCC1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCC1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PISA1_1:1;
      uint64_t PISA1_2:1;
      uint64_t PISA1_3:1;
      uint64_t PISA1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PISA1;

  uint8_t res72[14];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODCE1_0:1;
      uint64_t PODCE1_1:1;
      uint64_t PODCE1_2:1;
      uint64_t PODCE1_3:1;
      uint64_t PODCE1_4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODCE1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIBC2_0:1;
      uint64_t PIBC2_1:1;
      uint64_t PIBC2_2:1;
      uint64_t PIBC2_3:1;
      uint64_t PIBC2_4:1;
      uint64_t PIBC2_5:1;
      uint64_t PIBC2_6:1;
      uint64_t PIBC2_7:1;
      uint64_t PIBC2_8:1;
      uint64_t PIBC2_9:1;
      uint64_t PIBC2_10:1;
      uint64_t PIBC2_11:1;
      uint64_t PIBC2_12:1;
      uint64_t PIBC2_13:1;
      uint64_t PIBC2_14:1;
      uint64_t PIBC2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIBC2;

  uint8_t res73[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBDC2_0:1;
      uint64_t PBDC2_1:1;
      uint64_t PBDC2_2:1;
      uint64_t PBDC2_3:1;
      uint64_t PBDC2_4:1;
      uint64_t PBDC2_5:1;
      uint64_t PBDC2_6:1;
      uint64_t PBDC2_7:1;
      uint64_t PBDC2_8:1;
      uint64_t PBDC2_9:1;
      uint64_t PBDC2_10:1;
      uint64_t PBDC2_11:1;
      uint64_t PBDC2_12:1;
      uint64_t PBDC2_13:1;
      uint64_t PBDC2_14:1;
      uint64_t PBDC2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBDC2;

  uint8_t res74[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PIPC2_1:1;
      uint64_t PIPC2_2:1;
      uint64_t PIPC2_3:1;
      uint64_t reservedSpace1:1;
      uint64_t PIPC2_5:1;
      uint64_t PIPC2_6:1;
      uint64_t PIPC2_7:1;
      uint64_t PIPC2_8:1;
      uint64_t PIPC2_9:1;
      uint64_t reservedSpace2:2;
      uint64_t PIPC2_12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIPC2;

  uint8_t res75[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PU2_0:1;
      uint64_t PU2_1:1;
      uint64_t PU2_2:1;
      uint64_t PU2_3:1;
      uint64_t PU2_4:1;
      uint64_t PU2_5:1;
      uint64_t PU2_6:1;
      uint64_t PU2_7:1;
      uint64_t PU2_8:1;
      uint64_t PU2_9:1;
      uint64_t PU2_10:1;
      uint64_t PU2_11:1;
      uint64_t PU2_12:1;
      uint64_t PU2_13:1;
      uint64_t PU2_14:1;
      uint64_t PU2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PU2;

  uint8_t res76[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PD2_0:1;
      uint64_t PD2_1:1;
      uint64_t PD2_2:1;
      uint64_t PD2_3:1;
      uint64_t PD2_4:1;
      uint64_t PD2_5:1;
      uint64_t PD2_6:1;
      uint64_t PD2_7:1;
      uint64_t PD2_8:1;
      uint64_t PD2_9:1;
      uint64_t PD2_10:1;
      uint64_t PD2_11:1;
      uint64_t PD2_12:1;
      uint64_t PD2_13:1;
      uint64_t PD2_14:1;
      uint64_t PD2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PD2;

  uint8_t res77[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODC2_0:1;
      uint64_t PODC2_1:1;
      uint64_t PODC2_2:1;
      uint64_t PODC2_3:1;
      uint64_t PODC2_4:1;
      uint64_t PODC2_5:1;
      uint64_t PODC2_6:1;
      uint64_t PODC2_7:1;
      uint64_t PODC2_8:1;
      uint64_t PODC2_9:1;
      uint64_t PODC2_10:1;
      uint64_t PODC2_11:1;
      uint64_t PODC2_12:1;
      uint64_t PODC2_13:1;
      uint64_t PODC2_14:1;
      uint64_t PODC2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSC2_0:1;
      uint64_t PDSC2_1:1;
      uint64_t PDSC2_2:1;
      uint64_t PDSC2_3:1;
      uint64_t PDSC2_4:1;
      uint64_t PDSC2_5:1;
      uint64_t PDSC2_6:1;
      uint64_t PDSC2_7:1;
      uint64_t PDSC2_8:1;
      uint64_t PDSC2_9:1;
      uint64_t PDSC2_10:1;
      uint64_t PDSC2_11:1;
      uint64_t PDSC2_12:1;
      uint64_t PDSC2_13:1;
      uint64_t PDSC2_14:1;
      uint64_t PDSC2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSC2;

  uint8_t res78[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUCC2_0:1;
      uint64_t PUCC2_1:1;
      uint64_t PUCC2_2:1;
      uint64_t PUCC2_3:1;
      uint64_t PUCC2_4:1;
      uint64_t PUCC2_5:1;
      uint64_t PUCC2_6:1;
      uint64_t PUCC2_7:1;
      uint64_t PUCC2_8:1;
      uint64_t PUCC2_9:1;
      uint64_t PUCC2_10:1;
      uint64_t PUCC2_11:1;
      uint64_t PUCC2_12:1;
      uint64_t PUCC2_13:1;
      uint64_t PUCC2_14:1;
      uint64_t PUCC2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCC2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PISA2_0:1;
      uint64_t PISA2_1:1;
      uint64_t PISA2_2:1;
      uint64_t reservedSpace0:2;
      uint64_t PISA2_5:1;
      uint64_t reservedSpace1:1;
      uint64_t PISA2_7:1;
      uint64_t reservedSpace2:4;
      uint64_t PISA2_12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PISA2;

  uint8_t res79[14];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODCE2_0:1;
      uint64_t PODCE2_1:1;
      uint64_t PODCE2_2:1;
      uint64_t PODCE2_3:1;
      uint64_t PODCE2_4:1;
      uint64_t PODCE2_5:1;
      uint64_t PODCE2_6:1;
      uint64_t PODCE2_7:1;
      uint64_t PODCE2_8:1;
      uint64_t PODCE2_9:1;
      uint64_t PODCE2_10:1;
      uint64_t PODCE2_11:1;
      uint64_t PODCE2_12:1;
      uint64_t PODCE2_13:1;
      uint64_t PODCE2_14:1;
      uint64_t PODCE2_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODCE2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIBC3_0:1;
      uint64_t PIBC3_1:1;
      uint64_t PIBC3_2:1;
      uint64_t PIBC3_3:1;
      uint64_t PIBC3_4:1;
      uint64_t PIBC3_5:1;
      uint64_t PIBC3_6:1;
      uint64_t PIBC3_7:1;
      uint64_t PIBC3_8:1;
      uint64_t PIBC3_9:1;
      uint64_t PIBC3_10:1;
      uint64_t PIBC3_11:1;
      uint64_t PIBC3_12:1;
      uint64_t PIBC3_13:1;
      uint64_t PIBC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIBC3;

  uint8_t res80[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBDC3_0:1;
      uint64_t PBDC3_1:1;
      uint64_t PBDC3_2:1;
      uint64_t PBDC3_3:1;
      uint64_t PBDC3_4:1;
      uint64_t PBDC3_5:1;
      uint64_t PBDC3_6:1;
      uint64_t PBDC3_7:1;
      uint64_t PBDC3_8:1;
      uint64_t PBDC3_9:1;
      uint64_t PBDC3_10:1;
      uint64_t PBDC3_11:1;
      uint64_t PBDC3_12:1;
      uint64_t PBDC3_13:1;
      uint64_t PBDC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBDC3;

  uint8_t res81[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIPC3_0:1;
      uint64_t PIPC3_1:1;
      uint64_t PIPC3_2:1;
      uint64_t reservedSpace0:4;
      uint64_t PIPC3_7:1;
      uint64_t PIPC3_8:1;
      uint64_t PIPC3_9:1;
      uint64_t PIPC3_10:1;
      uint64_t PIPC3_11:1;
      uint64_t PIPC3_12:1;
      uint64_t PIPC3_13:1;
      uint64_t PIPC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIPC3;

  uint8_t res82[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PU3_0:1;
      uint64_t PU3_1:1;
      uint64_t PU3_2:1;
      uint64_t PU3_3:1;
      uint64_t PU3_4:1;
      uint64_t PU3_5:1;
      uint64_t PU3_6:1;
      uint64_t PU3_7:1;
      uint64_t PU3_8:1;
      uint64_t PU3_9:1;
      uint64_t PU3_10:1;
      uint64_t PU3_11:1;
      uint64_t PU3_12:1;
      uint64_t PU3_13:1;
      uint64_t PU3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PU3;

  uint8_t res83[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PD3_0:1;
      uint64_t PD3_1:1;
      uint64_t PD3_2:1;
      uint64_t PD3_3:1;
      uint64_t PD3_4:1;
      uint64_t PD3_5:1;
      uint64_t PD3_6:1;
      uint64_t PD3_7:1;
      uint64_t PD3_8:1;
      uint64_t PD3_9:1;
      uint64_t PD3_10:1;
      uint64_t PD3_11:1;
      uint64_t PD3_12:1;
      uint64_t PD3_13:1;
      uint64_t PD3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PD3;

  uint8_t res84[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODC3_0:1;
      uint64_t PODC3_1:1;
      uint64_t PODC3_2:1;
      uint64_t PODC3_3:1;
      uint64_t PODC3_4:1;
      uint64_t PODC3_5:1;
      uint64_t PODC3_6:1;
      uint64_t PODC3_7:1;
      uint64_t PODC3_8:1;
      uint64_t PODC3_9:1;
      uint64_t PODC3_10:1;
      uint64_t PODC3_11:1;
      uint64_t PODC3_12:1;
      uint64_t PODC3_13:1;
      uint64_t PODC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSC3_0:1;
      uint64_t PDSC3_1:1;
      uint64_t PDSC3_2:1;
      uint64_t PDSC3_3:1;
      uint64_t PDSC3_4:1;
      uint64_t PDSC3_5:1;
      uint64_t PDSC3_6:1;
      uint64_t PDSC3_7:1;
      uint64_t PDSC3_8:1;
      uint64_t PDSC3_9:1;
      uint64_t PDSC3_10:1;
      uint64_t PDSC3_11:1;
      uint64_t PDSC3_12:1;
      uint64_t PDSC3_13:1;
      uint64_t PDSC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSC3;

  uint8_t res85[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUCC3_0:1;
      uint64_t PUCC3_1:1;
      uint64_t PUCC3_2:1;
      uint64_t PUCC3_3:1;
      uint64_t PUCC3_4:1;
      uint64_t PUCC3_5:1;
      uint64_t PUCC3_6:1;
      uint64_t PUCC3_7:1;
      uint64_t PUCC3_8:1;
      uint64_t PUCC3_9:1;
      uint64_t PUCC3_10:1;
      uint64_t PUCC3_11:1;
      uint64_t PUCC3_12:1;
      uint64_t PUCC3_13:1;
      uint64_t PUCC3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCC3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PISA3_0:1;
      uint64_t PISA3_1:1;
      uint64_t reservedSpace0:12;
      uint64_t PISA3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PISA3;

  uint8_t res86[14];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODCE3_0:1;
      uint64_t PODCE3_1:1;
      uint64_t PODCE3_2:1;
      uint64_t PODCE3_3:1;
      uint64_t PODCE3_4:1;
      uint64_t PODCE3_5:1;
      uint64_t PODCE3_6:1;
      uint64_t PODCE3_7:1;
      uint64_t PODCE3_8:1;
      uint64_t PODCE3_9:1;
      uint64_t PODCE3_10:1;
      uint64_t PODCE3_11:1;
      uint64_t PODCE3_12:1;
      uint64_t PODCE3_13:1;
      uint64_t PODCE3_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODCE3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIBC4_0:1;
      uint64_t PIBC4_1:1;
      uint64_t PIBC4_2:1;
      uint64_t PIBC4_3:1;
      uint64_t PIBC4_4:1;
      uint64_t PIBC4_5:1;
      uint64_t PIBC4_6:1;
      uint64_t PIBC4_7:1;
      uint64_t PIBC4_8:1;
      uint64_t PIBC4_9:1;
      uint64_t PIBC4_10:1;
      uint64_t PIBC4_11:1;
      uint64_t PIBC4_12:1;
      uint64_t PIBC4_13:1;
      uint64_t PIBC4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIBC4;

  uint8_t res87[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBDC4_0:1;
      uint64_t PBDC4_1:1;
      uint64_t PBDC4_2:1;
      uint64_t PBDC4_3:1;
      uint64_t PBDC4_4:1;
      uint64_t PBDC4_5:1;
      uint64_t PBDC4_6:1;
      uint64_t PBDC4_7:1;
      uint64_t PBDC4_8:1;
      uint64_t PBDC4_9:1;
      uint64_t PBDC4_10:1;
      uint64_t PBDC4_11:1;
      uint64_t PBDC4_12:1;
      uint64_t PBDC4_13:1;
      uint64_t PBDC4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBDC4;

  uint8_t res88[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIPC4_0:1;
      uint64_t PIPC4_1:1;
      uint64_t PIPC4_2:1;
      uint64_t PIPC4_3:1;
      uint64_t PIPC4_4:1;
      uint64_t PIPC4_5:1;
      uint64_t PIPC4_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIPC4;

  uint8_t res89[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PU4_0:1;
      uint64_t PU4_1:1;
      uint64_t PU4_2:1;
      uint64_t PU4_3:1;
      uint64_t PU4_4:1;
      uint64_t PU4_5:1;
      uint64_t PU4_6:1;
      uint64_t PU4_7:1;
      uint64_t PU4_8:1;
      uint64_t PU4_9:1;
      uint64_t PU4_10:1;
      uint64_t PU4_11:1;
      uint64_t PU4_12:1;
      uint64_t PU4_13:1;
      uint64_t PU4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PU4;

  uint8_t res90[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PD4_0:1;
      uint64_t PD4_1:1;
      uint64_t PD4_2:1;
      uint64_t PD4_3:1;
      uint64_t PD4_4:1;
      uint64_t PD4_5:1;
      uint64_t PD4_6:1;
      uint64_t PD4_7:1;
      uint64_t PD4_8:1;
      uint64_t PD4_9:1;
      uint64_t PD4_10:1;
      uint64_t PD4_11:1;
      uint64_t PD4_12:1;
      uint64_t PD4_13:1;
      uint64_t PD4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PD4;

  uint8_t res91[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODC4_0:1;
      uint64_t PODC4_1:1;
      uint64_t PODC4_2:1;
      uint64_t PODC4_3:1;
      uint64_t PODC4_4:1;
      uint64_t PODC4_5:1;
      uint64_t PODC4_6:1;
      uint64_t PODC4_7:1;
      uint64_t PODC4_8:1;
      uint64_t PODC4_9:1;
      uint64_t PODC4_10:1;
      uint64_t PODC4_11:1;
      uint64_t PODC4_12:1;
      uint64_t PODC4_13:1;
      uint64_t PODC4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSC4_0:1;
      uint64_t PDSC4_1:1;
      uint64_t PDSC4_2:1;
      uint64_t PDSC4_3:1;
      uint64_t PDSC4_4:1;
      uint64_t PDSC4_5:1;
      uint64_t PDSC4_6:1;
      uint64_t PDSC4_7:1;
      uint64_t PDSC4_8:1;
      uint64_t PDSC4_9:1;
      uint64_t PDSC4_10:1;
      uint64_t PDSC4_11:1;
      uint64_t PDSC4_12:1;
      uint64_t PDSC4_13:1;
      uint64_t PDSC4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSC4;

  uint8_t res92[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUCC4_0:1;
      uint64_t PUCC4_1:1;
      uint64_t PUCC4_2:1;
      uint64_t PUCC4_3:1;
      uint64_t PUCC4_4:1;
      uint64_t PUCC4_5:1;
      uint64_t PUCC4_6:1;
      uint64_t PUCC4_7:1;
      uint64_t PUCC4_8:1;
      uint64_t PUCC4_9:1;
      uint64_t PUCC4_10:1;
      uint64_t PUCC4_11:1;
      uint64_t PUCC4_12:1;
      uint64_t PUCC4_13:1;
      uint64_t PUCC4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCC4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PISA4_0:1;
      uint64_t PISA4_1:1;
      uint64_t PISA4_2:1;
      uint64_t PISA4_3:1;
      uint64_t PISA4_4:1;
      uint64_t PISA4_5:1;
      uint64_t PISA4_6:1;
      uint64_t reservedSpace0:2;
      uint64_t PISA4_9:1;
      uint64_t PISA4_10:1;
      uint64_t reservedSpace1:1;
      uint64_t PISA4_12:1;
      uint64_t PISA4_13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PISA4;

  uint8_t res93[14];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODCE4_0:1;
      uint64_t PODCE4_1:1;
      uint64_t PODCE4_2:1;
      uint64_t PODCE4_3:1;
      uint64_t PODCE4_4:1;
      uint64_t PODCE4_5:1;
      uint64_t PODCE4_6:1;
      uint64_t PODCE4_7:1;
      uint64_t PODCE4_8:1;
      uint64_t PODCE4_9:1;
      uint64_t PODCE4_10:1;
      uint64_t PODCE4_11:1;
      uint64_t PODCE4_12:1;
      uint64_t PODCE4_13:1;
      uint64_t PODCE4_14:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODCE4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIBC5_0:1;
      uint64_t PIBC5_1:1;
      uint64_t PIBC5_2:1;
      uint64_t PIBC5_3:1;
      uint64_t PIBC5_4:1;
      uint64_t PIBC5_5:1;
      uint64_t PIBC5_6:1;
      uint64_t PIBC5_7:1;
      uint64_t PIBC5_8:1;
      uint64_t PIBC5_9:1;
      uint64_t PIBC5_10:1;
      uint64_t PIBC5_11:1;
      uint64_t PIBC5_12:1;
      uint64_t PIBC5_13:1;
      uint64_t PIBC5_14:1;
      uint64_t PIBC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIBC5;

  uint8_t res94[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PBDC5_0:1;
      uint64_t PBDC5_1:1;
      uint64_t PBDC5_2:1;
      uint64_t PBDC5_3:1;
      uint64_t PBDC5_4:1;
      uint64_t PBDC5_5:1;
      uint64_t PBDC5_6:1;
      uint64_t PBDC5_7:1;
      uint64_t PBDC5_8:1;
      uint64_t PBDC5_9:1;
      uint64_t PBDC5_10:1;
      uint64_t PBDC5_11:1;
      uint64_t PBDC5_12:1;
      uint64_t PBDC5_13:1;
      uint64_t PBDC5_14:1;
      uint64_t PBDC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PBDC5;

  uint8_t res95[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PIPC5_1:1;
      uint64_t PIPC5_2:1;
      uint64_t reservedSpace1:1;
      uint64_t PIPC5_4:1;
      uint64_t PIPC5_5:1;
      uint64_t PIPC5_6:1;
      uint64_t PIPC5_7:1;
      uint64_t PIPC5_8:1;
      uint64_t PIPC5_9:1;
      uint64_t PIPC5_10:1;
      uint64_t PIPC5_11:1;
      uint64_t PIPC5_12:1;
      uint64_t PIPC5_13:1;
      uint64_t PIPC5_14:1;
      uint64_t PIPC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIPC5;

  uint8_t res96[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PU5_0:1;
      uint64_t PU5_1:1;
      uint64_t PU5_2:1;
      uint64_t PU5_3:1;
      uint64_t PU5_4:1;
      uint64_t PU5_5:1;
      uint64_t PU5_6:1;
      uint64_t PU5_7:1;
      uint64_t PU5_8:1;
      uint64_t PU5_9:1;
      uint64_t PU5_10:1;
      uint64_t PU5_11:1;
      uint64_t PU5_12:1;
      uint64_t PU5_13:1;
      uint64_t PU5_14:1;
      uint64_t PU5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PU5;

  uint8_t res97[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PD5_0:1;
      uint64_t PD5_1:1;
      uint64_t PD5_2:1;
      uint64_t PD5_3:1;
      uint64_t PD5_4:1;
      uint64_t PD5_5:1;
      uint64_t PD5_6:1;
      uint64_t PD5_7:1;
      uint64_t PD5_8:1;
      uint64_t PD5_9:1;
      uint64_t PD5_10:1;
      uint64_t PD5_11:1;
      uint64_t PD5_12:1;
      uint64_t PD5_13:1;
      uint64_t PD5_14:1;
      uint64_t PD5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PD5;

  uint8_t res98[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODC5_0:1;
      uint64_t PODC5_1:1;
      uint64_t PODC5_2:1;
      uint64_t PODC5_3:1;
      uint64_t PODC5_4:1;
      uint64_t PODC5_5:1;
      uint64_t PODC5_6:1;
      uint64_t PODC5_7:1;
      uint64_t PODC5_8:1;
      uint64_t PODC5_9:1;
      uint64_t PODC5_10:1;
      uint64_t PODC5_11:1;
      uint64_t PODC5_12:1;
      uint64_t PODC5_13:1;
      uint64_t PODC5_14:1;
      uint64_t PODC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSC5_0:1;
      uint64_t PDSC5_1:1;
      uint64_t PDSC5_2:1;
      uint64_t PDSC5_3:1;
      uint64_t PDSC5_4:1;
      uint64_t PDSC5_5:1;
      uint64_t PDSC5_6:1;
      uint64_t PDSC5_7:1;
      uint64_t PDSC5_8:1;
      uint64_t PDSC5_9:1;
      uint64_t PDSC5_10:1;
      uint64_t PDSC5_11:1;
      uint64_t PDSC5_12:1;
      uint64_t PDSC5_13:1;
      uint64_t PDSC5_14:1;
      uint64_t PDSC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSC5;

  uint8_t res99[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUCC5_0:1;
      uint64_t PUCC5_1:1;
      uint64_t PUCC5_2:1;
      uint64_t PUCC5_3:1;
      uint64_t PUCC5_4:1;
      uint64_t PUCC5_5:1;
      uint64_t PUCC5_6:1;
      uint64_t PUCC5_7:1;
      uint64_t PUCC5_8:1;
      uint64_t PUCC5_9:1;
      uint64_t PUCC5_10:1;
      uint64_t PUCC5_11:1;
      uint64_t PUCC5_12:1;
      uint64_t PUCC5_13:1;
      uint64_t PUCC5_14:1;
      uint64_t PUCC5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUCC5;

  uint8_t res100[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PODCE5_0:1;
      uint64_t PODCE5_1:1;
      uint64_t PODCE5_2:1;
      uint64_t PODCE5_3:1;
      uint64_t PODCE5_4:1;
      uint64_t PODCE5_5:1;
      uint64_t PODCE5_6:1;
      uint64_t PODCE5_7:1;
      uint64_t PODCE5_8:1;
      uint64_t PODCE5_9:1;
      uint64_t PODCE5_10:1;
      uint64_t PODCE5_11:1;
      uint64_t PODCE5_12:1;
      uint64_t PODCE5_13:1;
      uint64_t PODCE5_14:1;
      uint64_t PODCE5_15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PODCE5;

};

#define PORT (*(volatile struct PORT_tag *) 0xffc10000)

struct PORTJ_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t JP0_0:1;
      uint64_t JP0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JP0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JP0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JP0;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JPSR0_0:1;
      uint64_t JPSR0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPSR0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPSR0_5:1;
      uint64_t reservedSpace2:10;
      uint64_t JPSR0_16:1;
      uint64_t JPSR0_17:1;
      uint64_t reservedSpace3:1;
      uint64_t JPSR0_19:1;
      uint64_t reservedSpace4:1;
      uint64_t JPSR0_21:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPSR0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPNOT0_0:1;
      uint64_t JPNOT0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPNOT0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPNOT0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPNOT0;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPPR0_0:1;
      uint64_t JPPR0_1:1;
      uint64_t JPPR0_2:1;
      uint64_t JPPR0_3:1;
      uint64_t JPPR0_4:1;
      uint64_t JPPR0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPPR0;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPM0_0:1;
      uint64_t JPM0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPM0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPM0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPM0;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPMC0_0:1;
      uint64_t JPMC0_1:1;
      uint64_t JPMC0_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPMC0;

  uint8_t res4[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPFCE0_0:1;
      uint64_t JPFCE0_1:1;
      uint64_t JPFCE0_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPFCE0;

  uint8_t res5[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JPMSR0_0:1;
      uint64_t JPMSR0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPMSR0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPMSR0_5:1;
      uint64_t reservedSpace2:10;
      uint64_t JPMSR0_16:1;
      uint64_t JPMSR0_17:1;
      uint64_t reservedSpace3:1;
      uint64_t JPMSR0_19:1;
      uint64_t reservedSpace4:1;
      uint64_t JPMSR0_21:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPMSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JPMCSR0_0:1;
      uint64_t JPMCSR0_1:1;
      uint64_t JPMCSR0_2:1;
      uint64_t reservedSpace0:13;
      uint64_t JPMCSR0_16:1;
      uint64_t JPMCSR0_17:1;
      uint64_t JPMCSR0_18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPMCSR0;

  uint8_t res6[8152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t JPFCE:1;
      uint64_t reservedSpace1:2;
      uint64_t JPM:1;
      uint64_t reservedSpace2:1;
      uint64_t JPMC:1;
      uint64_t reservedSpace3:1;
      uint64_t JPPR:1;
      uint64_t reservedSpace4:3;
      uint64_t JP:1;
      uint64_t reservedSpace5:3;
      uint64_t JPIBC:1;
      uint64_t JPBDC:1;
      uint64_t JPD:1;
      uint64_t JPU:1;
      uint64_t reservedSpace6:2;
      uint64_t JPISA:1;
      uint64_t reservedSpace7:1;
      uint64_t JPDSC:1;
      uint64_t JPUCC:1;
      uint64_t reservedSpace8:2;
      uint64_t JPODC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPCR0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t JPFCE:1;
      uint64_t reservedSpace1:2;
      uint64_t JPM:1;
      uint64_t reservedSpace2:1;
      uint64_t JPMC:1;
      uint64_t reservedSpace3:1;
      uint64_t JPPR:1;
      uint64_t reservedSpace4:3;
      uint64_t JP:1;
      uint64_t reservedSpace5:3;
      uint64_t JPIBC:1;
      uint64_t JPBDC:1;
      uint64_t JPD:1;
      uint64_t JPU:1;
      uint64_t reservedSpace6:2;
      uint64_t JPISA:1;
      uint64_t reservedSpace7:1;
      uint64_t JPDSC:1;
      uint64_t JPUCC:1;
      uint64_t reservedSpace8:2;
      uint64_t JPODC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPCR0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t JPFCE:1;
      uint64_t reservedSpace1:4;
      uint64_t JPMC:1;
      uint64_t reservedSpace2:1;
      uint64_t JPPR:1;
      uint64_t reservedSpace3:7;
      uint64_t JPIBC:1;
      uint64_t reservedSpace4:1;
      uint64_t JPD:1;
      uint64_t JPU:1;
      uint64_t reservedSpace5:2;
      uint64_t JPISA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPCR0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t JPM:1;
      uint64_t reservedSpace1:3;
      uint64_t JPPR:1;
      uint64_t reservedSpace2:3;
      uint64_t JP:1;
      uint64_t reservedSpace3:3;
      uint64_t JPIBC:1;
      uint64_t JPBDC:1;
      uint64_t JPD:1;
      uint64_t JPU:1;
      uint64_t reservedSpace4:2;
      uint64_t JPISA:1;
      uint64_t reservedSpace5:1;
      uint64_t JPDSC:1;
      uint64_t JPUCC:1;
      uint64_t reservedSpace6:2;
      uint64_t JPODC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPCR0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t JPPR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPCR0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t JPM:1;
      uint64_t reservedSpace1:3;
      uint64_t JPPR:1;
      uint64_t reservedSpace2:3;
      uint64_t JP:1;
      uint64_t reservedSpace3:3;
      uint64_t JPIBC:1;
      uint64_t JPBDC:1;
      uint64_t JPD:1;
      uint64_t JPU:1;
      uint64_t reservedSpace4:2;
      uint64_t JPISA:1;
      uint64_t reservedSpace5:1;
      uint64_t JPDSC:1;
      uint64_t JPUCC:1;
      uint64_t reservedSpace6:2;
      uint64_t JPODC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPCR0_5;

  uint8_t res7[8168];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPIBC0_0:1;
      uint64_t JPIBC0_1:1;
      uint64_t JPIBC0_2:1;
      uint64_t JPIBC0_3:1;
      uint64_t reservedSpace0:1;
      uint64_t JPIBC0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPIBC0;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPBDC0_0:1;
      uint64_t JPBDC0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPBDC0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPBDC0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPBDC0;

  uint8_t res9[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPU0_0:1;
      uint64_t JPU0_1:1;
      uint64_t JPU0_2:1;
      uint64_t JPU0_3:1;
      uint64_t reservedSpace0:1;
      uint64_t JPU0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPU0;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPD0_0:1;
      uint64_t JPD0_1:1;
      uint64_t JPD0_2:1;
      uint64_t JPD0_3:1;
      uint64_t reservedSpace0:1;
      uint64_t JPD0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPD0;

  uint8_t res11[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JPODC0_0:1;
      uint64_t JPODC0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPODC0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPODC0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPODC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JPDSC0_0:1;
      uint64_t JPDSC0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPDSC0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPDSC0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPDSC0;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JPUCC0_0:1;
      uint64_t JPUCC0_1:1;
      uint64_t reservedSpace0:1;
      uint64_t JPUCC0_3:1;
      uint64_t reservedSpace1:1;
      uint64_t JPUCC0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JPUCC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t JPISA0_0:1;
      uint64_t JPISA0_1:1;
      uint64_t JPISA0_2:1;
      uint64_t JPISA0_3:1;
      uint64_t reservedSpace0:1;
      uint64_t JPISA0_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) JPISA0;

};

#define PORTJ (*(volatile struct PORTJ_tag *) 0xffc20000)

struct DNFA0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA0 (*(volatile struct DNFA0_tag *) 0xffc30000)

struct DNFA1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA1 (*(volatile struct DNFA1_tag *) 0xffc30100)

struct DNFA2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA2 (*(volatile struct DNFA2_tag *) 0xffc30200)

struct DNFA3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA3 (*(volatile struct DNFA3_tag *) 0xffc30300)

struct DNFA4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA4 (*(volatile struct DNFA4_tag *) 0xffc30400)

struct DNFA5_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA5 (*(volatile struct DNFA5_tag *) 0xffc30500)

struct DNFA6_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA6 (*(volatile struct DNFA6_tag *) 0xffc30600)

struct DNFA7_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA7 (*(volatile struct DNFA7_tag *) 0xffc30700)

struct DNFA8_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA8 (*(volatile struct DNFA8_tag *) 0xffc30800)

struct DNFA9_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
      uint64_t NFENL6:1;
      uint64_t NFENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
      uint64_t NFENL6:1;
      uint64_t NFENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA9 (*(volatile struct DNFA9_tag *) 0xffc30900)

struct DNFA10_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA10 (*(volatile struct DNFA10_tag *) 0xffc30a00)

struct DNFA11_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA11 (*(volatile struct DNFA11_tag *) 0xffc30b00)

struct DNFA12_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA12 (*(volatile struct DNFA12_tag *) 0xffc30c00)

struct DNFA13_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA13 (*(volatile struct DNFA13_tag *) 0xffc30d00)

struct DNFA14_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
      uint64_t NFENL6:1;
      uint64_t NFENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
      uint64_t NFENL6:1;
      uint64_t NFENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA14 (*(volatile struct DNFA14_tag *) 0xffc30e00)

struct DNFA15_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA15 (*(volatile struct DNFA15_tag *) 0xffc30f00)

struct DNFA16_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA16 (*(volatile struct DNFA16_tag *) 0xffc31000)

struct DNFA17_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA17 (*(volatile struct DNFA17_tag *) 0xffc31100)

struct DNFA18_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA18 (*(volatile struct DNFA18_tag *) 0xffc31200)

struct DNFA19_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
      uint64_t NFENL6:1;
      uint64_t NFENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
      uint64_t NFENL6:1;
      uint64_t NFENL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA19 (*(volatile struct DNFA19_tag *) 0xffc31300)

struct DNFA20_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA20 (*(volatile struct DNFA20_tag *) 0xffc31400)

struct DNFA21_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA21 (*(volatile struct DNFA21_tag *) 0xffc31500)

struct DNFA22_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA22 (*(volatile struct DNFA22_tag *) 0xffc31600)

struct DNFA23_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA23 (*(volatile struct DNFA23_tag *) 0xffc31700)

struct DNFA24_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA24 (*(volatile struct DNFA24_tag *) 0xffc31800)

struct DNFA25_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA25 (*(volatile struct DNFA25_tag *) 0xffc31900)

struct DNFA26_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA26 (*(volatile struct DNFA26_tag *) 0xffc31a00)

struct DNFA27_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA27 (*(volatile struct DNFA27_tag *) 0xffc31b00)

struct DNFA28_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA28 (*(volatile struct DNFA28_tag *) 0xffc31c00)

struct DNFA29_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA29 (*(volatile struct DNFA29_tag *) 0xffc31d00)

struct DNFA30_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA30 (*(volatile struct DNFA30_tag *) 0xffc31e00)

struct DNFA31_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA31 (*(volatile struct DNFA31_tag *) 0xffc31f00)

struct DNFA32_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA32 (*(volatile struct DNFA32_tag *) 0xffc32000)

struct DNFA33_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA33 (*(volatile struct DNFA33_tag *) 0xffc32100)

struct DNFA34_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA34 (*(volatile struct DNFA34_tag *) 0xffc32200)

struct DNFA35_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA35 (*(volatile struct DNFA35_tag *) 0xffc32300)

struct DNFA36_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA36 (*(volatile struct DNFA36_tag *) 0xffc32400)

struct DNFA37_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA37 (*(volatile struct DNFA37_tag *) 0xffc32500)

struct DNFA38_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA38 (*(volatile struct DNFA38_tag *) 0xffc32600)

struct DNFA39_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA39 (*(volatile struct DNFA39_tag *) 0xffc32700)

struct DNFA40_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA40 (*(volatile struct DNFA40_tag *) 0xffc32800)

struct DNFA41_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA41 (*(volatile struct DNFA41_tag *) 0xffc32900)

struct DNFA42_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
      uint64_t NFENL2:1;
      uint64_t NFENL3:1;
      uint64_t NFENL4:1;
      uint64_t NFENL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA42 (*(volatile struct DNFA42_tag *) 0xffc32a00)

struct DNFA43_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRS:3;
      uint64_t reservedSpace0:2;
      uint64_t NFSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EN;

  uint8_t res1[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NFENL0:1;
      uint64_t NFENL1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENL;

};

#define DNFA43 (*(volatile struct DNFA43_tag *) 0xffc32b00)

struct FCLA0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR0:1;
      uint64_t INTF0:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

};

#define FCLA0 (*(volatile struct FCLA0_tag *) 0xffc34000)

struct FCLA1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR0:1;
      uint64_t INTF0:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR1:1;
      uint64_t INTF1:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR2:1;
      uint64_t INTF2:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR3:1;
      uint64_t INTF3:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR4:1;
      uint64_t INTF4:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL4;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR5:1;
      uint64_t INTF5:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL5;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR6:1;
      uint64_t INTF6:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL6;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR7:1;
      uint64_t INTF7:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL7;

};

#define FCLA1 (*(volatile struct FCLA1_tag *) 0xffc34020)

struct FCLA2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR0:1;
      uint64_t INTF0:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR1:1;
      uint64_t INTF1:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR2:1;
      uint64_t INTF2:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR3:1;
      uint64_t INTF3:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR4:1;
      uint64_t INTF4:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL4;

};

#define FCLA2 (*(volatile struct FCLA2_tag *) 0xffc34040)

struct FCLA3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR0:1;
      uint64_t INTF0:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR1:1;
      uint64_t INTF1:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR2:1;
      uint64_t INTF2:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR3:1;
      uint64_t INTF3:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR4:1;
      uint64_t INTF4:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL4;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR5:1;
      uint64_t INTF5:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL5;

};

#define FCLA3 (*(volatile struct FCLA3_tag *) 0xffc34060)

struct FCLA4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR0:1;
      uint64_t INTF0:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTR1:1;
      uint64_t INTF1:1;
      uint64_t reservedSpace0:5;
      uint64_t BYPS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL1;

};

#define FCLA4 (*(volatile struct FCLA4_tag *) 0xffc34080)

struct PBG5_tag
{
  uint32_t FSGD5APROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID00;

  uint32_t FSGD5APROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID01;

  uint32_t FSGD5APROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID02;

  uint32_t FSGD5APROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID03;

  uint32_t FSGD5APROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID04;

  uint32_t FSGD5APROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID05;

  uint32_t FSGD5APROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID06;

  uint32_t FSGD5APROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID07;

  uint32_t FSGD5APROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID08;

  uint32_t FSGD5APROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID09;

  uint32_t FSGD5APROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID10;

  uint32_t FSGD5APROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID11;

  uint32_t FSGD5APROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID12;

  uint32_t FSGD5APROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID13;

  uint32_t FSGD5APROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID14;

  uint32_t FSGD5APROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5ASPID15;

  uint32_t FSGD5BPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID00;

  uint32_t FSGD5BPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID01;

  uint32_t FSGD5BPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID02;

  uint32_t FSGD5BPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID03;

  uint8_t res0[16];

  uint32_t FSGD5BPROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID06;

  uint32_t FSGD5BPROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID07;

  uint32_t FSGD5BPROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID08;

  uint32_t FSGD5BPROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID09;

  uint32_t FSGD5BPROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID10;

  uint32_t FSGD5BPROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID11;

  uint32_t FSGD5BPROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID12;

  uint32_t FSGD5BPROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID13;

  uint32_t FSGD5BPROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID14;

  uint32_t FSGD5BPROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5BSPID15;

  uint32_t FSGD5CPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5CSPID00;

  uint32_t FSGD5CPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5CSPID01;

  uint32_t FSGD5CPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5CSPID02;

  uint32_t FSGD5CPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5CSPID03;

  uint32_t FSGD5CPROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5CSPID04;

  uint32_t FSGD5CPROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD5CSPID05;

  uint8_t res1[720];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRSLV5CTL;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV5STAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
      uint64_t reservedSpace0:12;
      uint64_t PEID:3;
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV5TYPE;

};

#define PBG5 (*(volatile struct PBG5_tag *) 0xffc40000)

struct PBECC5_tag
{
  uint32_t APEC2ECCCTL;
  uint32_t APEC2ERRINT;
  uint32_t APEC2STCLR;
  uint32_t APEC2OVFSTR;
  uint32_t APEC21STERSTR;
  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APEC21STEADR0;

};

#define PBECC5 (*(volatile struct PBECC5_tag *) 0xffc40800)

struct GRG_tag
{
  uint32_t MGDGRPROT0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID0;

  uint32_t MGDGRBAD0;
  uint32_t MGDGRADV0;
  uint32_t MGDGRPROT1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID1;

  uint32_t MGDGRBAD1;
  uint32_t MGDGRADV1;
  uint32_t MGDGRPROT2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID2;

  uint32_t MGDGRBAD2;
  uint32_t MGDGRADV2;
  uint32_t MGDGRPROT3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID3;

  uint32_t MGDGRBAD3;
  uint32_t MGDGRADV3;
  uint32_t MGDGRPROT4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID4;

  uint32_t MGDGRBAD4;
  uint32_t MGDGRADV4;
  uint32_t MGDGRPROT5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID5;

  uint32_t MGDGRBAD5;
  uint32_t MGDGRADV5;
  uint32_t MGDGRPROT6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID6;

  uint32_t MGDGRBAD6;
  uint32_t MGDGRADV6;
  uint32_t MGDGRPROT7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSPID7;

  uint32_t MGDGRBAD7;
  uint32_t MGDGRADV7;
  uint8_t res0[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSCTL_VCI2GRAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSSTAT_VCI2GRAM;

  uint8_t res1[4];

  uint32_t MGDGRSTYPE_VCI2GRAM;
  uint8_t res2[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSCTL_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSSTAT_PE1;

  uint8_t res3[4];

  uint32_t MGDGRSTYPE_PE1;
  uint8_t res4[1264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSCTL_AXI2GRAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MGDGRSSTAT_AXI2GRAM;

  uint8_t res5[4];

  uint32_t MGDGRSTYPE_AXI2GRAM;
};

#define GRG (*(volatile struct GRG_tag *) 0xffc49000)

struct PEG_tag
{
  uint32_t PGERRSTATCTL_PE1;
  uint32_t PGERRSTAT_PE1;
  uint32_t PGERRINFO_PE1;
  uint8_t res0[3818612];

  uint32_t G0MK;
  uint32_t G0BA;
  uint32_t G0SP;
  uint8_t res1[4];

  uint32_t G1MK;
  uint32_t G1BA;
  uint32_t G1SP;
  uint8_t res2[4];

  uint32_t G2MK;
  uint32_t G2BA;
  uint32_t G2SP;
  uint8_t res3[4];

  uint32_t G3MK;
  uint32_t G3BA;
  uint32_t G3SP;
  uint8_t res4[4];

  uint32_t G4MK;
  uint32_t G4BA;
  uint32_t G4SP;
  uint8_t res5[4];

  uint32_t G5MK;
  uint32_t G5BA;
  uint32_t G5SP;
  uint8_t res6[4];

  uint32_t G6MK;
  uint32_t G6BA;
  uint32_t G6SP;
  uint8_t res7[4];

  uint32_t G7MK;
  uint32_t G7BA;
  uint32_t G7SP;
};

#define PEG (*(volatile struct PEG_tag *) 0xffc4a200)

struct PBG0_tag
{
  uint32_t APBFSGDPROT_PDMACM_A;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_PDMACM_A;

  uint32_t APBFSGDPROT_PDMACM_B;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_PDMACM_B;

  uint32_t APBFSGDPROT_PDMACH_A;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_PDMACH_A;

  uint32_t APBFSGDPROT_PDMACH_B;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_PDMACH_B;

  uint32_t APBFSGDPROT_INTC2_A;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_INTC2_A;

  uint32_t APBFSGDPROT_INTC2_B;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_INTC2_B;

  uint8_t res0[16];

  uint32_t APBFSGDPROT_PBG_A;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_PBG_A;

  uint32_t APBFSGDPROT_PBG_B;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_PBG_B;

  uint32_t APBFSGDPROT_SP1_A;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_SP1_A;

  uint32_t APBFSGDPROT_SP1_B;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_SP1_B;

  uint8_t res1[16];

  uint32_t APBFSGDPROT_SP4_A;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_SP4_A;

  uint32_t APBFSGDPROT_SP4_B;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBFSGDSPID_SP4_B;

  uint8_t res2[1920];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVCTL_PFSS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVSTAT_PFSS0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
      uint64_t reservedSpace0:12;
      uint64_t PEID:3;
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVTYPE_PFSS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVCTL_PFSS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVSTAT_PFSS1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
      uint64_t reservedSpace0:12;
      uint64_t PEID:3;
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVTYPE_PFSS1;

  uint8_t res5[55264];

  uint32_t FSGD0PROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID00;

  uint32_t FSGD0PROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID01;

  uint8_t res6[16];

  uint32_t FSGD0PROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID04;

  uint32_t FSGD0PROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID05;

  uint32_t FSGD0PROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID06;

  uint32_t FSGD0PROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID07;

  uint8_t res7[16];

  uint32_t FSGD0PROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID10;

  uint32_t FSGD0PROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD0SPID11;

  uint8_t res8[160];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRSLV0CTL;

  uint8_t res9[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV0STAT;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
      uint64_t reservedSpace0:12;
      uint64_t PEID:3;
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV0TYPE;

};

#define PBG0 (*(volatile struct PBG0_tag *) 0xffc4c000)

struct PDMACOMP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACMPERR:30;
      uint64_t PROT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMA_COMP_CNTRL;

};

#define PDMACOMP (*(volatile struct PDMACOMP_tag *) 0xffc4ca00)

struct ECCEEP_tag
{
  uint32_t DFECCCTL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDF:1;
      uint64_t DEDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFERSTR;

  uint32_t DFERSTC;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFOVFSTR;

  uint32_t DFOVFSTC;
  uint32_t DFERRINT;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DFEADR:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFEADR;

  uint32_t DFTSTCTL;
};

#define ECCEEP (*(volatile struct ECCEEP_tag *) 0xffc5b000)

struct ECCIC1_tag
{
  uint32_t IDECCCTL_PE1;
  uint32_t IDERRINT_PE1;
  uint32_t IDSERSTCLR_PE1;
  uint32_t IDDERSTCLR_PE1;
  uint32_t IDOVFSTR_PE1;
  uint8_t res0[12];

  uint32_t IDSERSTR_PE1;
  uint8_t res1[44];

  uint32_t IDDERSTR_PE1;
  uint8_t res2[12];

  uint32_t IDSEDADR0_PE1;
  uint32_t IDSEDADR1_PE1;
  uint8_t res3[120];

  uint32_t IDDEDADR0_PE1;
  uint32_t IDDEDADR1_PE1;
  uint8_t res4[3864];

  uint32_t ITECCCTL_PE1;
  uint32_t ITERRINT_PE1;
  uint32_t ITSERSTCLR_PE1;
  uint32_t ITDERSTCLR_PE1;
  uint32_t ITOVFSTR_PE1;
  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERROVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITSERSTR_PE1;

  uint8_t res6[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DEDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITDERSTR_PE1;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITSEDADR_PE1;

  uint8_t res8[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITDEDADR_PE1;

};

#define ECCIC1 (*(volatile struct ECCIC1_tag *) 0xffc60400)

struct ECCFLI_tag
{
  uint32_t UCFERRINT;
  uint32_t UCFSERSTCLR;
  uint32_t UCFDERSTCLR;
  uint32_t UCFOVFSTR;
  uint8_t res0[16];

  uint32_t UCFSERSTR;
  uint8_t res1[12];

  uint32_t UCFDERSTR;
  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCF1SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCF2SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCF3SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCF4SEDADR;

  uint8_t res3[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UCFDEDADR;

  uint8_t res4[60];

  uint32_t CFAPCTL;
  uint8_t res5[252];

  uint32_t CFECCCTL_VCI2CFBA;
  uint8_t res6[236];

  uint32_t CFSTSTCTL_VCI2CFBA;
  uint8_t res7[268];

  uint32_t CFECCCTL_PE1;
  uint8_t res8[236];

  uint32_t CFSTSTCTL_PE1;
};

#define ECCFLI (*(volatile struct ECCFLI_tag *) 0xffc62000)

struct PBECC0_tag
{
  uint32_t CFECCCTL_VCI2CFBB;
  uint32_t CFERRINT_VCI2CFBB;
  uint32_t CFERSTCLR_VCI2CFBB;
  uint32_t CFOVFSTR_VCI2CFBB;
  uint32_t CFERSTR_VCI2CFBB;
  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFEADR0_VCI2CFBB;

  uint8_t res1[1964];

  uint32_t IFECCCTL_PE1;
  uint32_t IFERRINT_PE1;
  uint32_t IFERSTCLR_PE1;
  uint32_t IFOVFSTR_PE1;
  uint32_t IFERSTR_PE1;
  uint8_t res2[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFERADR_PE1;

  uint8_t res3[11180];

  uint32_t LSSECCCTL_PE1;
  uint32_t LSSERRINT_PE1;
  uint32_t LSSERSTCLR_PE1;
  uint32_t LSSOVFSTR_PE1;
  uint32_t LSSERSTR_PE1;
  uint8_t res4[60];

  uint32_t LSSEADR_PE1;
  uint8_t res5[940];

  uint32_t LSMECCCTL_PE1;
  uint32_t LSMERRINT_PE1;
  uint32_t LSMERSTCLR_PE1;
  uint32_t LSMOVFSTR_PE1;
  uint32_t LSMERSTR_PE1;
  uint8_t res6[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LSMEADR_PE1;

  uint8_t res7[2992];

  uint32_t VPERRINT_SG0;
  uint32_t VPERSTCLR_SG0;
  uint32_t VPOVFSTR_SG0;
  uint32_t VPERSTR_SG0;
  uint8_t res8[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPEADR_SG0;

  uint8_t res9[944];

  uint32_t VPERRINT_SG1;
  uint32_t VPERSTCLR_SG1;
  uint32_t VPOVFSTR_SG1;
  uint32_t VPERSTR_SG1;
  uint8_t res10[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPEADR_SG1;

  uint8_t res11[944];

  uint32_t VPERRINT_SG2;
  uint32_t VPERSTCLR_SG2;
  uint32_t VPOVFSTR_SG2;
  uint32_t VPERSTR_SG2;
  uint8_t res12[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPEADR_SG2;

  uint8_t res13[2992];

  uint32_t VPERRINT_SG5;
  uint32_t VPERSTCLR_SG5;
  uint32_t VPOVFSTR_SG5;
  uint32_t VPERSTR_SG5;
  uint8_t res14[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPEADR_SG5;

  uint8_t res15[7084];

  uint32_t VCECCCTL_PDMA;
  uint32_t VCERRINT_PDMA;
  uint32_t VCERSTCLR_PDMA;
  uint32_t VCOVFSTR_PDMA;
  uint32_t VCERSTR_PDMA;
  uint8_t res16[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCEADR_PDMA;

  uint8_t res17[8108];

  uint32_t APECCCTL_PFSS;
  uint32_t APERRINT_PFSS;
  uint32_t APERSTCLR_PFSS;
  uint32_t APOVFSTR_PFSS;
  uint32_t APERSTR_PFSS;
  uint8_t res18[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APEADR_PFSS;

};

#define PBECC0 (*(volatile struct PBECC0_tag *) 0xffc62c00)

struct ECCGRAM_tag
{
  uint32_t UGRERRINT;
  uint32_t UGRSERSTCLR;
  uint32_t UGRDERSTCLR;
  uint32_t UGROVFSTR;
  uint8_t res0[16];

  uint32_t UGRSERSTR;
  uint8_t res1[12];

  uint32_t UGRDERSTR;
  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR1SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR2SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR3SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR4SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR5SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR6SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR7SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR8SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR9SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR10SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR11SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR12SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR13SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR14SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR15SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR16SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR17SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR18SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR19SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR20SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR21SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR22SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR23SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR24SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR25SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR26SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR27SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR28SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR29SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR30SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR31SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR32SEDADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UGR00DEDADR;

  uint8_t res3[60];

  uint32_t GRECCCTL_GRAMC;
  uint32_t GRTSTCTL;
  uint32_t GRTDATBF0L;
  uint32_t GRTDATBF0H;
  uint32_t GRTDATBF1L;
  uint32_t GRTDATBF1H;
  uint32_t GRDECINBF0;
  uint32_t GRDECINBF1;
  uint8_t res4[224];

  uint32_t GRECCCTL_VCI2GRAM;
  uint8_t res5[3068];

  uint32_t GRECCCTL_AXI2GRAM;
};

#define ECCGRAM (*(volatile struct ECCGRAM_tag *) 0xffc64000)

struct ECCCPU1_tag
{
  uint32_t LRECCCTL_PE1;
  uint32_t LRERRINT_PE1;
  uint32_t LRSERSTCLR_PE1;
  uint32_t LRDERSTCLR_PE1;
  uint32_t LROVFSTR_PE1;
  uint8_t res0[44];

  uint32_t LRSERSTR_PE1;
  uint8_t res1[12];

  uint32_t LRDERSTR_PE1;
  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR10:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR1SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR11:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR1SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR12:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR1SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR13:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR1SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR20:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR2SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR21:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR2SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR22:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR2SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR23:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR2SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR30:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR3SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR31:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR3SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR32:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR3SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR33:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR3SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR40:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR4SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR41:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR4SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR42:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR4SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR43:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR4SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR50:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR5SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR51:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR5SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR52:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR5SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR53:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR5SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR60:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR6SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR61:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR6SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR62:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR6SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR63:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR6SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR70:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR7SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR71:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR7SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR72:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR7SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR73:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR7SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR80:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR8SEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR81:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR8SEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR82:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR8SEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEADR83:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LR8SEDADR3_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADER0:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LRDEDADR0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADER1:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LRDEDADR1_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADER2:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LRDEDADR2_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEADER3:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LRDEDADR3_PE1;

  uint8_t res3[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:12;
      uint64_t PROT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LRTSTCTL_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LRDATABF0:7;
      uint64_t reservedSpace0:9;
      uint64_t LRDATABF1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LRTDATBF0_PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LRDATABF2:7;
      uint64_t reservedSpace0:9;
      uint64_t LRDATABF3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LRTDATBF1_PE1;

};

#define ECCCPU1 (*(volatile struct ECCCPU1_tag *) 0xffc65400)

struct ECCCSIH0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEMF:1;
      uint64_t ECER1F:1;
      uint64_t ECER2F:1;
      uint64_t EC1EDIC:1;
      uint64_t EC2EDIC:1;
      uint64_t EC1ECP:1;
      uint64_t reservedSpace0:1;
      uint64_t ECTHM:1;
      uint64_t reservedSpace1:1;
      uint64_t ECER1C:1;
      uint64_t ECER2C:1;
      uint64_t ECOVFF:1;
      uint64_t reservedSpace2:2;
      uint64_t EMCA:2;
      uint64_t ECSEDF0:1;
      uint64_t ECDEDF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCCSIH0 (*(volatile struct ECCCSIH0_tag *) 0xffc70000)

struct ECCCSIH1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEMF:1;
      uint64_t ECER1F:1;
      uint64_t ECER2F:1;
      uint64_t EC1EDIC:1;
      uint64_t EC2EDIC:1;
      uint64_t EC1ECP:1;
      uint64_t reservedSpace0:1;
      uint64_t ECTHM:1;
      uint64_t reservedSpace1:1;
      uint64_t ECER1C:1;
      uint64_t ECER2C:1;
      uint64_t ECOVFF:1;
      uint64_t reservedSpace2:2;
      uint64_t EMCA:2;
      uint64_t ECSEDF0:1;
      uint64_t ECDEDF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCCSIH1 (*(volatile struct ECCCSIH1_tag *) 0xffc70040)

struct ECCCSIH2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEMF:1;
      uint64_t ECER1F:1;
      uint64_t ECER2F:1;
      uint64_t EC1EDIC:1;
      uint64_t EC2EDIC:1;
      uint64_t EC1ECP:1;
      uint64_t reservedSpace0:1;
      uint64_t ECTHM:1;
      uint64_t reservedSpace1:1;
      uint64_t ECER1C:1;
      uint64_t ECER2C:1;
      uint64_t ECOVFF:1;
      uint64_t reservedSpace2:2;
      uint64_t EMCA:2;
      uint64_t ECSEDF0:1;
      uint64_t ECDEDF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCCSIH2 (*(volatile struct ECCCSIH2_tag *) 0xffc70080)

struct ECCCSIH3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEMF:1;
      uint64_t ECER1F:1;
      uint64_t ECER2F:1;
      uint64_t EC1EDIC:1;
      uint64_t EC2EDIC:1;
      uint64_t EC1ECP:1;
      uint64_t reservedSpace0:1;
      uint64_t ECTHM:1;
      uint64_t reservedSpace1:1;
      uint64_t ECER1C:1;
      uint64_t ECER2C:1;
      uint64_t ECOVFF:1;
      uint64_t reservedSpace2:2;
      uint64_t EMCA:2;
      uint64_t ECSEDF0:1;
      uint64_t ECDEDF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCCSIH3 (*(volatile struct ECCCSIH3_tag *) 0xffc700c0)

struct ECCCAN0_tag
{
  uint32_t CTL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCCAN0 (*(volatile struct ECCCAN0_tag *) 0xffc71100)

struct ECCCAN1_tag
{
  uint32_t CTL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCCAN1 (*(volatile struct ECCCAN1_tag *) 0xffc71200)

struct ECCFLX0_tag
{
  uint32_t CTL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCFLX0 (*(volatile struct ECCFLX0_tag *) 0xffc72000)

struct ECCFLX0T1_tag
{
  uint32_t CTL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCFLX0T1 (*(volatile struct ECCFLX0T1_tag *) 0xffc72040)

struct ECCFLX0T0_tag
{
  uint32_t CTL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECREIS:1;
      uint64_t ECDCS:1;
      uint64_t ECENS:1;
      uint64_t ECREOS:1;
      uint64_t ECTRRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECTMCE:1;
      uint64_t reservedSpace1:6;
      uint64_t ETMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERDB:7;
      uint64_t reservedSpace0:1;
      uint64_t ECRD:7;
      uint64_t reservedSpace1:1;
      uint64_t HORD:7;
      uint64_t reservedSpace2:1;
      uint64_t SYND:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEDB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECEAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAD0;

};

#define ECCFLX0T0 (*(volatile struct ECCFLX0T0_tag *) 0xffc72080)

struct SYS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBISTREF1:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBISTREF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBISTREF2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBISTREF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBISTREF:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBISTREF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBISTSIG1:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBISTSIG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBISTSIG2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBISTSIG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBISTSIG:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBISTSIG;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBISTFTAGL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBISTFTAGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBISTFTAGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBISTFTAGH;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIST_RESULT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSEQ0ST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIST_RESULTB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSEQ0STB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBIST1ST:1;
      uint64_t LBIST2ST:1;
      uint64_t MBISTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BISTST;

  uint8_t res3[577476];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIFEIF:1;
      uint64_t INTOSTM3FEIF:1;
      uint64_t INTOSTM4FEIF:1;
      uint64_t INTOSTM5FEIF:1;
      uint64_t INTOSTM6FEIF:1;
      uint64_t INTOSTM7FEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEINTF;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIFEIFC:1;
      uint64_t OSTM3FEIFC:1;
      uint64_t OSTM4FEIFC:1;
      uint64_t OSTM5FEIFC:1;
      uint64_t OSTM6FEIFC:1;
      uint64_t OSTM7FEIFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEINTFC;

  uint8_t res5[2200052];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWBISTEXE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSEQ0CTL;

  uint8_t res6[3580];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESF0:1;
      uint64_t SRESF0:1;
      uint64_t SRESF1:1;
      uint64_t SRESF2:1;
      uint64_t reservedSpace0:1;
      uint64_t SRESF4:1;
      uint64_t reservedSpace1:1;
      uint64_t ARESF0:1;
      uint64_t reservedSpace2:1;
      uint64_t ARESF2:1;
      uint64_t ARESF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESF;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESFC0:1;
      uint64_t SRESFC0:1;
      uint64_t SRESFC1:1;
      uint64_t SRESFC2:1;
      uint64_t reservedSpace0:1;
      uint64_t SRESFC4:1;
      uint64_t reservedSpace1:1;
      uint64_t ARESFC0:1;
      uint64_t reservedSpace2:1;
      uint64_t ARESFC2:1;
      uint64_t ARESFC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESFC;

  uint8_t res8[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWSRESA0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWSRESA0;

  uint8_t res9[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWARESA0_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWARESA0;

  uint8_t res10[284];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RZEROMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAC_DTSRAM;

  uint8_t res11[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RZEROMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAC_GRAM;

  uint8_t res12[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RZEROMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAC_LM0;

  uint8_t res13[2300];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RZEROMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAC_LM10;

  uint8_t res14[2524];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESC0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESC;

  uint8_t res15[1020];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CVMLVF:1;
      uint64_t CVMHVF:1;
      uint64_t reservedSpace0:5;
      uint64_t CVMOFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CVMF;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CVMDIAGME:1;
      uint64_t CVMFLTEN:1;
      uint64_t CVMFBISTME:1;
      uint64_t CVMCIRREN0:1;
      uint64_t reservedSpace1:1;
      uint64_t CVMCIRREN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CVMDE;

  uint8_t res17[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CVMCRMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CVMDMASK;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CVMDIAGISOL:1;
      uint64_t CVMDIAGISOH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CVMDIAG;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CVMOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CVMMON;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CVMLVFC:1;
      uint64_t CVMHVFC:1;
      uint64_t reservedSpace0:5;
      uint64_t CVMOFLGC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CVMFC;

  uint8_t res21[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CVMDIAGMEW:1;
      uint64_t CVMFLTENW:1;
      uint64_t CVMFBISTMEW:1;
      uint64_t CVMCIRREN0W:1;
      uint64_t reservedSpace1:1;
      uint64_t CVMCIRREN1W:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CVMDEW;

  uint8_t res22[23539];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKD2DIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKD2DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKD2CLKACT:1;
      uint64_t CLKD2SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKD2STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKD3DIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKD3DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKD3CLKACT:1;
      uint64_t CLKD3SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKD3STAT;

  uint8_t res23[2144];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSC2C;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSC2S;

  uint8_t res25[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSC3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSC3C;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSC3S;

  uint8_t res27[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSC8C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT8:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSC8S;

  uint8_t res28[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC100:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS100C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT100:1;
      uint64_t CLKSEL100:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC100STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC101:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS101C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT101:1;
      uint64_t CLKSEL101:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC101STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC106:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS106C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT106:1;
      uint64_t CLKSEL106:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC106STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC107:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS107C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT107:1;
      uint64_t CLKSEL107:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC107STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC108:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS108C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT108:1;
      uint64_t CLKSEL108:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC108STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC109:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS109C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT109:1;
      uint64_t CLKSEL109:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC109STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC110:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS110C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT110:1;
      uint64_t CLKSEL110:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC110STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC112:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS112C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT112:1;
      uint64_t CLKSEL112:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC112STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC113:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS113C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT113:1;
      uint64_t CLKSEL113:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC113STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC114:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS114C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT114:1;
      uint64_t CLKSEL114:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC114STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC104:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS104C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT104:1;
      uint64_t CLKSEL104:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC104STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC105:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS105C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT105:1;
      uint64_t CLKSEL105:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC105STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CKSC102:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCKS102C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKACT102:1;
      uint64_t CLKSEL102:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DNFCSC102STAT;

};

#define SYS (*(volatile struct SYS_tag *) 0xffcda000)

struct RSCAN0_tag
{
  uint32_t C0CFG;
  uint32_t C0CTR;
  uint32_t C0STS;
  uint32_t C0ERFL;
  uint32_t C1CFG;
  uint32_t C1CTR;
  uint32_t C1STS;
  uint32_t C1ERFL;
  uint32_t C2CFG;
  uint32_t C2CTR;
  uint32_t C2STS;
  uint32_t C2ERFL;
  uint8_t res0[84];

  uint32_t GCFG;
  uint32_t GCTR;
  uint32_t GSTS;
  uint32_t GERFL;
  uint32_t GTSC;
  uint32_t GAFLECTR;
  uint32_t GAFLCFG0;
  uint8_t res1[4];

  uint32_t RMNB;
  uint32_t RMND0;
  uint32_t RMND1;
  uint8_t res2[8];

  uint32_t RFCC0;
  uint32_t RFCC1;
  uint32_t RFCC2;
  uint32_t RFCC3;
  uint32_t RFCC4;
  uint32_t RFCC5;
  uint32_t RFCC6;
  uint32_t RFCC7;
  uint32_t RFSTS0;
  uint32_t RFSTS1;
  uint32_t RFSTS2;
  uint32_t RFSTS3;
  uint32_t RFSTS4;
  uint32_t RFSTS5;
  uint32_t RFSTS6;
  uint32_t RFSTS7;
  uint32_t RFPCTR0;
  uint32_t RFPCTR1;
  uint32_t RFPCTR2;
  uint32_t RFPCTR3;
  uint32_t RFPCTR4;
  uint32_t RFPCTR5;
  uint32_t RFPCTR6;
  uint32_t RFPCTR7;
  uint32_t CFCC0;
  uint32_t CFCC1;
  uint32_t CFCC2;
  uint32_t CFCC3;
  uint32_t CFCC4;
  uint32_t CFCC5;
  uint32_t CFCC6;
  uint32_t CFCC7;
  uint32_t CFCC8;
  uint8_t res3[60];

  uint32_t CFSTS0;
  uint32_t CFSTS1;
  uint32_t CFSTS2;
  uint32_t CFSTS3;
  uint32_t CFSTS4;
  uint32_t CFSTS5;
  uint32_t CFSTS6;
  uint32_t CFSTS7;
  uint32_t CFSTS8;
  uint8_t res4[60];

  uint32_t CFPCTR0;
  uint32_t CFPCTR1;
  uint32_t CFPCTR2;
  uint32_t CFPCTR3;
  uint32_t CFPCTR4;
  uint32_t CFPCTR5;
  uint32_t CFPCTR6;
  uint32_t CFPCTR7;
  uint32_t CFPCTR8;
  uint8_t res5[60];

  uint32_t FESTS;
  uint32_t FFSTS;
  uint32_t FMSTS;
  uint32_t RFISTS;
  uint32_t CFRISTS;
  uint32_t CFTISTS;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMC47;

  uint8_t res6[80];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t TMTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TMSTS47;

  uint8_t res7[80];

  uint32_t TMTRSTS0;
  uint32_t TMTRSTS1;
  uint8_t res8[8];

  uint32_t TMTARSTS0;
  uint32_t TMTARSTS1;
  uint8_t res9[8];

  uint32_t TMTCSTS0;
  uint32_t TMTCSTS1;
  uint8_t res10[8];

  uint32_t TMTASTS0;
  uint32_t TMTASTS1;
  uint8_t res11[8];

  uint32_t TMIEC0;
  uint32_t TMIEC1;
  uint8_t res12[8];

  uint32_t TXQCC0;
  uint32_t TXQCC1;
  uint32_t TXQCC2;
  uint8_t res13[20];

  uint32_t TXQSTS0;
  uint32_t TXQSTS1;
  uint32_t TXQSTS2;
  uint8_t res14[20];

  uint32_t TXQPCTR0;
  uint32_t TXQPCTR1;
  uint32_t TXQPCTR2;
  uint8_t res15[20];

  uint32_t THLCC0;
  uint32_t THLCC1;
  uint32_t THLCC2;
  uint8_t res16[20];

  uint32_t THLSTS0;
  uint32_t THLSTS1;
  uint32_t THLSTS2;
  uint8_t res17[20];

  uint32_t THLPCTR0;
  uint32_t THLPCTR1;
  uint32_t THLPCTR2;
  uint8_t res18[20];

  uint32_t GTINTSTS0;
  uint8_t res19[4];

  uint32_t GTSTCFG;
  uint32_t GTSTCTR;
  uint8_t res20[4];

  uint32_t GFDCFG;
  uint8_t res21[4];

  uint32_t GLOCKK;
  uint8_t res22[124];

  uint32_t GRMCFG;
  uint32_t GAFLID0;
  uint32_t GAFLM0;
  uint32_t GAFLP0_0;
  uint32_t GAFLP1_0;
  uint32_t GAFLID1;
  uint32_t GAFLM1;
  uint32_t GAFLP0_1;
  uint32_t GAFLP1_1;
  uint32_t GAFLID2;
  uint32_t GAFLM2;
  uint32_t GAFLP0_2;
  uint32_t GAFLP1_2;
  uint32_t GAFLID3;
  uint32_t GAFLM3;
  uint32_t GAFLP0_3;
  uint32_t GAFLP1_3;
  uint32_t GAFLID4;
  uint32_t GAFLM4;
  uint32_t GAFLP0_4;
  uint32_t GAFLP1_4;
  uint32_t GAFLID5;
  uint32_t GAFLM5;
  uint32_t GAFLP0_5;
  uint32_t GAFLP1_5;
  uint32_t GAFLID6;
  uint32_t GAFLM6;
  uint32_t GAFLP0_6;
  uint32_t GAFLP1_6;
  uint32_t GAFLID7;
  uint32_t GAFLM7;
  uint32_t GAFLP0_7;
  uint32_t GAFLP1_7;
  uint32_t GAFLID8;
  uint32_t GAFLM8;
  uint32_t GAFLP0_8;
  uint32_t GAFLP1_8;
  uint32_t GAFLID9;
  uint32_t GAFLM9;
  uint32_t GAFLP0_9;
  uint32_t GAFLP1_9;
  uint32_t GAFLID10;
  uint32_t GAFLM10;
  uint32_t GAFLP0_10;
  uint32_t GAFLP1_10;
  uint32_t GAFLID11;
  uint32_t GAFLM11;
  uint32_t GAFLP0_11;
  uint32_t GAFLP1_11;
  uint32_t GAFLID12;
  uint32_t GAFLM12;
  uint32_t GAFLP0_12;
  uint32_t GAFLP1_12;
  uint32_t GAFLID13;
  uint32_t GAFLM13;
  uint32_t GAFLP0_13;
  uint32_t GAFLP1_13;
  uint32_t GAFLID14;
  uint32_t GAFLM14;
  uint32_t GAFLP0_14;
  uint32_t GAFLP1_14;
  uint32_t GAFLID15;
  uint32_t GAFLM15;
  uint32_t GAFLP0_15;
  uint32_t GAFLP1_15;
  uint32_t RMID0;
  uint32_t RMPTR0;
  uint32_t RMDF0_0;
  uint32_t RMDF1_0;
  uint32_t RMID1;
  uint32_t RMPTR1;
  uint32_t RMDF0_1;
  uint32_t RMDF1_1;
  uint32_t RMID2;
  uint32_t RMPTR2;
  uint32_t RMDF0_2;
  uint32_t RMDF1_2;
  uint32_t RMID3;
  uint32_t RMPTR3;
  uint32_t RMDF0_3;
  uint32_t RMDF1_3;
  uint32_t RMID4;
  uint32_t RMPTR4;
  uint32_t RMDF0_4;
  uint32_t RMDF1_4;
  uint32_t RMID5;
  uint32_t RMPTR5;
  uint32_t RMDF0_5;
  uint32_t RMDF1_5;
  uint32_t RMID6;
  uint32_t RMPTR6;
  uint32_t RMDF0_6;
  uint32_t RMDF1_6;
  uint32_t RMID7;
  uint32_t RMPTR7;
  uint32_t RMDF0_7;
  uint32_t RMDF1_7;
  uint32_t RMID8;
  uint32_t RMPTR8;
  uint32_t RMDF0_8;
  uint32_t RMDF1_8;
  uint32_t RMID9;
  uint32_t RMPTR9;
  uint32_t RMDF0_9;
  uint32_t RMDF1_9;
  uint32_t RMID10;
  uint32_t RMPTR10;
  uint32_t RMDF0_10;
  uint32_t RMDF1_10;
  uint32_t RMID11;
  uint32_t RMPTR11;
  uint32_t RMDF0_11;
  uint32_t RMDF1_11;
  uint32_t RMID12;
  uint32_t RMPTR12;
  uint32_t RMDF0_12;
  uint32_t RMDF1_12;
  uint32_t RMID13;
  uint32_t RMPTR13;
  uint32_t RMDF0_13;
  uint32_t RMDF1_13;
  uint32_t RMID14;
  uint32_t RMPTR14;
  uint32_t RMDF0_14;
  uint32_t RMDF1_14;
  uint32_t RMID15;
  uint32_t RMPTR15;
  uint32_t RMDF0_15;
  uint32_t RMDF1_15;
  uint32_t RMID16;
  uint32_t RMPTR16;
  uint32_t RMDF0_16;
  uint32_t RMDF1_16;
  uint32_t RMID17;
  uint32_t RMPTR17;
  uint32_t RMDF0_17;
  uint32_t RMDF1_17;
  uint32_t RMID18;
  uint32_t RMPTR18;
  uint32_t RMDF0_18;
  uint32_t RMDF1_18;
  uint32_t RMID19;
  uint32_t RMPTR19;
  uint32_t RMDF0_19;
  uint32_t RMDF1_19;
  uint32_t RMID20;
  uint32_t RMPTR20;
  uint32_t RMDF0_20;
  uint32_t RMDF1_20;
  uint32_t RMID21;
  uint32_t RMPTR21;
  uint32_t RMDF0_21;
  uint32_t RMDF1_21;
  uint32_t RMID22;
  uint32_t RMPTR22;
  uint32_t RMDF0_22;
  uint32_t RMDF1_22;
  uint32_t RMID23;
  uint32_t RMPTR23;
  uint32_t RMDF0_23;
  uint32_t RMDF1_23;
  uint32_t RMID24;
  uint32_t RMPTR24;
  uint32_t RMDF0_24;
  uint32_t RMDF1_24;
  uint32_t RMID25;
  uint32_t RMPTR25;
  uint32_t RMDF0_25;
  uint32_t RMDF1_25;
  uint32_t RMID26;
  uint32_t RMPTR26;
  uint32_t RMDF0_26;
  uint32_t RMDF1_26;
  uint32_t RMID27;
  uint32_t RMPTR27;
  uint32_t RMDF0_27;
  uint32_t RMDF1_27;
  uint32_t RMID28;
  uint32_t RMPTR28;
  uint32_t RMDF0_28;
  uint32_t RMDF1_28;
  uint32_t RMID29;
  uint32_t RMPTR29;
  uint32_t RMDF0_29;
  uint32_t RMDF1_29;
  uint32_t RMID30;
  uint32_t RMPTR30;
  uint32_t RMDF0_30;
  uint32_t RMDF1_30;
  uint32_t RMID31;
  uint32_t RMPTR31;
  uint32_t RMDF0_31;
  uint32_t RMDF1_31;
  uint32_t RMID32;
  uint32_t RMPTR32;
  uint32_t RMDF0_32;
  uint32_t RMDF1_32;
  uint32_t RMID33;
  uint32_t RMPTR33;
  uint32_t RMDF0_33;
  uint32_t RMDF1_33;
  uint32_t RMID34;
  uint32_t RMPTR34;
  uint32_t RMDF0_34;
  uint32_t RMDF1_34;
  uint32_t RMID35;
  uint32_t RMPTR35;
  uint32_t RMDF0_35;
  uint32_t RMDF1_35;
  uint32_t RMID36;
  uint32_t RMPTR36;
  uint32_t RMDF0_36;
  uint32_t RMDF1_36;
  uint32_t RMID37;
  uint32_t RMPTR37;
  uint32_t RMDF0_37;
  uint32_t RMDF1_37;
  uint32_t RMID38;
  uint32_t RMPTR38;
  uint32_t RMDF0_38;
  uint32_t RMDF1_38;
  uint32_t RMID39;
  uint32_t RMPTR39;
  uint32_t RMDF0_39;
  uint32_t RMDF1_39;
  uint32_t RMID40;
  uint32_t RMPTR40;
  uint32_t RMDF0_40;
  uint32_t RMDF1_40;
  uint32_t RMID41;
  uint32_t RMPTR41;
  uint32_t RMDF0_41;
  uint32_t RMDF1_41;
  uint32_t RMID42;
  uint32_t RMPTR42;
  uint32_t RMDF0_42;
  uint32_t RMDF1_42;
  uint32_t RMID43;
  uint32_t RMPTR43;
  uint32_t RMDF0_43;
  uint32_t RMDF1_43;
  uint32_t RMID44;
  uint32_t RMPTR44;
  uint32_t RMDF0_44;
  uint32_t RMDF1_44;
  uint32_t RMID45;
  uint32_t RMPTR45;
  uint32_t RMDF0_45;
  uint32_t RMDF1_45;
  uint32_t RMID46;
  uint32_t RMPTR46;
  uint32_t RMDF0_46;
  uint32_t RMDF1_46;
  uint32_t RMID47;
  uint32_t RMPTR47;
  uint32_t RMDF0_47;
  uint32_t RMDF1_47;
  uint8_t res23[1280];

  uint32_t RFID0;
  uint32_t RFPTR0;
  uint32_t RFDF0_0;
  uint32_t RFDF1_0;
  uint32_t RFID1;
  uint32_t RFPTR1;
  uint32_t RFDF0_1;
  uint32_t RFDF1_1;
  uint32_t RFID2;
  uint32_t RFPTR2;
  uint32_t RFDF0_2;
  uint32_t RFDF1_2;
  uint32_t RFID3;
  uint32_t RFPTR3;
  uint32_t RFDF0_3;
  uint32_t RFDF1_3;
  uint32_t RFID4;
  uint32_t RFPTR4;
  uint32_t RFDF0_4;
  uint32_t RFDF1_4;
  uint32_t RFID5;
  uint32_t RFPTR5;
  uint32_t RFDF0_5;
  uint32_t RFDF1_5;
  uint32_t RFID6;
  uint32_t RFPTR6;
  uint32_t RFDF0_6;
  uint32_t RFDF1_6;
  uint32_t RFID7;
  uint32_t RFPTR7;
  uint32_t RFDF0_7;
  uint32_t RFDF1_7;
  uint32_t CFID0;
  uint32_t CFPTR0;
  uint32_t CFDF0_0;
  uint32_t CFDF1_0;
  uint32_t CFID1;
  uint32_t CFPTR1;
  uint32_t CFDF0_1;
  uint32_t CFDF1_1;
  uint32_t CFID2;
  uint32_t CFPTR2;
  uint32_t CFDF0_2;
  uint32_t CFDF1_2;
  uint32_t CFID3;
  uint32_t CFPTR3;
  uint32_t CFDF0_3;
  uint32_t CFDF1_3;
  uint32_t CFID4;
  uint32_t CFPTR4;
  uint32_t CFDF0_4;
  uint32_t CFDF1_4;
  uint32_t CFID5;
  uint32_t CFPTR5;
  uint32_t CFDF0_5;
  uint32_t CFDF1_5;
  uint32_t CFID6;
  uint32_t CFPTR6;
  uint32_t CFDF0_6;
  uint32_t CFDF1_6;
  uint32_t CFID7;
  uint32_t CFPTR7;
  uint32_t CFDF0_7;
  uint32_t CFDF1_7;
  uint32_t CFID8;
  uint32_t CFPTR8;
  uint32_t CFDF0_8;
  uint32_t CFDF1_8;
  uint8_t res24[240];

  uint32_t TMID0;
  uint32_t TMPTR0;
  uint32_t TMDF0_0;
  uint32_t TMDF1_0;
  uint32_t TMID1;
  uint32_t TMPTR1;
  uint32_t TMDF0_1;
  uint32_t TMDF1_1;
  uint32_t TMID2;
  uint32_t TMPTR2;
  uint32_t TMDF0_2;
  uint32_t TMDF1_2;
  uint32_t TMID3;
  uint32_t TMPTR3;
  uint32_t TMDF0_3;
  uint32_t TMDF1_3;
  uint32_t TMID4;
  uint32_t TMPTR4;
  uint32_t TMDF0_4;
  uint32_t TMDF1_4;
  uint32_t TMID5;
  uint32_t TMPTR5;
  uint32_t TMDF0_5;
  uint32_t TMDF1_5;
  uint32_t TMID6;
  uint32_t TMPTR6;
  uint32_t TMDF0_6;
  uint32_t TMDF1_6;
  uint32_t TMID7;
  uint32_t TMPTR7;
  uint32_t TMDF0_7;
  uint32_t TMDF1_7;
  uint32_t TMID8;
  uint32_t TMPTR8;
  uint32_t TMDF0_8;
  uint32_t TMDF1_8;
  uint32_t TMID9;
  uint32_t TMPTR9;
  uint32_t TMDF0_9;
  uint32_t TMDF1_9;
  uint32_t TMID10;
  uint32_t TMPTR10;
  uint32_t TMDF0_10;
  uint32_t TMDF1_10;
  uint32_t TMID11;
  uint32_t TMPTR11;
  uint32_t TMDF0_11;
  uint32_t TMDF1_11;
  uint32_t TMID12;
  uint32_t TMPTR12;
  uint32_t TMDF0_12;
  uint32_t TMDF1_12;
  uint32_t TMID13;
  uint32_t TMPTR13;
  uint32_t TMDF0_13;
  uint32_t TMDF1_13;
  uint32_t TMID14;
  uint32_t TMPTR14;
  uint32_t TMDF0_14;
  uint32_t TMDF1_14;
  uint32_t TMID15;
  uint32_t TMPTR15;
  uint32_t TMDF0_15;
  uint32_t TMDF1_15;
  uint32_t TMID16;
  uint32_t TMPTR16;
  uint32_t TMDF0_16;
  uint32_t TMDF1_16;
  uint32_t TMID17;
  uint32_t TMPTR17;
  uint32_t TMDF0_17;
  uint32_t TMDF1_17;
  uint32_t TMID18;
  uint32_t TMPTR18;
  uint32_t TMDF0_18;
  uint32_t TMDF1_18;
  uint32_t TMID19;
  uint32_t TMPTR19;
  uint32_t TMDF0_19;
  uint32_t TMDF1_19;
  uint32_t TMID20;
  uint32_t TMPTR20;
  uint32_t TMDF0_20;
  uint32_t TMDF1_20;
  uint32_t TMID21;
  uint32_t TMPTR21;
  uint32_t TMDF0_21;
  uint32_t TMDF1_21;
  uint32_t TMID22;
  uint32_t TMPTR22;
  uint32_t TMDF0_22;
  uint32_t TMDF1_22;
  uint32_t TMID23;
  uint32_t TMPTR23;
  uint32_t TMDF0_23;
  uint32_t TMDF1_23;
  uint32_t TMID24;
  uint32_t TMPTR24;
  uint32_t TMDF0_24;
  uint32_t TMDF1_24;
  uint32_t TMID25;
  uint32_t TMPTR25;
  uint32_t TMDF0_25;
  uint32_t TMDF1_25;
  uint32_t TMID26;
  uint32_t TMPTR26;
  uint32_t TMDF0_26;
  uint32_t TMDF1_26;
  uint32_t TMID27;
  uint32_t TMPTR27;
  uint32_t TMDF0_27;
  uint32_t TMDF1_27;
  uint32_t TMID28;
  uint32_t TMPTR28;
  uint32_t TMDF0_28;
  uint32_t TMDF1_28;
  uint32_t TMID29;
  uint32_t TMPTR29;
  uint32_t TMDF0_29;
  uint32_t TMDF1_29;
  uint32_t TMID30;
  uint32_t TMPTR30;
  uint32_t TMDF0_30;
  uint32_t TMDF1_30;
  uint32_t TMID31;
  uint32_t TMPTR31;
  uint32_t TMDF0_31;
  uint32_t TMDF1_31;
  uint32_t TMID32;
  uint32_t TMPTR32;
  uint32_t TMDF0_32;
  uint32_t TMDF1_32;
  uint32_t TMID33;
  uint32_t TMPTR33;
  uint32_t TMDF0_33;
  uint32_t TMDF1_33;
  uint32_t TMID34;
  uint32_t TMPTR34;
  uint32_t TMDF0_34;
  uint32_t TMDF1_34;
  uint32_t TMID35;
  uint32_t TMPTR35;
  uint32_t TMDF0_35;
  uint32_t TMDF1_35;
  uint32_t TMID36;
  uint32_t TMPTR36;
  uint32_t TMDF0_36;
  uint32_t TMDF1_36;
  uint32_t TMID37;
  uint32_t TMPTR37;
  uint32_t TMDF0_37;
  uint32_t TMDF1_37;
  uint32_t TMID38;
  uint32_t TMPTR38;
  uint32_t TMDF0_38;
  uint32_t TMDF1_38;
  uint32_t TMID39;
  uint32_t TMPTR39;
  uint32_t TMDF0_39;
  uint32_t TMDF1_39;
  uint32_t TMID40;
  uint32_t TMPTR40;
  uint32_t TMDF0_40;
  uint32_t TMDF1_40;
  uint32_t TMID41;
  uint32_t TMPTR41;
  uint32_t TMDF0_41;
  uint32_t TMDF1_41;
  uint32_t TMID42;
  uint32_t TMPTR42;
  uint32_t TMDF0_42;
  uint32_t TMDF1_42;
  uint32_t TMID43;
  uint32_t TMPTR43;
  uint32_t TMDF0_43;
  uint32_t TMDF1_43;
  uint32_t TMID44;
  uint32_t TMPTR44;
  uint32_t TMDF0_44;
  uint32_t TMDF1_44;
  uint32_t TMID45;
  uint32_t TMPTR45;
  uint32_t TMDF0_45;
  uint32_t TMDF1_45;
  uint32_t TMID46;
  uint32_t TMPTR46;
  uint32_t TMDF0_46;
  uint32_t TMDF1_46;
  uint32_t TMID47;
  uint32_t TMPTR47;
  uint32_t TMDF0_47;
  uint32_t TMDF1_47;
  uint8_t res25[1280];

  uint32_t THLACC0;
  uint32_t THLACC1;
  uint32_t THLACC2;
  uint8_t res26[244];

  uint32_t RPGACC0;
  uint32_t RPGACC1;
  uint32_t RPGACC2;
  uint32_t RPGACC3;
  uint32_t RPGACC4;
  uint32_t RPGACC5;
  uint32_t RPGACC6;
  uint32_t RPGACC7;
  uint32_t RPGACC8;
  uint32_t RPGACC9;
  uint32_t RPGACC10;
  uint32_t RPGACC11;
  uint32_t RPGACC12;
  uint32_t RPGACC13;
  uint32_t RPGACC14;
  uint32_t RPGACC15;
  uint32_t RPGACC16;
  uint32_t RPGACC17;
  uint32_t RPGACC18;
  uint32_t RPGACC19;
  uint32_t RPGACC20;
  uint32_t RPGACC21;
  uint32_t RPGACC22;
  uint32_t RPGACC23;
  uint32_t RPGACC24;
  uint32_t RPGACC25;
  uint32_t RPGACC26;
  uint32_t RPGACC27;
  uint32_t RPGACC28;
  uint32_t RPGACC29;
  uint32_t RPGACC30;
  uint32_t RPGACC31;
  uint32_t RPGACC32;
  uint32_t RPGACC33;
  uint32_t RPGACC34;
  uint32_t RPGACC35;
  uint32_t RPGACC36;
  uint32_t RPGACC37;
  uint32_t RPGACC38;
  uint32_t RPGACC39;
  uint32_t RPGACC40;
  uint32_t RPGACC41;
  uint32_t RPGACC42;
  uint32_t RPGACC43;
  uint32_t RPGACC44;
  uint32_t RPGACC45;
  uint32_t RPGACC46;
  uint32_t RPGACC47;
  uint32_t RPGACC48;
  uint32_t RPGACC49;
  uint32_t RPGACC50;
  uint32_t RPGACC51;
  uint32_t RPGACC52;
  uint32_t RPGACC53;
  uint32_t RPGACC54;
  uint32_t RPGACC55;
  uint32_t RPGACC56;
  uint32_t RPGACC57;
  uint32_t RPGACC58;
  uint32_t RPGACC59;
  uint32_t RPGACC60;
  uint32_t RPGACC61;
  uint32_t RPGACC62;
  uint32_t RPGACC63;
  uint8_t res27[26112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDMDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANFDMDR;

};

#define RSCAN0 (*(volatile struct RSCAN0_tag *) 0xffd20000)

struct RSCFD0_tag
{
  uint32_t CFDC0NCFG;
  uint32_t CFDC0CTR;
  uint32_t CFDC0STS;
  uint32_t CFDC0ERFL;
  uint32_t CFDC1NCFG;
  uint32_t CFDC1CTR;
  uint32_t CFDC1STS;
  uint32_t CFDC1ERFL;
  uint32_t CFDC2NCFG;
  uint32_t CFDC2CTR;
  uint32_t CFDC2STS;
  uint32_t CFDC2ERFL;
  uint8_t res0[84];

  uint32_t CFDGCFG;
  uint32_t CFDGCTR;
  uint32_t CFDGSTS;
  uint32_t CFDGERFL;
  uint32_t CFDGTSC;
  uint32_t CFDGAFLECTR;
  uint32_t CFDGAFLCFG0;
  uint8_t res1[4];

  uint32_t CFDRMNB;
  uint32_t CFDRMND0;
  uint32_t CFDRMND1;
  uint8_t res2[8];

  uint32_t CFDRFCC0;
  uint32_t CFDRFCC1;
  uint32_t CFDRFCC2;
  uint32_t CFDRFCC3;
  uint32_t CFDRFCC4;
  uint32_t CFDRFCC5;
  uint32_t CFDRFCC6;
  uint32_t CFDRFCC7;
  uint32_t CFDRFSTS0;
  uint32_t CFDRFSTS1;
  uint32_t CFDRFSTS2;
  uint32_t CFDRFSTS3;
  uint32_t CFDRFSTS4;
  uint32_t CFDRFSTS5;
  uint32_t CFDRFSTS6;
  uint32_t CFDRFSTS7;
  uint32_t CFDRFPCTR0;
  uint32_t CFDRFPCTR1;
  uint32_t CFDRFPCTR2;
  uint32_t CFDRFPCTR3;
  uint32_t CFDRFPCTR4;
  uint32_t CFDRFPCTR5;
  uint32_t CFDRFPCTR6;
  uint32_t CFDRFPCTR7;
  uint32_t CFDCFCC0;
  uint32_t CFDCFCC1;
  uint32_t CFDCFCC2;
  uint32_t CFDCFCC3;
  uint32_t CFDCFCC4;
  uint32_t CFDCFCC5;
  uint32_t CFDCFCC6;
  uint32_t CFDCFCC7;
  uint32_t CFDCFCC8;
  uint8_t res3[60];

  uint32_t CFDCFSTS0;
  uint32_t CFDCFSTS1;
  uint32_t CFDCFSTS2;
  uint32_t CFDCFSTS3;
  uint32_t CFDCFSTS4;
  uint32_t CFDCFSTS5;
  uint32_t CFDCFSTS6;
  uint32_t CFDCFSTS7;
  uint32_t CFDCFSTS8;
  uint8_t res4[60];

  uint32_t CFDCFPCTR0;
  uint32_t CFDCFPCTR1;
  uint32_t CFDCFPCTR2;
  uint32_t CFDCFPCTR3;
  uint32_t CFDCFPCTR4;
  uint32_t CFDCFPCTR5;
  uint32_t CFDCFPCTR6;
  uint32_t CFDCFPCTR7;
  uint32_t CFDCFPCTR8;
  uint8_t res5[60];

  uint32_t CFDFESTS;
  uint32_t CFDFFSTS;
  uint32_t CFDFMSTS;
  uint32_t CFDRFISTS;
  uint32_t CFDCFRISTS;
  uint32_t CFDCFTISTS;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTR:1;
      uint64_t TMTAR:1;
      uint64_t TMOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMC47;

  uint8_t res6[80];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMTSTS:1;
      uint64_t MTRF:2;
      uint64_t TMTRM:1;
      uint64_t TMTARM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFDTMSTS47;

  uint8_t res7[80];

  uint32_t CFDTMTRSTS0;
  uint32_t CFDTMTRSTS1;
  uint8_t res8[8];

  uint32_t CFDTMTARSTS0;
  uint32_t CFDTMTARSTS1;
  uint8_t res9[8];

  uint32_t CFDTMTCSTS0;
  uint32_t CFDTMTCSTS1;
  uint8_t res10[8];

  uint32_t CFDTMTASTS0;
  uint32_t CFDTMTASTS1;
  uint8_t res11[8];

  uint32_t CFDTMIEC0;
  uint32_t CFDTMIEC1;
  uint8_t res12[8];

  uint32_t CFDTXQCC0;
  uint32_t CFDTXQCC1;
  uint32_t CFDTXQCC2;
  uint8_t res13[20];

  uint32_t CFDTXQSTS0;
  uint32_t CFDTXQSTS1;
  uint32_t CFDTXQSTS2;
  uint8_t res14[20];

  uint32_t CFDTXQPCTR0;
  uint32_t CFDTXQPCTR1;
  uint32_t CFDTXQPCTR2;
  uint8_t res15[20];

  uint32_t CFDTHLCC0;
  uint32_t CFDTHLCC1;
  uint32_t CFDTHLCC2;
  uint8_t res16[20];

  uint32_t CFDTHLSTS0;
  uint32_t CFDTHLSTS1;
  uint32_t CFDTHLSTS2;
  uint8_t res17[20];

  uint32_t CFDTHLPCTR0;
  uint32_t CFDTHLPCTR1;
  uint32_t CFDTHLPCTR2;
  uint8_t res18[20];

  uint32_t CFDGTINTSTS0;
  uint8_t res19[4];

  uint32_t CFDGTSTCFG;
  uint32_t CFDGTSTCTR;
  uint8_t res20[4];

  uint32_t CFDGFDCFG;
  uint8_t res21[4];

  uint32_t CFDGLOCKK;
  uint8_t res22[16];

  uint32_t CFDCDTCT;
  uint32_t CFDCDTSTS;
  uint8_t res23[100];

  uint32_t CFDGRMCFG;
  uint32_t CFDC0DCFG;
  uint32_t CFDC0FDCFG;
  uint32_t CFDC0FDCTR;
  uint32_t CFDC0FDSTS;
  uint32_t CFDC0FDCRC;
  uint8_t res24[12];

  uint32_t CFDC1DCFG;
  uint32_t CFDC1FDCFG;
  uint32_t CFDC1FDCTR;
  uint32_t CFDC1FDSTS;
  uint32_t CFDC1FDCRC;
  uint8_t res25[12];

  uint32_t CFDC2DCFG;
  uint32_t CFDC2FDCFG;
  uint32_t CFDC2FDCTR;
  uint32_t CFDC2FDSTS;
  uint32_t CFDC2FDCRC;
  uint8_t res26[2732];

  uint32_t CFDGAFLID0;
  uint32_t CFDGAFLM0;
  uint32_t CFDGAFLP0_0;
  uint32_t CFDGAFLP1_0;
  uint32_t CFDGAFLID1;
  uint32_t CFDGAFLM1;
  uint32_t CFDGAFLP0_1;
  uint32_t CFDGAFLP1_1;
  uint32_t CFDGAFLID2;
  uint32_t CFDGAFLM2;
  uint32_t CFDGAFLP0_2;
  uint32_t CFDGAFLP1_2;
  uint32_t CFDGAFLID3;
  uint32_t CFDGAFLM3;
  uint32_t CFDGAFLP0_3;
  uint32_t CFDGAFLP1_3;
  uint32_t CFDGAFLID4;
  uint32_t CFDGAFLM4;
  uint32_t CFDGAFLP0_4;
  uint32_t CFDGAFLP1_4;
  uint32_t CFDGAFLID5;
  uint32_t CFDGAFLM5;
  uint32_t CFDGAFLP0_5;
  uint32_t CFDGAFLP1_5;
  uint32_t CFDGAFLID6;
  uint32_t CFDGAFLM6;
  uint32_t CFDGAFLP0_6;
  uint32_t CFDGAFLP1_6;
  uint32_t CFDGAFLID7;
  uint32_t CFDGAFLM7;
  uint32_t CFDGAFLP0_7;
  uint32_t CFDGAFLP1_7;
  uint32_t CFDGAFLID8;
  uint32_t CFDGAFLM8;
  uint32_t CFDGAFLP0_8;
  uint32_t CFDGAFLP1_8;
  uint32_t CFDGAFLID9;
  uint32_t CFDGAFLM9;
  uint32_t CFDGAFLP0_9;
  uint32_t CFDGAFLP1_9;
  uint32_t CFDGAFLID10;
  uint32_t CFDGAFLM10;
  uint32_t CFDGAFLP0_10;
  uint32_t CFDGAFLP1_10;
  uint32_t CFDGAFLID11;
  uint32_t CFDGAFLM11;
  uint32_t CFDGAFLP0_11;
  uint32_t CFDGAFLP1_11;
  uint32_t CFDGAFLID12;
  uint32_t CFDGAFLM12;
  uint32_t CFDGAFLP0_12;
  uint32_t CFDGAFLP1_12;
  uint32_t CFDGAFLID13;
  uint32_t CFDGAFLM13;
  uint32_t CFDGAFLP0_13;
  uint32_t CFDGAFLP1_13;
  uint32_t CFDGAFLID14;
  uint32_t CFDGAFLM14;
  uint32_t CFDGAFLP0_14;
  uint32_t CFDGAFLP1_14;
  uint32_t CFDGAFLID15;
  uint32_t CFDGAFLM15;
  uint32_t CFDGAFLP0_15;
  uint32_t CFDGAFLP1_15;
  uint8_t res27[3840];

  uint32_t CFDRMID0;
  uint32_t CFDRMPTR0;
  uint32_t CFDRMFDSTS0;
  uint32_t CFDRMDF0_0;
  uint32_t CFDRMDF1_0;
  uint32_t CFDRMDF2_0;
  uint32_t CFDRMDF3_0;
  uint32_t CFDRMDF4_0;
  uint32_t CFDRMID1;
  uint32_t CFDRMPTR1;
  uint32_t CFDRMFDSTS1;
  uint32_t CFDRMDF0_1;
  uint32_t CFDRMDF1_1;
  uint32_t CFDRMDF2_1;
  uint32_t CFDRMDF3_1;
  uint32_t CFDRMDF4_1;
  uint32_t CFDRMID2;
  uint32_t CFDRMPTR2;
  uint32_t CFDRMFDSTS2;
  uint32_t CFDRMDF0_2;
  uint32_t CFDRMDF1_2;
  uint32_t CFDRMDF2_2;
  uint32_t CFDRMDF3_2;
  uint32_t CFDRMDF4_2;
  uint32_t CFDRMID3;
  uint32_t CFDRMPTR3;
  uint32_t CFDRMFDSTS3;
  uint32_t CFDRMDF0_3;
  uint32_t CFDRMDF1_3;
  uint32_t CFDRMDF2_3;
  uint32_t CFDRMDF3_3;
  uint32_t CFDRMDF4_3;
  uint32_t CFDRMID4;
  uint32_t CFDRMPTR4;
  uint32_t CFDRMFDSTS4;
  uint32_t CFDRMDF0_4;
  uint32_t CFDRMDF1_4;
  uint32_t CFDRMDF2_4;
  uint32_t CFDRMDF3_4;
  uint32_t CFDRMDF4_4;
  uint32_t CFDRMID5;
  uint32_t CFDRMPTR5;
  uint32_t CFDRMFDSTS5;
  uint32_t CFDRMDF0_5;
  uint32_t CFDRMDF1_5;
  uint32_t CFDRMDF2_5;
  uint32_t CFDRMDF3_5;
  uint32_t CFDRMDF4_5;
  uint32_t CFDRMID6;
  uint32_t CFDRMPTR6;
  uint32_t CFDRMFDSTS6;
  uint32_t CFDRMDF0_6;
  uint32_t CFDRMDF1_6;
  uint32_t CFDRMDF2_6;
  uint32_t CFDRMDF3_6;
  uint32_t CFDRMDF4_6;
  uint32_t CFDRMID7;
  uint32_t CFDRMPTR7;
  uint32_t CFDRMFDSTS7;
  uint32_t CFDRMDF0_7;
  uint32_t CFDRMDF1_7;
  uint32_t CFDRMDF2_7;
  uint32_t CFDRMDF3_7;
  uint32_t CFDRMDF4_7;
  uint32_t CFDRMID8;
  uint32_t CFDRMPTR8;
  uint32_t CFDRMFDSTS8;
  uint32_t CFDRMDF0_8;
  uint32_t CFDRMDF1_8;
  uint32_t CFDRMDF2_8;
  uint32_t CFDRMDF3_8;
  uint32_t CFDRMDF4_8;
  uint32_t CFDRMID9;
  uint32_t CFDRMPTR9;
  uint32_t CFDRMFDSTS9;
  uint32_t CFDRMDF0_9;
  uint32_t CFDRMDF1_9;
  uint32_t CFDRMDF2_9;
  uint32_t CFDRMDF3_9;
  uint32_t CFDRMDF4_9;
  uint32_t CFDRMID10;
  uint32_t CFDRMPTR10;
  uint32_t CFDRMFDSTS10;
  uint32_t CFDRMDF0_10;
  uint32_t CFDRMDF1_10;
  uint32_t CFDRMDF2_10;
  uint32_t CFDRMDF3_10;
  uint32_t CFDRMDF4_10;
  uint32_t CFDRMID11;
  uint32_t CFDRMPTR11;
  uint32_t CFDRMFDSTS11;
  uint32_t CFDRMDF0_11;
  uint32_t CFDRMDF1_11;
  uint32_t CFDRMDF2_11;
  uint32_t CFDRMDF3_11;
  uint32_t CFDRMDF4_11;
  uint32_t CFDRMID12;
  uint32_t CFDRMPTR12;
  uint32_t CFDRMFDSTS12;
  uint32_t CFDRMDF0_12;
  uint32_t CFDRMDF1_12;
  uint32_t CFDRMDF2_12;
  uint32_t CFDRMDF3_12;
  uint32_t CFDRMDF4_12;
  uint32_t CFDRMID13;
  uint32_t CFDRMPTR13;
  uint32_t CFDRMFDSTS13;
  uint32_t CFDRMDF0_13;
  uint32_t CFDRMDF1_13;
  uint32_t CFDRMDF2_13;
  uint32_t CFDRMDF3_13;
  uint32_t CFDRMDF4_13;
  uint32_t CFDRMID14;
  uint32_t CFDRMPTR14;
  uint32_t CFDRMFDSTS14;
  uint32_t CFDRMDF0_14;
  uint32_t CFDRMDF1_14;
  uint32_t CFDRMDF2_14;
  uint32_t CFDRMDF3_14;
  uint32_t CFDRMDF4_14;
  uint32_t CFDRMID15;
  uint32_t CFDRMPTR15;
  uint32_t CFDRMFDSTS15;
  uint32_t CFDRMDF0_15;
  uint32_t CFDRMDF1_15;
  uint32_t CFDRMDF2_15;
  uint32_t CFDRMDF3_15;
  uint32_t CFDRMDF4_15;
  uint32_t CFDRMID16;
  uint32_t CFDRMPTR16;
  uint32_t CFDRMFDSTS16;
  uint32_t CFDRMDF0_16;
  uint32_t CFDRMDF1_16;
  uint32_t CFDRMDF2_16;
  uint32_t CFDRMDF3_16;
  uint32_t CFDRMDF4_16;
  uint32_t CFDRMID17;
  uint32_t CFDRMPTR17;
  uint32_t CFDRMFDSTS17;
  uint32_t CFDRMDF0_17;
  uint32_t CFDRMDF1_17;
  uint32_t CFDRMDF2_17;
  uint32_t CFDRMDF3_17;
  uint32_t CFDRMDF4_17;
  uint32_t CFDRMID18;
  uint32_t CFDRMPTR18;
  uint32_t CFDRMFDSTS18;
  uint32_t CFDRMDF0_18;
  uint32_t CFDRMDF1_18;
  uint32_t CFDRMDF2_18;
  uint32_t CFDRMDF3_18;
  uint32_t CFDRMDF4_18;
  uint32_t CFDRMID19;
  uint32_t CFDRMPTR19;
  uint32_t CFDRMFDSTS19;
  uint32_t CFDRMDF0_19;
  uint32_t CFDRMDF1_19;
  uint32_t CFDRMDF2_19;
  uint32_t CFDRMDF3_19;
  uint32_t CFDRMDF4_19;
  uint32_t CFDRMID20;
  uint32_t CFDRMPTR20;
  uint32_t CFDRMFDSTS20;
  uint32_t CFDRMDF0_20;
  uint32_t CFDRMDF1_20;
  uint32_t CFDRMDF2_20;
  uint32_t CFDRMDF3_20;
  uint32_t CFDRMDF4_20;
  uint32_t CFDRMID21;
  uint32_t CFDRMPTR21;
  uint32_t CFDRMFDSTS21;
  uint32_t CFDRMDF0_21;
  uint32_t CFDRMDF1_21;
  uint32_t CFDRMDF2_21;
  uint32_t CFDRMDF3_21;
  uint32_t CFDRMDF4_21;
  uint32_t CFDRMID22;
  uint32_t CFDRMPTR22;
  uint32_t CFDRMFDSTS22;
  uint32_t CFDRMDF0_22;
  uint32_t CFDRMDF1_22;
  uint32_t CFDRMDF2_22;
  uint32_t CFDRMDF3_22;
  uint32_t CFDRMDF4_22;
  uint32_t CFDRMID23;
  uint32_t CFDRMPTR23;
  uint32_t CFDRMFDSTS23;
  uint32_t CFDRMDF0_23;
  uint32_t CFDRMDF1_23;
  uint32_t CFDRMDF2_23;
  uint32_t CFDRMDF3_23;
  uint32_t CFDRMDF4_23;
  uint32_t CFDRMID24;
  uint32_t CFDRMPTR24;
  uint32_t CFDRMFDSTS24;
  uint32_t CFDRMDF0_24;
  uint32_t CFDRMDF1_24;
  uint32_t CFDRMDF2_24;
  uint32_t CFDRMDF3_24;
  uint32_t CFDRMDF4_24;
  uint32_t CFDRMID25;
  uint32_t CFDRMPTR25;
  uint32_t CFDRMFDSTS25;
  uint32_t CFDRMDF0_25;
  uint32_t CFDRMDF1_25;
  uint32_t CFDRMDF2_25;
  uint32_t CFDRMDF3_25;
  uint32_t CFDRMDF4_25;
  uint32_t CFDRMID26;
  uint32_t CFDRMPTR26;
  uint32_t CFDRMFDSTS26;
  uint32_t CFDRMDF0_26;
  uint32_t CFDRMDF1_26;
  uint32_t CFDRMDF2_26;
  uint32_t CFDRMDF3_26;
  uint32_t CFDRMDF4_26;
  uint32_t CFDRMID27;
  uint32_t CFDRMPTR27;
  uint32_t CFDRMFDSTS27;
  uint32_t CFDRMDF0_27;
  uint32_t CFDRMDF1_27;
  uint32_t CFDRMDF2_27;
  uint32_t CFDRMDF3_27;
  uint32_t CFDRMDF4_27;
  uint32_t CFDRMID28;
  uint32_t CFDRMPTR28;
  uint32_t CFDRMFDSTS28;
  uint32_t CFDRMDF0_28;
  uint32_t CFDRMDF1_28;
  uint32_t CFDRMDF2_28;
  uint32_t CFDRMDF3_28;
  uint32_t CFDRMDF4_28;
  uint32_t CFDRMID29;
  uint32_t CFDRMPTR29;
  uint32_t CFDRMFDSTS29;
  uint32_t CFDRMDF0_29;
  uint32_t CFDRMDF1_29;
  uint32_t CFDRMDF2_29;
  uint32_t CFDRMDF3_29;
  uint32_t CFDRMDF4_29;
  uint32_t CFDRMID30;
  uint32_t CFDRMPTR30;
  uint32_t CFDRMFDSTS30;
  uint32_t CFDRMDF0_30;
  uint32_t CFDRMDF1_30;
  uint32_t CFDRMDF2_30;
  uint32_t CFDRMDF3_30;
  uint32_t CFDRMDF4_30;
  uint32_t CFDRMID31;
  uint32_t CFDRMPTR31;
  uint32_t CFDRMFDSTS31;
  uint32_t CFDRMDF0_31;
  uint32_t CFDRMDF1_31;
  uint32_t CFDRMDF2_31;
  uint32_t CFDRMDF3_31;
  uint32_t CFDRMDF4_31;
  uint32_t CFDRMID32;
  uint32_t CFDRMPTR32;
  uint32_t CFDRMFDSTS32;
  uint32_t CFDRMDF0_32;
  uint32_t CFDRMDF1_32;
  uint32_t CFDRMDF2_32;
  uint32_t CFDRMDF3_32;
  uint32_t CFDRMDF4_32;
  uint32_t CFDRMID33;
  uint32_t CFDRMPTR33;
  uint32_t CFDRMFDSTS33;
  uint32_t CFDRMDF0_33;
  uint32_t CFDRMDF1_33;
  uint32_t CFDRMDF2_33;
  uint32_t CFDRMDF3_33;
  uint32_t CFDRMDF4_33;
  uint32_t CFDRMID34;
  uint32_t CFDRMPTR34;
  uint32_t CFDRMFDSTS34;
  uint32_t CFDRMDF0_34;
  uint32_t CFDRMDF1_34;
  uint32_t CFDRMDF2_34;
  uint32_t CFDRMDF3_34;
  uint32_t CFDRMDF4_34;
  uint32_t CFDRMID35;
  uint32_t CFDRMPTR35;
  uint32_t CFDRMFDSTS35;
  uint32_t CFDRMDF0_35;
  uint32_t CFDRMDF1_35;
  uint32_t CFDRMDF2_35;
  uint32_t CFDRMDF3_35;
  uint32_t CFDRMDF4_35;
  uint32_t CFDRMID36;
  uint32_t CFDRMPTR36;
  uint32_t CFDRMFDSTS36;
  uint32_t CFDRMDF0_36;
  uint32_t CFDRMDF1_36;
  uint32_t CFDRMDF2_36;
  uint32_t CFDRMDF3_36;
  uint32_t CFDRMDF4_36;
  uint32_t CFDRMID37;
  uint32_t CFDRMPTR37;
  uint32_t CFDRMFDSTS37;
  uint32_t CFDRMDF0_37;
  uint32_t CFDRMDF1_37;
  uint32_t CFDRMDF2_37;
  uint32_t CFDRMDF3_37;
  uint32_t CFDRMDF4_37;
  uint32_t CFDRMID38;
  uint32_t CFDRMPTR38;
  uint32_t CFDRMFDSTS38;
  uint32_t CFDRMDF0_38;
  uint32_t CFDRMDF1_38;
  uint32_t CFDRMDF2_38;
  uint32_t CFDRMDF3_38;
  uint32_t CFDRMDF4_38;
  uint32_t CFDRMID39;
  uint32_t CFDRMPTR39;
  uint32_t CFDRMFDSTS39;
  uint32_t CFDRMDF0_39;
  uint32_t CFDRMDF1_39;
  uint32_t CFDRMDF2_39;
  uint32_t CFDRMDF3_39;
  uint32_t CFDRMDF4_39;
  uint32_t CFDRMID40;
  uint32_t CFDRMPTR40;
  uint32_t CFDRMFDSTS40;
  uint32_t CFDRMDF0_40;
  uint32_t CFDRMDF1_40;
  uint32_t CFDRMDF2_40;
  uint32_t CFDRMDF3_40;
  uint32_t CFDRMDF4_40;
  uint32_t CFDRMID41;
  uint32_t CFDRMPTR41;
  uint32_t CFDRMFDSTS41;
  uint32_t CFDRMDF0_41;
  uint32_t CFDRMDF1_41;
  uint32_t CFDRMDF2_41;
  uint32_t CFDRMDF3_41;
  uint32_t CFDRMDF4_41;
  uint32_t CFDRMID42;
  uint32_t CFDRMPTR42;
  uint32_t CFDRMFDSTS42;
  uint32_t CFDRMDF0_42;
  uint32_t CFDRMDF1_42;
  uint32_t CFDRMDF2_42;
  uint32_t CFDRMDF3_42;
  uint32_t CFDRMDF4_42;
  uint32_t CFDRMID43;
  uint32_t CFDRMPTR43;
  uint32_t CFDRMFDSTS43;
  uint32_t CFDRMDF0_43;
  uint32_t CFDRMDF1_43;
  uint32_t CFDRMDF2_43;
  uint32_t CFDRMDF3_43;
  uint32_t CFDRMDF4_43;
  uint32_t CFDRMID44;
  uint32_t CFDRMPTR44;
  uint32_t CFDRMFDSTS44;
  uint32_t CFDRMDF0_44;
  uint32_t CFDRMDF1_44;
  uint32_t CFDRMDF2_44;
  uint32_t CFDRMDF3_44;
  uint32_t CFDRMDF4_44;
  uint32_t CFDRMID45;
  uint32_t CFDRMPTR45;
  uint32_t CFDRMFDSTS45;
  uint32_t CFDRMDF0_45;
  uint32_t CFDRMDF1_45;
  uint32_t CFDRMDF2_45;
  uint32_t CFDRMDF3_45;
  uint32_t CFDRMDF4_45;
  uint32_t CFDRMID46;
  uint32_t CFDRMPTR46;
  uint32_t CFDRMFDSTS46;
  uint32_t CFDRMDF0_46;
  uint32_t CFDRMDF1_46;
  uint32_t CFDRMDF2_46;
  uint32_t CFDRMDF3_46;
  uint32_t CFDRMDF4_46;
  uint32_t CFDRMID47;
  uint32_t CFDRMPTR47;
  uint32_t CFDRMFDSTS47;
  uint32_t CFDRMDF0_47;
  uint32_t CFDRMDF1_47;
  uint32_t CFDRMDF2_47;
  uint32_t CFDRMDF3_47;
  uint32_t CFDRMDF4_47;
  uint8_t res28[2560];

  uint32_t CFDRFID0;
  uint32_t CFDRFPTR0;
  uint32_t CFDRFFDSTS0;
  uint32_t CFDRFDF0_0;
  uint32_t CFDRFDF1_0;
  uint32_t CFDRFDF2_0;
  uint32_t CFDRFDF3_0;
  uint32_t CFDRFDF4_0;
  uint32_t CFDRFDF5_0;
  uint32_t CFDRFDF6_0;
  uint32_t CFDRFDF7_0;
  uint32_t CFDRFDF8_0;
  uint32_t CFDRFDF9_0;
  uint32_t CFDRFDF10_0;
  uint32_t CFDRFDF11_0;
  uint32_t CFDRFDF12_0;
  uint32_t CFDRFDF13_0;
  uint32_t CFDRFDF14_0;
  uint32_t CFDRFDF15_0;
  uint8_t res29[52];

  uint32_t CFDRFID1;
  uint32_t CFDRFPTR1;
  uint32_t CFDRFFDSTS1;
  uint32_t CFDRFDF0_1;
  uint32_t CFDRFDF1_1;
  uint32_t CFDRFDF2_1;
  uint32_t CFDRFDF3_1;
  uint32_t CFDRFDF4_1;
  uint32_t CFDRFDF5_1;
  uint32_t CFDRFDF6_1;
  uint32_t CFDRFDF7_1;
  uint32_t CFDRFDF8_1;
  uint32_t CFDRFDF9_1;
  uint32_t CFDRFDF10_1;
  uint32_t CFDRFDF11_1;
  uint32_t CFDRFDF12_1;
  uint32_t CFDRFDF13_1;
  uint32_t CFDRFDF14_1;
  uint32_t CFDRFDF15_1;
  uint8_t res30[52];

  uint32_t CFDRFID2;
  uint32_t CFDRFPTR2;
  uint32_t CFDRFFDSTS2;
  uint32_t CFDRFDF0_2;
  uint32_t CFDRFDF1_2;
  uint32_t CFDRFDF2_2;
  uint32_t CFDRFDF3_2;
  uint32_t CFDRFDF4_2;
  uint32_t CFDRFDF5_2;
  uint32_t CFDRFDF6_2;
  uint32_t CFDRFDF7_2;
  uint32_t CFDRFDF8_2;
  uint32_t CFDRFDF9_2;
  uint32_t CFDRFDF10_2;
  uint32_t CFDRFDF11_2;
  uint32_t CFDRFDF12_2;
  uint32_t CFDRFDF13_2;
  uint32_t CFDRFDF14_2;
  uint32_t CFDRFDF15_2;
  uint8_t res31[52];

  uint32_t CFDRFID3;
  uint32_t CFDRFPTR3;
  uint32_t CFDRFFDSTS3;
  uint32_t CFDRFDF0_3;
  uint32_t CFDRFDF1_3;
  uint32_t CFDRFDF2_3;
  uint32_t CFDRFDF3_3;
  uint32_t CFDRFDF4_3;
  uint32_t CFDRFDF5_3;
  uint32_t CFDRFDF6_3;
  uint32_t CFDRFDF7_3;
  uint32_t CFDRFDF8_3;
  uint32_t CFDRFDF9_3;
  uint32_t CFDRFDF10_3;
  uint32_t CFDRFDF11_3;
  uint32_t CFDRFDF12_3;
  uint32_t CFDRFDF13_3;
  uint32_t CFDRFDF14_3;
  uint32_t CFDRFDF15_3;
  uint8_t res32[52];

  uint32_t CFDRFID4;
  uint32_t CFDRFPTR4;
  uint32_t CFDRFFDSTS4;
  uint32_t CFDRFDF0_4;
  uint32_t CFDRFDF1_4;
  uint32_t CFDRFDF2_4;
  uint32_t CFDRFDF3_4;
  uint32_t CFDRFDF4_4;
  uint32_t CFDRFDF5_4;
  uint32_t CFDRFDF6_4;
  uint32_t CFDRFDF7_4;
  uint32_t CFDRFDF8_4;
  uint32_t CFDRFDF9_4;
  uint32_t CFDRFDF10_4;
  uint32_t CFDRFDF11_4;
  uint32_t CFDRFDF12_4;
  uint32_t CFDRFDF13_4;
  uint32_t CFDRFDF14_4;
  uint32_t CFDRFDF15_4;
  uint8_t res33[52];

  uint32_t CFDRFID5;
  uint32_t CFDRFPTR5;
  uint32_t CFDRFFDSTS5;
  uint32_t CFDRFDF0_5;
  uint32_t CFDRFDF1_5;
  uint32_t CFDRFDF2_5;
  uint32_t CFDRFDF3_5;
  uint32_t CFDRFDF4_5;
  uint32_t CFDRFDF5_5;
  uint32_t CFDRFDF6_5;
  uint32_t CFDRFDF7_5;
  uint32_t CFDRFDF8_5;
  uint32_t CFDRFDF9_5;
  uint32_t CFDRFDF10_5;
  uint32_t CFDRFDF11_5;
  uint32_t CFDRFDF12_5;
  uint32_t CFDRFDF13_5;
  uint32_t CFDRFDF14_5;
  uint32_t CFDRFDF15_5;
  uint8_t res34[52];

  uint32_t CFDRFID6;
  uint32_t CFDRFPTR6;
  uint32_t CFDRFFDSTS6;
  uint32_t CFDRFDF0_6;
  uint32_t CFDRFDF1_6;
  uint32_t CFDRFDF2_6;
  uint32_t CFDRFDF3_6;
  uint32_t CFDRFDF4_6;
  uint32_t CFDRFDF5_6;
  uint32_t CFDRFDF6_6;
  uint32_t CFDRFDF7_6;
  uint32_t CFDRFDF8_6;
  uint32_t CFDRFDF9_6;
  uint32_t CFDRFDF10_6;
  uint32_t CFDRFDF11_6;
  uint32_t CFDRFDF12_6;
  uint32_t CFDRFDF13_6;
  uint32_t CFDRFDF14_6;
  uint32_t CFDRFDF15_6;
  uint8_t res35[52];

  uint32_t CFDRFID7;
  uint32_t CFDRFPTR7;
  uint32_t CFDRFFDSTS7;
  uint32_t CFDRFDF0_7;
  uint32_t CFDRFDF1_7;
  uint32_t CFDRFDF2_7;
  uint32_t CFDRFDF3_7;
  uint32_t CFDRFDF4_7;
  uint32_t CFDRFDF5_7;
  uint32_t CFDRFDF6_7;
  uint32_t CFDRFDF7_7;
  uint32_t CFDRFDF8_7;
  uint32_t CFDRFDF9_7;
  uint32_t CFDRFDF10_7;
  uint32_t CFDRFDF11_7;
  uint32_t CFDRFDF12_7;
  uint32_t CFDRFDF13_7;
  uint32_t CFDRFDF14_7;
  uint32_t CFDRFDF15_7;
  uint8_t res36[52];

  uint32_t CFDCFID0;
  uint32_t CFDCFPTR0;
  uint32_t CFDCFFDCSTS0;
  uint32_t CFDCFDF0_0;
  uint32_t CFDCFDF1_0;
  uint32_t CFDCFDF2_0;
  uint32_t CFDCFDF3_0;
  uint32_t CFDCFDF4_0;
  uint32_t CFDCFDF5_0;
  uint32_t CFDCFDF6_0;
  uint32_t CFDCFDF7_0;
  uint32_t CFDCFDF8_0;
  uint32_t CFDCFDF9_0;
  uint32_t CFDCFDF10_0;
  uint32_t CFDCFDF11_0;
  uint32_t CFDCFDF12_0;
  uint32_t CFDCFDF13_0;
  uint32_t CFDCFDF14_0;
  uint32_t CFDCFDF15_0;
  uint8_t res37[52];

  uint32_t CFDCFID1;
  uint32_t CFDCFPTR1;
  uint32_t CFDCFFDCSTS1;
  uint32_t CFDCFDF0_1;
  uint32_t CFDCFDF1_1;
  uint32_t CFDCFDF2_1;
  uint32_t CFDCFDF3_1;
  uint32_t CFDCFDF4_1;
  uint32_t CFDCFDF5_1;
  uint32_t CFDCFDF6_1;
  uint32_t CFDCFDF7_1;
  uint32_t CFDCFDF8_1;
  uint32_t CFDCFDF9_1;
  uint32_t CFDCFDF10_1;
  uint32_t CFDCFDF11_1;
  uint32_t CFDCFDF12_1;
  uint32_t CFDCFDF13_1;
  uint32_t CFDCFDF14_1;
  uint32_t CFDCFDF15_1;
  uint8_t res38[52];

  uint32_t CFDCFID2;
  uint32_t CFDCFPTR2;
  uint32_t CFDCFFDCSTS2;
  uint32_t CFDCFDF0_2;
  uint32_t CFDCFDF1_2;
  uint32_t CFDCFDF2_2;
  uint32_t CFDCFDF3_2;
  uint32_t CFDCFDF4_2;
  uint32_t CFDCFDF5_2;
  uint32_t CFDCFDF6_2;
  uint32_t CFDCFDF7_2;
  uint32_t CFDCFDF8_2;
  uint32_t CFDCFDF9_2;
  uint32_t CFDCFDF10_2;
  uint32_t CFDCFDF11_2;
  uint32_t CFDCFDF12_2;
  uint32_t CFDCFDF13_2;
  uint32_t CFDCFDF14_2;
  uint32_t CFDCFDF15_2;
  uint8_t res39[52];

  uint32_t CFDCFID3;
  uint32_t CFDCFPTR3;
  uint32_t CFDCFFDCSTS3;
  uint32_t CFDCFDF0_3;
  uint32_t CFDCFDF1_3;
  uint32_t CFDCFDF2_3;
  uint32_t CFDCFDF3_3;
  uint32_t CFDCFDF4_3;
  uint32_t CFDCFDF5_3;
  uint32_t CFDCFDF6_3;
  uint32_t CFDCFDF7_3;
  uint32_t CFDCFDF8_3;
  uint32_t CFDCFDF9_3;
  uint32_t CFDCFDF10_3;
  uint32_t CFDCFDF11_3;
  uint32_t CFDCFDF12_3;
  uint32_t CFDCFDF13_3;
  uint32_t CFDCFDF14_3;
  uint32_t CFDCFDF15_3;
  uint8_t res40[52];

  uint32_t CFDCFID4;
  uint32_t CFDCFPTR4;
  uint32_t CFDCFFDCSTS4;
  uint32_t CFDCFDF0_4;
  uint32_t CFDCFDF1_4;
  uint32_t CFDCFDF2_4;
  uint32_t CFDCFDF3_4;
  uint32_t CFDCFDF4_4;
  uint32_t CFDCFDF5_4;
  uint32_t CFDCFDF6_4;
  uint32_t CFDCFDF7_4;
  uint32_t CFDCFDF8_4;
  uint32_t CFDCFDF9_4;
  uint32_t CFDCFDF10_4;
  uint32_t CFDCFDF11_4;
  uint32_t CFDCFDF12_4;
  uint32_t CFDCFDF13_4;
  uint32_t CFDCFDF14_4;
  uint32_t CFDCFDF15_4;
  uint8_t res41[52];

  uint32_t CFDCFID5;
  uint32_t CFDCFPTR5;
  uint32_t CFDCFFDCSTS5;
  uint32_t CFDCFDF0_5;
  uint32_t CFDCFDF1_5;
  uint32_t CFDCFDF2_5;
  uint32_t CFDCFDF3_5;
  uint32_t CFDCFDF4_5;
  uint32_t CFDCFDF5_5;
  uint32_t CFDCFDF6_5;
  uint32_t CFDCFDF7_5;
  uint32_t CFDCFDF8_5;
  uint32_t CFDCFDF9_5;
  uint32_t CFDCFDF10_5;
  uint32_t CFDCFDF11_5;
  uint32_t CFDCFDF12_5;
  uint32_t CFDCFDF13_5;
  uint32_t CFDCFDF14_5;
  uint32_t CFDCFDF15_5;
  uint8_t res42[52];

  uint32_t CFDCFID6;
  uint32_t CFDCFPTR6;
  uint32_t CFDCFFDCSTS6;
  uint32_t CFDCFDF0_6;
  uint32_t CFDCFDF1_6;
  uint32_t CFDCFDF2_6;
  uint32_t CFDCFDF3_6;
  uint32_t CFDCFDF4_6;
  uint32_t CFDCFDF5_6;
  uint32_t CFDCFDF6_6;
  uint32_t CFDCFDF7_6;
  uint32_t CFDCFDF8_6;
  uint32_t CFDCFDF9_6;
  uint32_t CFDCFDF10_6;
  uint32_t CFDCFDF11_6;
  uint32_t CFDCFDF12_6;
  uint32_t CFDCFDF13_6;
  uint32_t CFDCFDF14_6;
  uint32_t CFDCFDF15_6;
  uint8_t res43[52];

  uint32_t CFDCFID7;
  uint32_t CFDCFPTR7;
  uint32_t CFDCFFDCSTS7;
  uint32_t CFDCFDF0_7;
  uint32_t CFDCFDF1_7;
  uint32_t CFDCFDF2_7;
  uint32_t CFDCFDF3_7;
  uint32_t CFDCFDF4_7;
  uint32_t CFDCFDF5_7;
  uint32_t CFDCFDF6_7;
  uint32_t CFDCFDF7_7;
  uint32_t CFDCFDF8_7;
  uint32_t CFDCFDF9_7;
  uint32_t CFDCFDF10_7;
  uint32_t CFDCFDF11_7;
  uint32_t CFDCFDF12_7;
  uint32_t CFDCFDF13_7;
  uint32_t CFDCFDF14_7;
  uint32_t CFDCFDF15_7;
  uint8_t res44[52];

  uint32_t CFDCFID8;
  uint32_t CFDCFPTR8;
  uint32_t CFDCFFDCSTS8;
  uint32_t CFDCFDF0_8;
  uint32_t CFDCFDF1_8;
  uint32_t CFDCFDF2_8;
  uint32_t CFDCFDF3_8;
  uint32_t CFDCFDF4_8;
  uint32_t CFDCFDF5_8;
  uint32_t CFDCFDF6_8;
  uint32_t CFDCFDF7_8;
  uint32_t CFDCFDF8_8;
  uint32_t CFDCFDF9_8;
  uint32_t CFDCFDF10_8;
  uint32_t CFDCFDF11_8;
  uint32_t CFDCFDF12_8;
  uint32_t CFDCFDF13_8;
  uint32_t CFDCFDF14_8;
  uint32_t CFDCFDF15_8;
  uint8_t res45[1972];

  uint32_t CFDTMID0;
  uint32_t CFDTMPTR0;
  uint32_t CFDTMFDCTR0;
  uint32_t CFDTMDF0_0;
  uint32_t CFDTMDF1_0;
  uint32_t CFDTMDF2_0;
  uint32_t CFDTMDF3_0;
  uint32_t CFDTMDF4_0;
  uint32_t CFDTMID1;
  uint32_t CFDTMPTR1;
  uint32_t CFDTMFDCTR1;
  uint32_t CFDTMDF0_1;
  uint32_t CFDTMDF1_1;
  uint32_t CFDTMDF2_1;
  uint32_t CFDTMDF3_1;
  uint32_t CFDTMDF4_1;
  uint32_t CFDTMID2;
  uint32_t CFDTMPTR2;
  uint32_t CFDTMFDCTR2;
  uint32_t CFDTMDF0_2;
  uint32_t CFDTMDF1_2;
  uint32_t CFDTMDF2_2;
  uint32_t CFDTMDF3_2;
  uint32_t CFDTMDF4_2;
  uint32_t CFDTMID3;
  uint32_t CFDTMPTR3;
  uint32_t CFDTMFDCTR3;
  uint32_t CFDTMDF0_3;
  uint32_t CFDTMDF1_3;
  uint32_t CFDTMDF2_3;
  uint32_t CFDTMDF3_3;
  uint32_t CFDTMDF4_3;
  uint32_t CFDTMID4;
  uint32_t CFDTMPTR4;
  uint32_t CFDTMFDCTR4;
  uint32_t CFDTMDF0_4;
  uint32_t CFDTMDF1_4;
  uint32_t CFDTMDF2_4;
  uint32_t CFDTMDF3_4;
  uint32_t CFDTMDF4_4;
  uint32_t CFDTMID5;
  uint32_t CFDTMPTR5;
  uint32_t CFDTMFDCTR5;
  uint32_t CFDTMDF0_5;
  uint32_t CFDTMDF1_5;
  uint32_t CFDTMDF2_5;
  uint32_t CFDTMDF3_5;
  uint32_t CFDTMDF4_5;
  uint32_t CFDTMID6;
  uint32_t CFDTMPTR6;
  uint32_t CFDTMFDCTR6;
  uint32_t CFDTMDF0_6;
  uint32_t CFDTMDF1_6;
  uint32_t CFDTMDF2_6;
  uint32_t CFDTMDF3_6;
  uint32_t CFDTMDF4_6;
  uint32_t CFDTMID7;
  uint32_t CFDTMPTR7;
  uint32_t CFDTMFDCTR7;
  uint32_t CFDTMDF0_7;
  uint32_t CFDTMDF1_7;
  uint32_t CFDTMDF2_7;
  uint32_t CFDTMDF3_7;
  uint32_t CFDTMDF4_7;
  uint32_t CFDTMID8;
  uint32_t CFDTMPTR8;
  uint32_t CFDTMFDCTR8;
  uint32_t CFDTMDF0_8;
  uint32_t CFDTMDF1_8;
  uint32_t CFDTMDF2_8;
  uint32_t CFDTMDF3_8;
  uint32_t CFDTMDF4_8;
  uint32_t CFDTMID9;
  uint32_t CFDTMPTR9;
  uint32_t CFDTMFDCTR9;
  uint32_t CFDTMDF0_9;
  uint32_t CFDTMDF1_9;
  uint32_t CFDTMDF2_9;
  uint32_t CFDTMDF3_9;
  uint32_t CFDTMDF4_9;
  uint32_t CFDTMID10;
  uint32_t CFDTMPTR10;
  uint32_t CFDTMFDCTR10;
  uint32_t CFDTMDF0_10;
  uint32_t CFDTMDF1_10;
  uint32_t CFDTMDF2_10;
  uint32_t CFDTMDF3_10;
  uint32_t CFDTMDF4_10;
  uint32_t CFDTMID11;
  uint32_t CFDTMPTR11;
  uint32_t CFDTMFDCTR11;
  uint32_t CFDTMDF0_11;
  uint32_t CFDTMDF1_11;
  uint32_t CFDTMDF2_11;
  uint32_t CFDTMDF3_11;
  uint32_t CFDTMDF4_11;
  uint32_t CFDTMID12;
  uint32_t CFDTMPTR12;
  uint32_t CFDTMFDCTR12;
  uint32_t CFDTMDF0_12;
  uint32_t CFDTMDF1_12;
  uint32_t CFDTMDF2_12;
  uint32_t CFDTMDF3_12;
  uint32_t CFDTMDF4_12;
  uint32_t CFDTMID13;
  uint32_t CFDTMPTR13;
  uint32_t CFDTMFDCTR13;
  uint32_t CFDTMDF0_13;
  uint32_t CFDTMDF1_13;
  uint32_t CFDTMDF2_13;
  uint32_t CFDTMDF3_13;
  uint32_t CFDTMDF4_13;
  uint32_t CFDTMID14;
  uint32_t CFDTMPTR14;
  uint32_t CFDTMFDCTR14;
  uint32_t CFDTMDF0_14;
  uint32_t CFDTMDF1_14;
  uint32_t CFDTMDF2_14;
  uint32_t CFDTMDF3_14;
  uint32_t CFDTMDF4_14;
  uint32_t CFDTMID15;
  uint32_t CFDTMPTR15;
  uint32_t CFDTMFDCTR15;
  uint32_t CFDTMDF0_15;
  uint32_t CFDTMDF1_15;
  uint32_t CFDTMDF2_15;
  uint32_t CFDTMDF3_15;
  uint32_t CFDTMDF4_15;
  uint32_t CFDTMID16;
  uint32_t CFDTMPTR16;
  uint32_t CFDTMFDCTR16;
  uint32_t CFDTMDF0_16;
  uint32_t CFDTMDF1_16;
  uint32_t CFDTMDF2_16;
  uint32_t CFDTMDF3_16;
  uint32_t CFDTMDF4_16;
  uint32_t CFDTMID17;
  uint32_t CFDTMPTR17;
  uint32_t CFDTMFDCTR17;
  uint32_t CFDTMDF0_17;
  uint32_t CFDTMDF1_17;
  uint32_t CFDTMDF2_17;
  uint32_t CFDTMDF3_17;
  uint32_t CFDTMDF4_17;
  uint32_t CFDTMID18;
  uint32_t CFDTMPTR18;
  uint32_t CFDTMFDCTR18;
  uint32_t CFDTMDF0_18;
  uint32_t CFDTMDF1_18;
  uint32_t CFDTMDF2_18;
  uint32_t CFDTMDF3_18;
  uint32_t CFDTMDF4_18;
  uint32_t CFDTMID19;
  uint32_t CFDTMPTR19;
  uint32_t CFDTMFDCTR19;
  uint32_t CFDTMDF0_19;
  uint32_t CFDTMDF1_19;
  uint32_t CFDTMDF2_19;
  uint32_t CFDTMDF3_19;
  uint32_t CFDTMDF4_19;
  uint32_t CFDTMID20;
  uint32_t CFDTMPTR20;
  uint32_t CFDTMFDCTR20;
  uint32_t CFDTMDF0_20;
  uint32_t CFDTMDF1_20;
  uint32_t CFDTMDF2_20;
  uint32_t CFDTMDF3_20;
  uint32_t CFDTMDF4_20;
  uint32_t CFDTMID21;
  uint32_t CFDTMPTR21;
  uint32_t CFDTMFDCTR21;
  uint32_t CFDTMDF0_21;
  uint32_t CFDTMDF1_21;
  uint32_t CFDTMDF2_21;
  uint32_t CFDTMDF3_21;
  uint32_t CFDTMDF4_21;
  uint32_t CFDTMID22;
  uint32_t CFDTMPTR22;
  uint32_t CFDTMFDCTR22;
  uint32_t CFDTMDF0_22;
  uint32_t CFDTMDF1_22;
  uint32_t CFDTMDF2_22;
  uint32_t CFDTMDF3_22;
  uint32_t CFDTMDF4_22;
  uint32_t CFDTMID23;
  uint32_t CFDTMPTR23;
  uint32_t CFDTMFDCTR23;
  uint32_t CFDTMDF0_23;
  uint32_t CFDTMDF1_23;
  uint32_t CFDTMDF2_23;
  uint32_t CFDTMDF3_23;
  uint32_t CFDTMDF4_23;
  uint32_t CFDTMID24;
  uint32_t CFDTMPTR24;
  uint32_t CFDTMFDCTR24;
  uint32_t CFDTMDF0_24;
  uint32_t CFDTMDF1_24;
  uint32_t CFDTMDF2_24;
  uint32_t CFDTMDF3_24;
  uint32_t CFDTMDF4_24;
  uint32_t CFDTMID25;
  uint32_t CFDTMPTR25;
  uint32_t CFDTMFDCTR25;
  uint32_t CFDTMDF0_25;
  uint32_t CFDTMDF1_25;
  uint32_t CFDTMDF2_25;
  uint32_t CFDTMDF3_25;
  uint32_t CFDTMDF4_25;
  uint32_t CFDTMID26;
  uint32_t CFDTMPTR26;
  uint32_t CFDTMFDCTR26;
  uint32_t CFDTMDF0_26;
  uint32_t CFDTMDF1_26;
  uint32_t CFDTMDF2_26;
  uint32_t CFDTMDF3_26;
  uint32_t CFDTMDF4_26;
  uint32_t CFDTMID27;
  uint32_t CFDTMPTR27;
  uint32_t CFDTMFDCTR27;
  uint32_t CFDTMDF0_27;
  uint32_t CFDTMDF1_27;
  uint32_t CFDTMDF2_27;
  uint32_t CFDTMDF3_27;
  uint32_t CFDTMDF4_27;
  uint32_t CFDTMID28;
  uint32_t CFDTMPTR28;
  uint32_t CFDTMFDCTR28;
  uint32_t CFDTMDF0_28;
  uint32_t CFDTMDF1_28;
  uint32_t CFDTMDF2_28;
  uint32_t CFDTMDF3_28;
  uint32_t CFDTMDF4_28;
  uint32_t CFDTMID29;
  uint32_t CFDTMPTR29;
  uint32_t CFDTMFDCTR29;
  uint32_t CFDTMDF0_29;
  uint32_t CFDTMDF1_29;
  uint32_t CFDTMDF2_29;
  uint32_t CFDTMDF3_29;
  uint32_t CFDTMDF4_29;
  uint32_t CFDTMID30;
  uint32_t CFDTMPTR30;
  uint32_t CFDTMFDCTR30;
  uint32_t CFDTMDF0_30;
  uint32_t CFDTMDF1_30;
  uint32_t CFDTMDF2_30;
  uint32_t CFDTMDF3_30;
  uint32_t CFDTMDF4_30;
  uint32_t CFDTMID31;
  uint32_t CFDTMPTR31;
  uint32_t CFDTMFDCTR31;
  uint32_t CFDTMDF0_31;
  uint32_t CFDTMDF1_31;
  uint32_t CFDTMDF2_31;
  uint32_t CFDTMDF3_31;
  uint32_t CFDTMDF4_31;
  uint32_t CFDTMID32;
  uint32_t CFDTMPTR32;
  uint32_t CFDTMFDCTR32;
  uint32_t CFDTMDF0_32;
  uint32_t CFDTMDF1_32;
  uint32_t CFDTMDF2_32;
  uint32_t CFDTMDF3_32;
  uint32_t CFDTMDF4_32;
  uint32_t CFDTMID33;
  uint32_t CFDTMPTR33;
  uint32_t CFDTMFDCTR33;
  uint32_t CFDTMDF0_33;
  uint32_t CFDTMDF1_33;
  uint32_t CFDTMDF2_33;
  uint32_t CFDTMDF3_33;
  uint32_t CFDTMDF4_33;
  uint32_t CFDTMID34;
  uint32_t CFDTMPTR34;
  uint32_t CFDTMFDCTR34;
  uint32_t CFDTMDF0_34;
  uint32_t CFDTMDF1_34;
  uint32_t CFDTMDF2_34;
  uint32_t CFDTMDF3_34;
  uint32_t CFDTMDF4_34;
  uint32_t CFDTMID35;
  uint32_t CFDTMPTR35;
  uint32_t CFDTMFDCTR35;
  uint32_t CFDTMDF0_35;
  uint32_t CFDTMDF1_35;
  uint32_t CFDTMDF2_35;
  uint32_t CFDTMDF3_35;
  uint32_t CFDTMDF4_35;
  uint32_t CFDTMID36;
  uint32_t CFDTMPTR36;
  uint32_t CFDTMFDCTR36;
  uint32_t CFDTMDF0_36;
  uint32_t CFDTMDF1_36;
  uint32_t CFDTMDF2_36;
  uint32_t CFDTMDF3_36;
  uint32_t CFDTMDF4_36;
  uint32_t CFDTMID37;
  uint32_t CFDTMPTR37;
  uint32_t CFDTMFDCTR37;
  uint32_t CFDTMDF0_37;
  uint32_t CFDTMDF1_37;
  uint32_t CFDTMDF2_37;
  uint32_t CFDTMDF3_37;
  uint32_t CFDTMDF4_37;
  uint32_t CFDTMID38;
  uint32_t CFDTMPTR38;
  uint32_t CFDTMFDCTR38;
  uint32_t CFDTMDF0_38;
  uint32_t CFDTMDF1_38;
  uint32_t CFDTMDF2_38;
  uint32_t CFDTMDF3_38;
  uint32_t CFDTMDF4_38;
  uint32_t CFDTMID39;
  uint32_t CFDTMPTR39;
  uint32_t CFDTMFDCTR39;
  uint32_t CFDTMDF0_39;
  uint32_t CFDTMDF1_39;
  uint32_t CFDTMDF2_39;
  uint32_t CFDTMDF3_39;
  uint32_t CFDTMDF4_39;
  uint32_t CFDTMID40;
  uint32_t CFDTMPTR40;
  uint32_t CFDTMFDCTR40;
  uint32_t CFDTMDF0_40;
  uint32_t CFDTMDF1_40;
  uint32_t CFDTMDF2_40;
  uint32_t CFDTMDF3_40;
  uint32_t CFDTMDF4_40;
  uint32_t CFDTMID41;
  uint32_t CFDTMPTR41;
  uint32_t CFDTMFDCTR41;
  uint32_t CFDTMDF0_41;
  uint32_t CFDTMDF1_41;
  uint32_t CFDTMDF2_41;
  uint32_t CFDTMDF3_41;
  uint32_t CFDTMDF4_41;
  uint32_t CFDTMID42;
  uint32_t CFDTMPTR42;
  uint32_t CFDTMFDCTR42;
  uint32_t CFDTMDF0_42;
  uint32_t CFDTMDF1_42;
  uint32_t CFDTMDF2_42;
  uint32_t CFDTMDF3_42;
  uint32_t CFDTMDF4_42;
  uint32_t CFDTMID43;
  uint32_t CFDTMPTR43;
  uint32_t CFDTMFDCTR43;
  uint32_t CFDTMDF0_43;
  uint32_t CFDTMDF1_43;
  uint32_t CFDTMDF2_43;
  uint32_t CFDTMDF3_43;
  uint32_t CFDTMDF4_43;
  uint32_t CFDTMID44;
  uint32_t CFDTMPTR44;
  uint32_t CFDTMFDCTR44;
  uint32_t CFDTMDF0_44;
  uint32_t CFDTMDF1_44;
  uint32_t CFDTMDF2_44;
  uint32_t CFDTMDF3_44;
  uint32_t CFDTMDF4_44;
  uint32_t CFDTMID45;
  uint32_t CFDTMPTR45;
  uint32_t CFDTMFDCTR45;
  uint32_t CFDTMDF0_45;
  uint32_t CFDTMDF1_45;
  uint32_t CFDTMDF2_45;
  uint32_t CFDTMDF3_45;
  uint32_t CFDTMDF4_45;
  uint32_t CFDTMID46;
  uint32_t CFDTMPTR46;
  uint32_t CFDTMFDCTR46;
  uint32_t CFDTMDF0_46;
  uint32_t CFDTMDF1_46;
  uint32_t CFDTMDF2_46;
  uint32_t CFDTMDF3_46;
  uint32_t CFDTMDF4_46;
  uint32_t CFDTMID47;
  uint32_t CFDTMPTR47;
  uint32_t CFDTMFDCTR47;
  uint32_t CFDTMDF0_47;
  uint32_t CFDTMDF1_47;
  uint32_t CFDTMDF2_47;
  uint32_t CFDTMDF3_47;
  uint32_t CFDTMDF4_47;
  uint8_t res46[6656];

  uint32_t CFDTHLACC0;
  uint32_t CFDTHLACC1;
  uint32_t CFDTHLACC2;
  uint8_t res47[1012];

  uint32_t CFDRPGACC0;
  uint32_t CFDRPGACC1;
  uint32_t CFDRPGACC2;
  uint32_t CFDRPGACC3;
  uint32_t CFDRPGACC4;
  uint32_t CFDRPGACC5;
  uint32_t CFDRPGACC6;
  uint32_t CFDRPGACC7;
  uint32_t CFDRPGACC8;
  uint32_t CFDRPGACC9;
  uint32_t CFDRPGACC10;
  uint32_t CFDRPGACC11;
  uint32_t CFDRPGACC12;
  uint32_t CFDRPGACC13;
  uint32_t CFDRPGACC14;
  uint32_t CFDRPGACC15;
  uint32_t CFDRPGACC16;
  uint32_t CFDRPGACC17;
  uint32_t CFDRPGACC18;
  uint32_t CFDRPGACC19;
  uint32_t CFDRPGACC20;
  uint32_t CFDRPGACC21;
  uint32_t CFDRPGACC22;
  uint32_t CFDRPGACC23;
  uint32_t CFDRPGACC24;
  uint32_t CFDRPGACC25;
  uint32_t CFDRPGACC26;
  uint32_t CFDRPGACC27;
  uint32_t CFDRPGACC28;
  uint32_t CFDRPGACC29;
  uint32_t CFDRPGACC30;
  uint32_t CFDRPGACC31;
  uint32_t CFDRPGACC32;
  uint32_t CFDRPGACC33;
  uint32_t CFDRPGACC34;
  uint32_t CFDRPGACC35;
  uint32_t CFDRPGACC36;
  uint32_t CFDRPGACC37;
  uint32_t CFDRPGACC38;
  uint32_t CFDRPGACC39;
  uint32_t CFDRPGACC40;
  uint32_t CFDRPGACC41;
  uint32_t CFDRPGACC42;
  uint32_t CFDRPGACC43;
  uint32_t CFDRPGACC44;
  uint32_t CFDRPGACC45;
  uint32_t CFDRPGACC46;
  uint32_t CFDRPGACC47;
  uint32_t CFDRPGACC48;
  uint32_t CFDRPGACC49;
  uint32_t CFDRPGACC50;
  uint32_t CFDRPGACC51;
  uint32_t CFDRPGACC52;
  uint32_t CFDRPGACC53;
  uint32_t CFDRPGACC54;
  uint32_t CFDRPGACC55;
  uint32_t CFDRPGACC56;
  uint32_t CFDRPGACC57;
  uint32_t CFDRPGACC58;
  uint32_t CFDRPGACC59;
  uint32_t CFDRPGACC60;
  uint32_t CFDRPGACC61;
  uint32_t CFDRPGACC62;
  uint32_t CFDRPGACC63;
  uint8_t res48[6912];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDMDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CANFDMDR;

};

#define RSCFD0 (*(volatile struct RSCFD0_tag *) 0xffd20000)

struct DCRA0_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POL:2;
      uint64_t reservedSpace0:2;
      uint64_t ISZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define DCRA0 (*(volatile struct DCRA0_tag *) 0xffd50000)

struct DCRA1_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POL:2;
      uint64_t reservedSpace0:2;
      uint64_t ISZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define DCRA1 (*(volatile struct DCRA1_tag *) 0xffd51000)

struct DCRA2_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POL:2;
      uint64_t reservedSpace0:2;
      uint64_t ISZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define DCRA2 (*(volatile struct DCRA2_tag *) 0xffd52000)

struct DCRA3_tag
{
  uint32_t CIN;
  uint32_t COUT;
  uint8_t res0[24];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POL:2;
      uint64_t reservedSpace0:2;
      uint64_t ISZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define DCRA3 (*(volatile struct DCRA3_tag *) 0xffd53000)

struct ECMM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t EST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ESET;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECLR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE000:1;
      uint64_t SSE001:1;
      uint64_t SSE002:1;
      uint64_t SSE003:1;
      uint64_t SSE004:1;
      uint64_t SSE005:1;
      uint64_t SSE006:1;
      uint64_t SSE007:1;
      uint64_t SSE008:1;
      uint64_t SSE009:1;
      uint64_t SSE010:1;
      uint64_t SSE011:1;
      uint64_t SSE012:1;
      uint64_t SSE013:1;
      uint64_t SSE014:1;
      uint64_t SSE015:1;
      uint64_t SSE016:1;
      uint64_t SSE017:1;
      uint64_t SSE018:1;
      uint64_t SSE019:1;
      uint64_t SSE020:1;
      uint64_t SSE021:1;
      uint64_t SSE022:1;
      uint64_t SSE023:1;
      uint64_t SSE024:1;
      uint64_t SSE025:1;
      uint64_t SSE026:1;
      uint64_t SSE027:1;
      uint64_t SSE028:1;
      uint64_t SSE029:1;
      uint64_t SSE030:1;
      uint64_t SSE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE100:1;
      uint64_t SSE101:1;
      uint64_t SSE102:1;
      uint64_t SSE103:1;
      uint64_t SSE104:1;
      uint64_t SSE105:1;
      uint64_t SSE106:1;
      uint64_t SSE107:1;
      uint64_t SSE108:1;
      uint64_t SSE109:1;
      uint64_t SSE110:1;
      uint64_t SSE111:1;
      uint64_t SSE112:1;
      uint64_t SSE113:1;
      uint64_t SSE114:1;
      uint64_t SSE115:1;
      uint64_t SSE116:1;
      uint64_t SSE117:1;
      uint64_t SSE118:1;
      uint64_t SSE119:1;
      uint64_t SSE120:1;
      uint64_t SSE121:1;
      uint64_t SSE122:1;
      uint64_t SSE123:1;
      uint64_t SSE124:1;
      uint64_t SSE125:1;
      uint64_t SSE126:1;
      uint64_t SSE127:1;
      uint64_t SSE128:1;
      uint64_t SSE129:1;
      uint64_t SSE130:1;
      uint64_t SSE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE200:1;
      uint64_t SSE201:1;
      uint64_t SSE202:1;
      uint64_t SSE203:1;
      uint64_t SSE204:1;
      uint64_t SSE205:1;
      uint64_t SSE206:1;
      uint64_t SSE207:1;
      uint64_t SSE208:1;
      uint64_t SSE209:1;
      uint64_t SSE210:1;
      uint64_t SSE211:1;
      uint64_t SSE212:1;
      uint64_t SSE213:1;
      uint64_t SSE214:1;
      uint64_t SSE215:1;
      uint64_t SSE216:1;
      uint64_t SSE217:1;
      uint64_t SSE218:1;
      uint64_t SSE219:1;
      uint64_t SSE220:1;
      uint64_t SSE221:1;
      uint64_t SSE222:1;
      uint64_t SSE223:1;
      uint64_t SSE224:1;
      uint64_t SSE225:1;
      uint64_t SSE226:1;
      uint64_t SSE227:1;
      uint64_t SSE228:1;
      uint64_t SSE229:1;
      uint64_t SSE230:1;
      uint64_t SSE231:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCMD0;

};

#define ECMM (*(volatile struct ECMM_tag *) 0xffd60000)

struct ECMC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t EST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ESET;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECLR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE000:1;
      uint64_t SSE001:1;
      uint64_t SSE002:1;
      uint64_t SSE003:1;
      uint64_t SSE004:1;
      uint64_t SSE005:1;
      uint64_t SSE006:1;
      uint64_t SSE007:1;
      uint64_t SSE008:1;
      uint64_t SSE009:1;
      uint64_t SSE010:1;
      uint64_t SSE011:1;
      uint64_t SSE012:1;
      uint64_t SSE013:1;
      uint64_t SSE014:1;
      uint64_t SSE015:1;
      uint64_t SSE016:1;
      uint64_t SSE017:1;
      uint64_t SSE018:1;
      uint64_t SSE019:1;
      uint64_t SSE020:1;
      uint64_t SSE021:1;
      uint64_t SSE022:1;
      uint64_t SSE023:1;
      uint64_t SSE024:1;
      uint64_t SSE025:1;
      uint64_t SSE026:1;
      uint64_t SSE027:1;
      uint64_t SSE028:1;
      uint64_t SSE029:1;
      uint64_t SSE030:1;
      uint64_t SSE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE100:1;
      uint64_t SSE101:1;
      uint64_t SSE102:1;
      uint64_t SSE103:1;
      uint64_t SSE104:1;
      uint64_t SSE105:1;
      uint64_t SSE106:1;
      uint64_t SSE107:1;
      uint64_t SSE108:1;
      uint64_t SSE109:1;
      uint64_t SSE110:1;
      uint64_t SSE111:1;
      uint64_t SSE112:1;
      uint64_t SSE113:1;
      uint64_t SSE114:1;
      uint64_t SSE115:1;
      uint64_t SSE116:1;
      uint64_t SSE117:1;
      uint64_t SSE118:1;
      uint64_t SSE119:1;
      uint64_t SSE120:1;
      uint64_t SSE121:1;
      uint64_t SSE122:1;
      uint64_t SSE123:1;
      uint64_t SSE124:1;
      uint64_t SSE125:1;
      uint64_t SSE126:1;
      uint64_t SSE127:1;
      uint64_t SSE128:1;
      uint64_t SSE129:1;
      uint64_t SSE130:1;
      uint64_t SSE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE200:1;
      uint64_t SSE201:1;
      uint64_t SSE202:1;
      uint64_t SSE203:1;
      uint64_t SSE204:1;
      uint64_t SSE205:1;
      uint64_t SSE206:1;
      uint64_t SSE207:1;
      uint64_t SSE208:1;
      uint64_t SSE209:1;
      uint64_t SSE210:1;
      uint64_t SSE211:1;
      uint64_t SSE212:1;
      uint64_t SSE213:1;
      uint64_t SSE214:1;
      uint64_t SSE215:1;
      uint64_t SSE216:1;
      uint64_t SSE217:1;
      uint64_t SSE218:1;
      uint64_t SSE219:1;
      uint64_t SSE220:1;
      uint64_t SSE221:1;
      uint64_t SSE222:1;
      uint64_t SSE223:1;
      uint64_t SSE224:1;
      uint64_t SSE225:1;
      uint64_t SSE226:1;
      uint64_t SSE227:1;
      uint64_t SSE228:1;
      uint64_t SSE229:1;
      uint64_t SSE230:1;
      uint64_t SSE231:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCMD0;

};

#define ECMC (*(volatile struct ECMC_tag *) 0xffd61000)

struct ECM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EPCFG;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIE000:1;
      uint64_t MIE001:1;
      uint64_t MIE002:1;
      uint64_t MIE003:1;
      uint64_t MIE004:1;
      uint64_t MIE005:1;
      uint64_t MIE006:1;
      uint64_t MIE007:1;
      uint64_t MIE008:1;
      uint64_t MIE009:1;
      uint64_t MIE010:1;
      uint64_t MIE011:1;
      uint64_t MIE012:1;
      uint64_t MIE013:1;
      uint64_t MIE014:1;
      uint64_t MIE015:1;
      uint64_t MIE016:1;
      uint64_t MIE017:1;
      uint64_t MIE018:1;
      uint64_t MIE019:1;
      uint64_t MIE020:1;
      uint64_t MIE021:1;
      uint64_t MIE022:1;
      uint64_t MIE023:1;
      uint64_t MIE024:1;
      uint64_t MIE025:1;
      uint64_t MIE026:1;
      uint64_t MIE027:1;
      uint64_t MIE028:1;
      uint64_t MIE029:1;
      uint64_t MIE030:1;
      uint64_t MIE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MICFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIE100:1;
      uint64_t MIE101:1;
      uint64_t MIE102:1;
      uint64_t MIE103:1;
      uint64_t MIE104:1;
      uint64_t MIE105:1;
      uint64_t MIE106:1;
      uint64_t MIE107:1;
      uint64_t MIE108:1;
      uint64_t MIE109:1;
      uint64_t MIE110:1;
      uint64_t MIE111:1;
      uint64_t MIE112:1;
      uint64_t MIE113:1;
      uint64_t MIE114:1;
      uint64_t MIE115:1;
      uint64_t MIE116:1;
      uint64_t MIE117:1;
      uint64_t MIE118:1;
      uint64_t MIE119:1;
      uint64_t MIE120:1;
      uint64_t MIE121:1;
      uint64_t MIE122:1;
      uint64_t MIE123:1;
      uint64_t MIE124:1;
      uint64_t MIE125:1;
      uint64_t MIE126:1;
      uint64_t MIE127:1;
      uint64_t MIE128:1;
      uint64_t MIE129:1;
      uint64_t MIE130:1;
      uint64_t MIE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MICFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIE200:1;
      uint64_t MIE201:1;
      uint64_t MIE202:1;
      uint64_t MIE203:1;
      uint64_t MIE204:1;
      uint64_t MIE205:1;
      uint64_t MIE206:1;
      uint64_t MIE207:1;
      uint64_t MIE208:1;
      uint64_t MIE209:1;
      uint64_t MIE210:1;
      uint64_t MIE211:1;
      uint64_t MIE212:1;
      uint64_t MIE213:1;
      uint64_t MIE214:1;
      uint64_t MIE215:1;
      uint64_t MIE216:1;
      uint64_t MIE217:1;
      uint64_t MIE218:1;
      uint64_t MIE219:1;
      uint64_t MIE220:1;
      uint64_t MIE221:1;
      uint64_t MIE222:1;
      uint64_t MIE223:1;
      uint64_t MIE224:1;
      uint64_t MIE225:1;
      uint64_t MIE226:1;
      uint64_t MIE227:1;
      uint64_t MIE228:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MICFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIE000:1;
      uint64_t NMIE001:1;
      uint64_t NMIE002:1;
      uint64_t NMIE003:1;
      uint64_t NMIE004:1;
      uint64_t NMIE005:1;
      uint64_t NMIE006:1;
      uint64_t NMIE007:1;
      uint64_t NMIE008:1;
      uint64_t NMIE009:1;
      uint64_t NMIE010:1;
      uint64_t NMIE011:1;
      uint64_t NMIE012:1;
      uint64_t NMIE013:1;
      uint64_t NMIE014:1;
      uint64_t NMIE015:1;
      uint64_t NMIE016:1;
      uint64_t NMIE017:1;
      uint64_t NMIE018:1;
      uint64_t NMIE019:1;
      uint64_t NMIE020:1;
      uint64_t NMIE021:1;
      uint64_t NMIE022:1;
      uint64_t NMIE023:1;
      uint64_t NMIE024:1;
      uint64_t NMIE025:1;
      uint64_t NMIE026:1;
      uint64_t NMIE027:1;
      uint64_t NMIE028:1;
      uint64_t NMIE029:1;
      uint64_t NMIE030:1;
      uint64_t NMIE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMICFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIE100:1;
      uint64_t NMIE101:1;
      uint64_t NMIE102:1;
      uint64_t NMIE103:1;
      uint64_t NMIE104:1;
      uint64_t NMIE105:1;
      uint64_t NMIE106:1;
      uint64_t NMIE107:1;
      uint64_t NMIE108:1;
      uint64_t NMIE109:1;
      uint64_t NMIE110:1;
      uint64_t NMIE111:1;
      uint64_t NMIE112:1;
      uint64_t NMIE113:1;
      uint64_t NMIE114:1;
      uint64_t NMIE115:1;
      uint64_t NMIE116:1;
      uint64_t NMIE117:1;
      uint64_t NMIE118:1;
      uint64_t NMIE119:1;
      uint64_t NMIE120:1;
      uint64_t NMIE121:1;
      uint64_t NMIE122:1;
      uint64_t NMIE123:1;
      uint64_t NMIE124:1;
      uint64_t NMIE125:1;
      uint64_t NMIE126:1;
      uint64_t NMIE127:1;
      uint64_t NMIE128:1;
      uint64_t NMIE129:1;
      uint64_t NMIE130:1;
      uint64_t NMIE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMICFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIE200:1;
      uint64_t NMIE201:1;
      uint64_t NMIE202:1;
      uint64_t NMIE203:1;
      uint64_t NMIE204:1;
      uint64_t NMIE205:1;
      uint64_t NMIE206:1;
      uint64_t NMIE207:1;
      uint64_t NMIE208:1;
      uint64_t NMIE209:1;
      uint64_t NMIE210:1;
      uint64_t NMIE211:1;
      uint64_t NMIE212:1;
      uint64_t NMIE213:1;
      uint64_t NMIE214:1;
      uint64_t NMIE215:1;
      uint64_t NMIE216:1;
      uint64_t NMIE217:1;
      uint64_t NMIE218:1;
      uint64_t NMIE219:1;
      uint64_t NMIE220:1;
      uint64_t NMIE221:1;
      uint64_t NMIE222:1;
      uint64_t NMIE223:1;
      uint64_t NMIE224:1;
      uint64_t NMIE225:1;
      uint64_t NMIE226:1;
      uint64_t NMIE227:1;
      uint64_t NMIE228:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMICFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE000:1;
      uint64_t IRE001:1;
      uint64_t IRE002:1;
      uint64_t IRE003:1;
      uint64_t IRE004:1;
      uint64_t IRE005:1;
      uint64_t IRE006:1;
      uint64_t IRE007:1;
      uint64_t IRE008:1;
      uint64_t IRE009:1;
      uint64_t IRE010:1;
      uint64_t IRE011:1;
      uint64_t IRE012:1;
      uint64_t IRE013:1;
      uint64_t IRE014:1;
      uint64_t IRE015:1;
      uint64_t IRE016:1;
      uint64_t IRE017:1;
      uint64_t IRE018:1;
      uint64_t IRE019:1;
      uint64_t IRE020:1;
      uint64_t IRE021:1;
      uint64_t IRE022:1;
      uint64_t IRE023:1;
      uint64_t IRE024:1;
      uint64_t IRE025:1;
      uint64_t IRE026:1;
      uint64_t IRE027:1;
      uint64_t IRE028:1;
      uint64_t IRE029:1;
      uint64_t IRE030:1;
      uint64_t IRE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE100:1;
      uint64_t IRE101:1;
      uint64_t IRE102:1;
      uint64_t IRE103:1;
      uint64_t IRE104:1;
      uint64_t IRE105:1;
      uint64_t IRE106:1;
      uint64_t IRE107:1;
      uint64_t IRE108:1;
      uint64_t IRE109:1;
      uint64_t IRE110:1;
      uint64_t IRE111:1;
      uint64_t IRE112:1;
      uint64_t IRE113:1;
      uint64_t IRE114:1;
      uint64_t IRE115:1;
      uint64_t IRE116:1;
      uint64_t IRE117:1;
      uint64_t IRE118:1;
      uint64_t IRE119:1;
      uint64_t IRE120:1;
      uint64_t IRE121:1;
      uint64_t IRE122:1;
      uint64_t IRE123:1;
      uint64_t IRE124:1;
      uint64_t IRE125:1;
      uint64_t IRE126:1;
      uint64_t IRE127:1;
      uint64_t IRE128:1;
      uint64_t IRE129:1;
      uint64_t IRE130:1;
      uint64_t IRE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE200:1;
      uint64_t IRE201:1;
      uint64_t IRE202:1;
      uint64_t IRE203:1;
      uint64_t IRE204:1;
      uint64_t IRE205:1;
      uint64_t IRE206:1;
      uint64_t IRE207:1;
      uint64_t IRE208:1;
      uint64_t IRE209:1;
      uint64_t IRE210:1;
      uint64_t IRE211:1;
      uint64_t IRE212:1;
      uint64_t IRE213:1;
      uint64_t IRE214:1;
      uint64_t IRE215:1;
      uint64_t IRE216:1;
      uint64_t IRE217:1;
      uint64_t IRE218:1;
      uint64_t IRE219:1;
      uint64_t IRE220:1;
      uint64_t IRE221:1;
      uint64_t IRE222:1;
      uint64_t IRE223:1;
      uint64_t IRE224:1;
      uint64_t IRE225:1;
      uint64_t IRE226:1;
      uint64_t IRE227:1;
      uint64_t IRE228:1;
      uint64_t IRE229:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMK000:1;
      uint64_t EMK001:1;
      uint64_t EMK002:1;
      uint64_t EMK003:1;
      uint64_t EMK004:1;
      uint64_t EMK005:1;
      uint64_t EMK006:1;
      uint64_t EMK007:1;
      uint64_t EMK008:1;
      uint64_t EMK009:1;
      uint64_t EMK010:1;
      uint64_t EMK011:1;
      uint64_t EMK012:1;
      uint64_t EMK013:1;
      uint64_t EMK014:1;
      uint64_t EMK015:1;
      uint64_t EMK016:1;
      uint64_t EMK017:1;
      uint64_t EMK018:1;
      uint64_t EMK019:1;
      uint64_t EMK020:1;
      uint64_t EMK021:1;
      uint64_t EMK022:1;
      uint64_t EMK023:1;
      uint64_t EMK024:1;
      uint64_t EMK025:1;
      uint64_t EMK026:1;
      uint64_t EMK027:1;
      uint64_t EMK028:1;
      uint64_t EMK029:1;
      uint64_t EMK030:1;
      uint64_t EMK031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMK100:1;
      uint64_t EMK101:1;
      uint64_t EMK102:1;
      uint64_t EMK103:1;
      uint64_t EMK104:1;
      uint64_t EMK105:1;
      uint64_t EMK106:1;
      uint64_t EMK107:1;
      uint64_t EMK108:1;
      uint64_t EMK109:1;
      uint64_t EMK110:1;
      uint64_t EMK111:1;
      uint64_t EMK112:1;
      uint64_t EMK113:1;
      uint64_t EMK114:1;
      uint64_t EMK115:1;
      uint64_t EMK116:1;
      uint64_t EMK117:1;
      uint64_t EMK118:1;
      uint64_t EMK119:1;
      uint64_t EMK120:1;
      uint64_t EMK121:1;
      uint64_t EMK122:1;
      uint64_t EMK123:1;
      uint64_t EMK124:1;
      uint64_t EMK125:1;
      uint64_t EMK126:1;
      uint64_t EMK127:1;
      uint64_t EMK128:1;
      uint64_t EMK129:1;
      uint64_t EMK130:1;
      uint64_t EMK131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMK200:1;
      uint64_t EMK201:1;
      uint64_t EMK202:1;
      uint64_t EMK203:1;
      uint64_t EMK204:1;
      uint64_t EMK205:1;
      uint64_t EMK206:1;
      uint64_t EMK207:1;
      uint64_t EMK208:1;
      uint64_t EMK209:1;
      uint64_t EMK210:1;
      uint64_t EMK211:1;
      uint64_t EMK212:1;
      uint64_t EMK213:1;
      uint64_t EMK214:1;
      uint64_t EMK215:1;
      uint64_t EMK216:1;
      uint64_t EMK217:1;
      uint64_t EMK218:1;
      uint64_t EMK219:1;
      uint64_t EMK220:1;
      uint64_t EMK221:1;
      uint64_t EMK222:1;
      uint64_t EMK223:1;
      uint64_t EMK224:1;
      uint64_t EMK225:1;
      uint64_t EMK226:1;
      uint64_t EMK227:1;
      uint64_t EMK228:1;
      uint64_t EMK229:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLSSE000:1;
      uint64_t CLSSE001:1;
      uint64_t CLSSE002:1;
      uint64_t CLSSE003:1;
      uint64_t CLSSE004:1;
      uint64_t CLSSE005:1;
      uint64_t CLSSE006:1;
      uint64_t CLSSE007:1;
      uint64_t CLSSE008:1;
      uint64_t CLSSE009:1;
      uint64_t CLSSE010:1;
      uint64_t CLSSE011:1;
      uint64_t CLSSE012:1;
      uint64_t CLSSE013:1;
      uint64_t CLSSE014:1;
      uint64_t CLSSE015:1;
      uint64_t CLSSE016:1;
      uint64_t CLSSE017:1;
      uint64_t CLSSE018:1;
      uint64_t CLSSE019:1;
      uint64_t CLSSE020:1;
      uint64_t CLSSE021:1;
      uint64_t CLSSE022:1;
      uint64_t CLSSE023:1;
      uint64_t CLSSE024:1;
      uint64_t CLSSE025:1;
      uint64_t CLSSE026:1;
      uint64_t CLSSE027:1;
      uint64_t CLSSE028:1;
      uint64_t CLSSE029:1;
      uint64_t CLSSE030:1;
      uint64_t CLSSE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLSSE100:1;
      uint64_t CLSSE101:1;
      uint64_t CLSSE102:1;
      uint64_t CLSSE103:1;
      uint64_t CLSSE104:1;
      uint64_t CLSSE105:1;
      uint64_t CLSSE106:1;
      uint64_t CLSSE107:1;
      uint64_t CLSSE108:1;
      uint64_t CLSSE109:1;
      uint64_t CLSSE110:1;
      uint64_t CLSSE111:1;
      uint64_t CLSSE112:1;
      uint64_t CLSSE113:1;
      uint64_t CLSSE114:1;
      uint64_t CLSSE115:1;
      uint64_t CLSSE116:1;
      uint64_t CLSSE117:1;
      uint64_t CLSSE118:1;
      uint64_t CLSSE119:1;
      uint64_t CLSSE120:1;
      uint64_t CLSSE121:1;
      uint64_t CLSSE122:1;
      uint64_t CLSSE123:1;
      uint64_t CLSSE124:1;
      uint64_t CLSSE125:1;
      uint64_t CLSSE126:1;
      uint64_t CLSSE127:1;
      uint64_t CLSSE128:1;
      uint64_t CLSSE129:1;
      uint64_t CLSSE130:1;
      uint64_t CLSSE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLSSE200:1;
      uint64_t CLSSE201:1;
      uint64_t CLSSE202:1;
      uint64_t CLSSE203:1;
      uint64_t CLSSE204:1;
      uint64_t CLSSE205:1;
      uint64_t CLSSE206:1;
      uint64_t CLSSE207:1;
      uint64_t CLSSE208:1;
      uint64_t CLSSE209:1;
      uint64_t CLSSE210:1;
      uint64_t CLSSE211:1;
      uint64_t CLSSE212:1;
      uint64_t CLSSE213:1;
      uint64_t CLSSE214:1;
      uint64_t CLSSE215:1;
      uint64_t CLSSE216:1;
      uint64_t CLSSE217:1;
      uint64_t CLSSE218:1;
      uint64_t CLSSE219:1;
      uint64_t CLSSE220:1;
      uint64_t CLSSE221:1;
      uint64_t CLSSE222:1;
      uint64_t CLSSE223:1;
      uint64_t CLSSE224:1;
      uint64_t CLSSE225:1;
      uint64_t CLSSE226:1;
      uint64_t CLSSE227:1;
      uint64_t CLSSE228:1;
      uint64_t CLSSE229:1;
      uint64_t CLSSE230:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESSTC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCMD1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PS;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE000:1;
      uint64_t PE001:1;
      uint64_t PE002:1;
      uint64_t PE003:1;
      uint64_t PE004:1;
      uint64_t PE005:1;
      uint64_t PE006:1;
      uint64_t PE007:1;
      uint64_t PE008:1;
      uint64_t PE009:1;
      uint64_t PE010:1;
      uint64_t PE011:1;
      uint64_t PE012:1;
      uint64_t PE013:1;
      uint64_t PE014:1;
      uint64_t PE015:1;
      uint64_t PE016:1;
      uint64_t PE017:1;
      uint64_t PE018:1;
      uint64_t PE019:1;
      uint64_t PE020:1;
      uint64_t PE021:1;
      uint64_t PE022:1;
      uint64_t PE023:1;
      uint64_t PE024:1;
      uint64_t PE025:1;
      uint64_t PE026:1;
      uint64_t PE027:1;
      uint64_t PE028:1;
      uint64_t PE029:1;
      uint64_t PE030:1;
      uint64_t PE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE100:1;
      uint64_t PE101:1;
      uint64_t PE102:1;
      uint64_t PE103:1;
      uint64_t PE104:1;
      uint64_t PE105:1;
      uint64_t PE106:1;
      uint64_t PE107:1;
      uint64_t PE108:1;
      uint64_t PE109:1;
      uint64_t PE110:1;
      uint64_t PE111:1;
      uint64_t PE112:1;
      uint64_t PE113:1;
      uint64_t PE114:1;
      uint64_t PE115:1;
      uint64_t PE116:1;
      uint64_t PE117:1;
      uint64_t PE118:1;
      uint64_t PE119:1;
      uint64_t PE120:1;
      uint64_t PE121:1;
      uint64_t PE122:1;
      uint64_t PE123:1;
      uint64_t PE124:1;
      uint64_t PE125:1;
      uint64_t PE126:1;
      uint64_t PE127:1;
      uint64_t PE128:1;
      uint64_t PE129:1;
      uint64_t PE130:1;
      uint64_t PE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE200:1;
      uint64_t PE201:1;
      uint64_t PE202:1;
      uint64_t PE203:1;
      uint64_t PE204:1;
      uint64_t PE205:1;
      uint64_t PE206:1;
      uint64_t PE207:1;
      uint64_t PE208:1;
      uint64_t PE209:1;
      uint64_t PE210:1;
      uint64_t PE211:1;
      uint64_t PE212:1;
      uint64_t PE213:1;
      uint64_t PE214:1;
      uint64_t PE215:1;
      uint64_t PE216:1;
      uint64_t PE217:1;
      uint64_t PE218:1;
      uint64_t PE219:1;
      uint64_t PE220:1;
      uint64_t PE221:1;
      uint64_t PE222:1;
      uint64_t PE223:1;
      uint64_t PE224:1;
      uint64_t PE225:1;
      uint64_t PE226:1;
      uint64_t reservedSpace0:1;
      uint64_t PE228:1;
      uint64_t PE229:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STA:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:2;
      uint64_t DTMSTACNTCLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTMCTL;

  uint8_t res2[3];

  uint16_t DTMR;
  uint8_t res3[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTMCMP:16;
      uint64_t CMPW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTMCMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TE000:1;
      uint64_t TE001:1;
      uint64_t TE002:1;
      uint64_t TE003:1;
      uint64_t TE004:1;
      uint64_t TE005:1;
      uint64_t TE006:1;
      uint64_t TE007:1;
      uint64_t TE008:1;
      uint64_t TE009:1;
      uint64_t TE010:1;
      uint64_t TE011:1;
      uint64_t TE012:1;
      uint64_t TE013:1;
      uint64_t TE014:1;
      uint64_t TE015:1;
      uint64_t TE016:1;
      uint64_t TE017:1;
      uint64_t TE018:1;
      uint64_t TE019:1;
      uint64_t TE020:1;
      uint64_t TE021:1;
      uint64_t TE022:1;
      uint64_t TE023:1;
      uint64_t TE024:1;
      uint64_t TE025:1;
      uint64_t TE026:1;
      uint64_t TE027:1;
      uint64_t TE028:1;
      uint64_t TE029:1;
      uint64_t TE030:1;
      uint64_t TE031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTMCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TE100:1;
      uint64_t TE101:1;
      uint64_t TE102:1;
      uint64_t TE103:1;
      uint64_t TE104:1;
      uint64_t TE105:1;
      uint64_t TE106:1;
      uint64_t TE107:1;
      uint64_t TE108:1;
      uint64_t TE109:1;
      uint64_t TE110:1;
      uint64_t TE111:1;
      uint64_t TE112:1;
      uint64_t TE113:1;
      uint64_t TE114:1;
      uint64_t TE115:1;
      uint64_t TE116:1;
      uint64_t TE117:1;
      uint64_t TE118:1;
      uint64_t TE119:1;
      uint64_t TE120:1;
      uint64_t TE121:1;
      uint64_t TE122:1;
      uint64_t TE123:1;
      uint64_t TE124:1;
      uint64_t TE125:1;
      uint64_t TE126:1;
      uint64_t TE127:1;
      uint64_t TE128:1;
      uint64_t TE129:1;
      uint64_t TE130:1;
      uint64_t TE131:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTMCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TE200:1;
      uint64_t TE201:1;
      uint64_t TE202:1;
      uint64_t TE203:1;
      uint64_t TE204:1;
      uint64_t TE205:1;
      uint64_t TE206:1;
      uint64_t TE207:1;
      uint64_t TE208:1;
      uint64_t TE209:1;
      uint64_t TE210:1;
      uint64_t TE211:1;
      uint64_t TE212:1;
      uint64_t TE213:1;
      uint64_t TE214:1;
      uint64_t TE215:1;
      uint64_t TE216:1;
      uint64_t TE217:1;
      uint64_t TE218:1;
      uint64_t TE219:1;
      uint64_t TE220:1;
      uint64_t TE221:1;
      uint64_t TE222:1;
      uint64_t TE223:1;
      uint64_t TE224:1;
      uint64_t TE225:1;
      uint64_t TE226:1;
      uint64_t TE227:1;
      uint64_t TE228:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTMCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TE300:1;
      uint64_t TE301:1;
      uint64_t TE302:1;
      uint64_t TE303:1;
      uint64_t TE304:1;
      uint64_t TE305:1;
      uint64_t TE306:1;
      uint64_t TE307:1;
      uint64_t TE308:1;
      uint64_t TE309:1;
      uint64_t TE310:1;
      uint64_t TE311:1;
      uint64_t TE312:1;
      uint64_t TE313:1;
      uint64_t TE314:1;
      uint64_t TE315:1;
      uint64_t TE316:1;
      uint64_t TE317:1;
      uint64_t TE318:1;
      uint64_t TE319:1;
      uint64_t TE320:1;
      uint64_t TE321:1;
      uint64_t TE322:1;
      uint64_t TE323:1;
      uint64_t TE324:1;
      uint64_t TE325:1;
      uint64_t TE326:1;
      uint64_t TE327:1;
      uint64_t TE328:1;
      uint64_t TE329:1;
      uint64_t TE330:1;
      uint64_t TE331:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTMCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TE400:1;
      uint64_t TE401:1;
      uint64_t TE402:1;
      uint64_t TE403:1;
      uint64_t TE404:1;
      uint64_t TE405:1;
      uint64_t TE406:1;
      uint64_t TE407:1;
      uint64_t TE408:1;
      uint64_t TE409:1;
      uint64_t TE410:1;
      uint64_t TE411:1;
      uint64_t TE412:1;
      uint64_t TE413:1;
      uint64_t TE414:1;
      uint64_t TE415:1;
      uint64_t TE416:1;
      uint64_t TE417:1;
      uint64_t TE418:1;
      uint64_t TE419:1;
      uint64_t TE420:1;
      uint64_t TE421:1;
      uint64_t TE422:1;
      uint64_t TE423:1;
      uint64_t TE424:1;
      uint64_t TE425:1;
      uint64_t TE426:1;
      uint64_t TE427:1;
      uint64_t TE428:1;
      uint64_t TE429:1;
      uint64_t TE430:1;
      uint64_t TE431:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTMCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TE500:1;
      uint64_t TE501:1;
      uint64_t TE502:1;
      uint64_t TE503:1;
      uint64_t TE504:1;
      uint64_t TE505:1;
      uint64_t TE506:1;
      uint64_t TE507:1;
      uint64_t TE508:1;
      uint64_t TE509:1;
      uint64_t TE510:1;
      uint64_t TE511:1;
      uint64_t TE512:1;
      uint64_t TE513:1;
      uint64_t TE514:1;
      uint64_t TE515:1;
      uint64_t TE516:1;
      uint64_t TE517:1;
      uint64_t TE518:1;
      uint64_t TE519:1;
      uint64_t TE520:1;
      uint64_t TE521:1;
      uint64_t TE522:1;
      uint64_t TE523:1;
      uint64_t TE524:1;
      uint64_t TE525:1;
      uint64_t TE526:1;
      uint64_t TE527:1;
      uint64_t TE528:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTMCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTCLRT:16;
      uint64_t CMPW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOCCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKC:1;
      uint64_t MSKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEM;

  uint8_t res4[3968];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TMSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EPCTL;

};

#define ECM (*(volatile struct ECM_tag *) 0xffd62000)

struct OSTM3_tag
{
  uint32_t CMP;
  uint32_t CNT;
  uint8_t res0[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD0:1;
      uint64_t MD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define OSTM3 (*(volatile struct OSTM3_tag *) 0xffd70000)

struct OSTM4_tag
{
  uint32_t CMP;
  uint32_t CNT;
  uint8_t res0[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD0:1;
      uint64_t MD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define OSTM4 (*(volatile struct OSTM4_tag *) 0xffd70040)

struct OSTM5_tag
{
  uint32_t CMP;
  uint32_t CNT;
  uint8_t res0[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD0:1;
      uint64_t MD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define OSTM5 (*(volatile struct OSTM5_tag *) 0xffd70080)

struct OSTM6_tag
{
  uint32_t CMP;
  uint32_t CNT;
  uint8_t res0[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD0:1;
      uint64_t MD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define OSTM6 (*(volatile struct OSTM6_tag *) 0xffd700c0)

struct OSTM7_tag
{
  uint32_t CMP;
  uint32_t CNT;
  uint8_t res0[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD0:1;
      uint64_t MD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define OSTM7 (*(volatile struct OSTM7_tag *) 0xffd70100)

struct WDTA0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDTE;

  uint8_t res0[3];

  uint8_t EVAC;
  uint8_t res1[3];

  uint8_t REF;
  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WS:2;
      uint64_t reservedSpace0:1;
      uint64_t WIE:1;
      uint64_t OVF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MD;

};

#define WDTA0 (*(volatile struct WDTA0_tag *) 0xffd74000)

struct CSIH0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVE:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:1;
      uint64_t DCE:1;
      uint64_t EMF:1;
      uint64_t FLF:1;
      uint64_t reservedSpace1:1;
      uint64_t TSF:1;
      uint64_t HPST:1;
      uint64_t reservedSpace2:5;
      uint64_t OFE:1;
      uint64_t TMOE:1;
      uint64_t SPF:8;
      uint64_t SRP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OVEC:1;
      uint64_t PEC:1;
      uint64_t reservedSpace0:1;
      uint64_t DCEC:1;
      uint64_t reservedSpace1:4;
      uint64_t PCT:1;
      uint64_t reservedSpace2:5;
      uint64_t OFEC:1;
      uint64_t TMOEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STCR0;

  uint8_t res1[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE:1;
      uint64_t HSE:1;
      uint64_t SIT:1;
      uint64_t LBM:1;
      uint64_t CSRI:1;
      uint64_t DCS:1;
      uint64_t JE:1;
      uint64_t EDLE:1;
      uint64_t CSL0:1;
      uint64_t CSL1:1;
      uint64_t CSL2:1;
      uint64_t CSL3:1;
      uint64_t CSL4:1;
      uint64_t CSL5:1;
      uint64_t CSL6:1;
      uint64_t CSL7:1;
      uint64_t SLIT:1;
      uint64_t CKR:1;
      uint64_t PHE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t PRS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL2;

  uint8_t res2[4074];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFS:7;
      uint64_t reservedSpace0:9;
      uint64_t FES:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOP:7;
      uint64_t reservedSpace0:9;
      uint64_t ND:8;
      uint64_t reservedSpace1:7;
      uint64_t BTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t reservedSpace0:5;
      uint64_t EDL:1;
      uint64_t EOJ:1;
      uint64_t CIRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TX0H;

  uint8_t res3[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t TDCE:1;
      uint64_t RPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RX0H;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRWA:7;
      uint64_t reservedSpace0:9;
      uint64_t RRA:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRWP0;

  uint8_t res5[36];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TO:5;
      uint64_t reservedSpace0:3;
      uint64_t MMS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCTL0;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP0:4;
      uint64_t IN0:4;
      uint64_t HD0:4;
      uint64_t ID0:3;
      uint64_t IDL0:1;
      uint64_t DAP0:1;
      uint64_t CKP0:1;
      uint64_t DIR0:1;
      uint64_t RCB0:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS0:4;
      uint64_t PS0:2;
      uint64_t BRSS0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP1:4;
      uint64_t IN1:4;
      uint64_t HD1:4;
      uint64_t ID1:3;
      uint64_t IDL1:1;
      uint64_t DAP1:1;
      uint64_t CKP1:1;
      uint64_t DIR1:1;
      uint64_t RCB1:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS1:4;
      uint64_t PS1:2;
      uint64_t BRSS1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP2:4;
      uint64_t IN2:4;
      uint64_t HD2:4;
      uint64_t ID2:3;
      uint64_t IDL2:1;
      uint64_t DAP2:1;
      uint64_t CKP2:1;
      uint64_t DIR2:1;
      uint64_t RCB2:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS2:4;
      uint64_t PS2:2;
      uint64_t BRSS2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP3:4;
      uint64_t IN3:4;
      uint64_t HD3:4;
      uint64_t ID3:3;
      uint64_t IDL3:1;
      uint64_t DAP3:1;
      uint64_t CKP3:1;
      uint64_t DIR3:1;
      uint64_t RCB3:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS3:4;
      uint64_t PS3:2;
      uint64_t BRSS3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP4:4;
      uint64_t IN4:4;
      uint64_t HD4:4;
      uint64_t ID4:3;
      uint64_t IDL4:1;
      uint64_t DAP4:1;
      uint64_t CKP4:1;
      uint64_t DIR4:1;
      uint64_t RCB4:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS4:4;
      uint64_t PS4:2;
      uint64_t BRSS4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP5:4;
      uint64_t IN5:4;
      uint64_t HD5:4;
      uint64_t ID5:3;
      uint64_t IDL5:1;
      uint64_t DAP5:1;
      uint64_t CKP5:1;
      uint64_t DIR5:1;
      uint64_t RCB5:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS5:4;
      uint64_t PS5:2;
      uint64_t BRSS5:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP6:4;
      uint64_t IN6:4;
      uint64_t HD6:4;
      uint64_t ID6:3;
      uint64_t IDL6:1;
      uint64_t DAP6:1;
      uint64_t CKP6:1;
      uint64_t DIR6:1;
      uint64_t RCB6:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS6:4;
      uint64_t PS6:2;
      uint64_t BRSS6:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP7:4;
      uint64_t IN7:4;
      uint64_t HD7:4;
      uint64_t ID7:3;
      uint64_t IDL7:1;
      uint64_t DAP7:1;
      uint64_t CKP7:1;
      uint64_t DIR7:1;
      uint64_t RCB7:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS7:4;
      uint64_t PS7:2;
      uint64_t BRSS7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG7;

  uint8_t res7[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS0;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS1;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS2;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS3;

};

#define CSIH0 (*(volatile struct CSIH0_tag *) 0xffd80000)

struct CSIH1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVE:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:1;
      uint64_t DCE:1;
      uint64_t EMF:1;
      uint64_t FLF:1;
      uint64_t reservedSpace1:1;
      uint64_t TSF:1;
      uint64_t HPST:1;
      uint64_t reservedSpace2:5;
      uint64_t OFE:1;
      uint64_t TMOE:1;
      uint64_t SPF:8;
      uint64_t SRP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OVEC:1;
      uint64_t PEC:1;
      uint64_t reservedSpace0:1;
      uint64_t DCEC:1;
      uint64_t reservedSpace1:4;
      uint64_t PCT:1;
      uint64_t reservedSpace2:5;
      uint64_t OFEC:1;
      uint64_t TMOEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STCR0;

  uint8_t res1[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE:1;
      uint64_t HSE:1;
      uint64_t SIT:1;
      uint64_t LBM:1;
      uint64_t CSRI:1;
      uint64_t DCS:1;
      uint64_t JE:1;
      uint64_t EDLE:1;
      uint64_t CSL0:1;
      uint64_t CSL1:1;
      uint64_t CSL2:1;
      uint64_t CSL3:1;
      uint64_t CSL4:1;
      uint64_t CSL5:1;
      uint64_t CSL6:1;
      uint64_t CSL7:1;
      uint64_t SLIT:1;
      uint64_t CKR:1;
      uint64_t PHE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t PRS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL2;

  uint8_t res2[4074];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFS:7;
      uint64_t reservedSpace0:9;
      uint64_t FES:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOP:7;
      uint64_t reservedSpace0:9;
      uint64_t ND:8;
      uint64_t reservedSpace1:7;
      uint64_t BTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t reservedSpace0:5;
      uint64_t EDL:1;
      uint64_t EOJ:1;
      uint64_t CIRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TX0H;

  uint8_t res3[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t TDCE:1;
      uint64_t RPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RX0H;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRWA:7;
      uint64_t reservedSpace0:9;
      uint64_t RRA:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRWP0;

  uint8_t res5[36];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TO:5;
      uint64_t reservedSpace0:3;
      uint64_t MMS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCTL0;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP0:4;
      uint64_t IN0:4;
      uint64_t HD0:4;
      uint64_t ID0:3;
      uint64_t IDL0:1;
      uint64_t DAP0:1;
      uint64_t CKP0:1;
      uint64_t DIR0:1;
      uint64_t RCB0:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS0:4;
      uint64_t PS0:2;
      uint64_t BRSS0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP1:4;
      uint64_t IN1:4;
      uint64_t HD1:4;
      uint64_t ID1:3;
      uint64_t IDL1:1;
      uint64_t DAP1:1;
      uint64_t CKP1:1;
      uint64_t DIR1:1;
      uint64_t RCB1:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS1:4;
      uint64_t PS1:2;
      uint64_t BRSS1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP2:4;
      uint64_t IN2:4;
      uint64_t HD2:4;
      uint64_t ID2:3;
      uint64_t IDL2:1;
      uint64_t DAP2:1;
      uint64_t CKP2:1;
      uint64_t DIR2:1;
      uint64_t RCB2:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS2:4;
      uint64_t PS2:2;
      uint64_t BRSS2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP3:4;
      uint64_t IN3:4;
      uint64_t HD3:4;
      uint64_t ID3:3;
      uint64_t IDL3:1;
      uint64_t DAP3:1;
      uint64_t CKP3:1;
      uint64_t DIR3:1;
      uint64_t RCB3:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS3:4;
      uint64_t PS3:2;
      uint64_t BRSS3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP4:4;
      uint64_t IN4:4;
      uint64_t HD4:4;
      uint64_t ID4:3;
      uint64_t IDL4:1;
      uint64_t DAP4:1;
      uint64_t CKP4:1;
      uint64_t DIR4:1;
      uint64_t RCB4:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS4:4;
      uint64_t PS4:2;
      uint64_t BRSS4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP5:4;
      uint64_t IN5:4;
      uint64_t HD5:4;
      uint64_t ID5:3;
      uint64_t IDL5:1;
      uint64_t DAP5:1;
      uint64_t CKP5:1;
      uint64_t DIR5:1;
      uint64_t RCB5:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS5:4;
      uint64_t PS5:2;
      uint64_t BRSS5:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP6:4;
      uint64_t IN6:4;
      uint64_t HD6:4;
      uint64_t ID6:3;
      uint64_t IDL6:1;
      uint64_t DAP6:1;
      uint64_t CKP6:1;
      uint64_t DIR6:1;
      uint64_t RCB6:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS6:4;
      uint64_t PS6:2;
      uint64_t BRSS6:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP7:4;
      uint64_t IN7:4;
      uint64_t HD7:4;
      uint64_t ID7:3;
      uint64_t IDL7:1;
      uint64_t DAP7:1;
      uint64_t CKP7:1;
      uint64_t DIR7:1;
      uint64_t RCB7:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS7:4;
      uint64_t PS7:2;
      uint64_t BRSS7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG7;

  uint8_t res7[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS0;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS1;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS2;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS3;

};

#define CSIH1 (*(volatile struct CSIH1_tag *) 0xffd82000)

struct CSIH2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVE:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:1;
      uint64_t DCE:1;
      uint64_t EMF:1;
      uint64_t FLF:1;
      uint64_t reservedSpace1:1;
      uint64_t TSF:1;
      uint64_t HPST:1;
      uint64_t reservedSpace2:5;
      uint64_t OFE:1;
      uint64_t TMOE:1;
      uint64_t SPF:8;
      uint64_t SRP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OVEC:1;
      uint64_t PEC:1;
      uint64_t reservedSpace0:1;
      uint64_t DCEC:1;
      uint64_t reservedSpace1:4;
      uint64_t PCT:1;
      uint64_t reservedSpace2:5;
      uint64_t OFEC:1;
      uint64_t TMOEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STCR0;

  uint8_t res1[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE:1;
      uint64_t HSE:1;
      uint64_t SIT:1;
      uint64_t LBM:1;
      uint64_t CSRI:1;
      uint64_t DCS:1;
      uint64_t JE:1;
      uint64_t EDLE:1;
      uint64_t CSL0:1;
      uint64_t CSL1:1;
      uint64_t CSL2:1;
      uint64_t CSL3:1;
      uint64_t CSL4:1;
      uint64_t CSL5:1;
      uint64_t CSL6:1;
      uint64_t CSL7:1;
      uint64_t SLIT:1;
      uint64_t CKR:1;
      uint64_t PHE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t PRS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL2;

  uint8_t res2[4074];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFS:7;
      uint64_t reservedSpace0:9;
      uint64_t FES:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOP:7;
      uint64_t reservedSpace0:9;
      uint64_t ND:8;
      uint64_t reservedSpace1:7;
      uint64_t BTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t reservedSpace0:5;
      uint64_t EDL:1;
      uint64_t EOJ:1;
      uint64_t CIRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TX0H;

  uint8_t res3[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t TDCE:1;
      uint64_t RPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RX0H;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRWA:7;
      uint64_t reservedSpace0:9;
      uint64_t RRA:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRWP0;

  uint8_t res5[36];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TO:5;
      uint64_t reservedSpace0:3;
      uint64_t MMS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCTL0;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP0:4;
      uint64_t IN0:4;
      uint64_t HD0:4;
      uint64_t ID0:3;
      uint64_t IDL0:1;
      uint64_t DAP0:1;
      uint64_t CKP0:1;
      uint64_t DIR0:1;
      uint64_t RCB0:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS0:4;
      uint64_t PS0:2;
      uint64_t BRSS0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP1:4;
      uint64_t IN1:4;
      uint64_t HD1:4;
      uint64_t ID1:3;
      uint64_t IDL1:1;
      uint64_t DAP1:1;
      uint64_t CKP1:1;
      uint64_t DIR1:1;
      uint64_t RCB1:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS1:4;
      uint64_t PS1:2;
      uint64_t BRSS1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP2:4;
      uint64_t IN2:4;
      uint64_t HD2:4;
      uint64_t ID2:3;
      uint64_t IDL2:1;
      uint64_t DAP2:1;
      uint64_t CKP2:1;
      uint64_t DIR2:1;
      uint64_t RCB2:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS2:4;
      uint64_t PS2:2;
      uint64_t BRSS2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP3:4;
      uint64_t IN3:4;
      uint64_t HD3:4;
      uint64_t ID3:3;
      uint64_t IDL3:1;
      uint64_t DAP3:1;
      uint64_t CKP3:1;
      uint64_t DIR3:1;
      uint64_t RCB3:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS3:4;
      uint64_t PS3:2;
      uint64_t BRSS3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP4:4;
      uint64_t IN4:4;
      uint64_t HD4:4;
      uint64_t ID4:3;
      uint64_t IDL4:1;
      uint64_t DAP4:1;
      uint64_t CKP4:1;
      uint64_t DIR4:1;
      uint64_t RCB4:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS4:4;
      uint64_t PS4:2;
      uint64_t BRSS4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP5:4;
      uint64_t IN5:4;
      uint64_t HD5:4;
      uint64_t ID5:3;
      uint64_t IDL5:1;
      uint64_t DAP5:1;
      uint64_t CKP5:1;
      uint64_t DIR5:1;
      uint64_t RCB5:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS5:4;
      uint64_t PS5:2;
      uint64_t BRSS5:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP6:4;
      uint64_t IN6:4;
      uint64_t HD6:4;
      uint64_t ID6:3;
      uint64_t IDL6:1;
      uint64_t DAP6:1;
      uint64_t CKP6:1;
      uint64_t DIR6:1;
      uint64_t RCB6:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS6:4;
      uint64_t PS6:2;
      uint64_t BRSS6:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP7:4;
      uint64_t IN7:4;
      uint64_t HD7:4;
      uint64_t ID7:3;
      uint64_t IDL7:1;
      uint64_t DAP7:1;
      uint64_t CKP7:1;
      uint64_t DIR7:1;
      uint64_t RCB7:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS7:4;
      uint64_t PS7:2;
      uint64_t BRSS7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG7;

  uint8_t res7[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS0;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS1;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS2;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS3;

};

#define CSIH2 (*(volatile struct CSIH2_tag *) 0xffd84000)

struct CSIH3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t JOBE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVE:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:1;
      uint64_t DCE:1;
      uint64_t EMF:1;
      uint64_t FLF:1;
      uint64_t reservedSpace1:1;
      uint64_t TSF:1;
      uint64_t HPST:1;
      uint64_t reservedSpace2:5;
      uint64_t OFE:1;
      uint64_t TMOE:1;
      uint64_t SPF:8;
      uint64_t SRP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OVEC:1;
      uint64_t PEC:1;
      uint64_t reservedSpace0:1;
      uint64_t DCEC:1;
      uint64_t reservedSpace1:4;
      uint64_t PCT:1;
      uint64_t reservedSpace2:5;
      uint64_t OFEC:1;
      uint64_t TMOEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STCR0;

  uint8_t res1[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSE:1;
      uint64_t HSE:1;
      uint64_t SIT:1;
      uint64_t LBM:1;
      uint64_t CSRI:1;
      uint64_t DCS:1;
      uint64_t JE:1;
      uint64_t EDLE:1;
      uint64_t CSL0:1;
      uint64_t CSL1:1;
      uint64_t CSL2:1;
      uint64_t CSL3:1;
      uint64_t CSL4:1;
      uint64_t CSL5:1;
      uint64_t CSL6:1;
      uint64_t CSL7:1;
      uint64_t SLIT:1;
      uint64_t CKR:1;
      uint64_t PHE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t PRS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL2;

  uint8_t res2[4074];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFS:7;
      uint64_t reservedSpace0:9;
      uint64_t FES:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOP:7;
      uint64_t reservedSpace0:9;
      uint64_t ND:8;
      uint64_t reservedSpace1:7;
      uint64_t BTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t reservedSpace0:5;
      uint64_t EDL:1;
      uint64_t EOJ:1;
      uint64_t CIRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TX0H;

  uint8_t res3[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX:16;
      uint64_t CS0:1;
      uint64_t CS1:1;
      uint64_t CS2:1;
      uint64_t CS3:1;
      uint64_t CS4:1;
      uint64_t CS5:1;
      uint64_t CS6:1;
      uint64_t CS7:1;
      uint64_t TDCE:1;
      uint64_t RPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RX0H;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRWA:7;
      uint64_t reservedSpace0:9;
      uint64_t RRA:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRWP0;

  uint8_t res5[36];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TO:5;
      uint64_t reservedSpace0:3;
      uint64_t MMS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCTL0;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP0:4;
      uint64_t IN0:4;
      uint64_t HD0:4;
      uint64_t ID0:3;
      uint64_t IDL0:1;
      uint64_t DAP0:1;
      uint64_t CKP0:1;
      uint64_t DIR0:1;
      uint64_t RCB0:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS0:4;
      uint64_t PS0:2;
      uint64_t BRSS0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP1:4;
      uint64_t IN1:4;
      uint64_t HD1:4;
      uint64_t ID1:3;
      uint64_t IDL1:1;
      uint64_t DAP1:1;
      uint64_t CKP1:1;
      uint64_t DIR1:1;
      uint64_t RCB1:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS1:4;
      uint64_t PS1:2;
      uint64_t BRSS1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP2:4;
      uint64_t IN2:4;
      uint64_t HD2:4;
      uint64_t ID2:3;
      uint64_t IDL2:1;
      uint64_t DAP2:1;
      uint64_t CKP2:1;
      uint64_t DIR2:1;
      uint64_t RCB2:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS2:4;
      uint64_t PS2:2;
      uint64_t BRSS2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP3:4;
      uint64_t IN3:4;
      uint64_t HD3:4;
      uint64_t ID3:3;
      uint64_t IDL3:1;
      uint64_t DAP3:1;
      uint64_t CKP3:1;
      uint64_t DIR3:1;
      uint64_t RCB3:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS3:4;
      uint64_t PS3:2;
      uint64_t BRSS3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP4:4;
      uint64_t IN4:4;
      uint64_t HD4:4;
      uint64_t ID4:3;
      uint64_t IDL4:1;
      uint64_t DAP4:1;
      uint64_t CKP4:1;
      uint64_t DIR4:1;
      uint64_t RCB4:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS4:4;
      uint64_t PS4:2;
      uint64_t BRSS4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP5:4;
      uint64_t IN5:4;
      uint64_t HD5:4;
      uint64_t ID5:3;
      uint64_t IDL5:1;
      uint64_t DAP5:1;
      uint64_t CKP5:1;
      uint64_t DIR5:1;
      uint64_t RCB5:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS5:4;
      uint64_t PS5:2;
      uint64_t BRSS5:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP6:4;
      uint64_t IN6:4;
      uint64_t HD6:4;
      uint64_t ID6:3;
      uint64_t IDL6:1;
      uint64_t DAP6:1;
      uint64_t CKP6:1;
      uint64_t DIR6:1;
      uint64_t RCB6:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS6:4;
      uint64_t PS6:2;
      uint64_t BRSS6:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SP7:4;
      uint64_t IN7:4;
      uint64_t HD7:4;
      uint64_t ID7:3;
      uint64_t IDL7:1;
      uint64_t DAP7:1;
      uint64_t CKP7:1;
      uint64_t DIR7:1;
      uint64_t RCB7:1;
      uint64_t reservedSpace0:4;
      uint64_t DLS7:4;
      uint64_t PS7:2;
      uint64_t BRSS7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG7;

  uint8_t res7[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS0;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS1;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS2;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRS3;

};

#define CSIH3 (*(volatile struct CSIH3_tag *) 0xffd86000)

struct CSIG0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MBS:1;
      uint64_t reservedSpace0:4;
      uint64_t RXE:1;
      uint64_t TXE:1;
      uint64_t PWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVE:1;
      uint64_t PE:1;
      uint64_t reservedSpace0:1;
      uint64_t DCE:1;
      uint64_t reservedSpace1:3;
      uint64_t TSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OVEC:1;
      uint64_t PEC:1;
      uint64_t reservedSpace0:1;
      uint64_t DCEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STCR0;

  uint8_t res1[6];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t HSE:1;
      uint64_t SIT:1;
      uint64_t LBM:1;
      uint64_t reservedSpace1:1;
      uint64_t DCS:1;
      uint64_t reservedSpace2:1;
      uint64_t EDLE:1;
      uint64_t reservedSpace3:8;
      uint64_t SLIT:1;
      uint64_t CKR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRS:12;
      uint64_t reservedSpace0:1;
      uint64_t PRS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL2;

  uint8_t res2[4074];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BCTL0;

  uint8_t res3[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:16;
      uint64_t reservedSpace0:13;
      uint64_t EDL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX0W;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TX0H;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RX0;

  uint8_t res5[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DAP:1;
      uint64_t reservedSpace1:1;
      uint64_t DIR:1;
      uint64_t reservedSpace2:5;
      uint64_t DLS:4;
      uint64_t PS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

};

#define CSIG0 (*(volatile struct CSIG0_tag *) 0xffd8a000)

struct CSIH_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SELCSI0DC:1;
      uint64_t SELCSI0DR:1;
      uint64_t SELCSI1DC:1;
      uint64_t SELCSI1DR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SELCSIHDMA;

};

#define CSIH (*(volatile struct CSIH_tag *) 0xffd8e000)

struct PIC1A_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SYNCTRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SST;

  uint8_t res0[11];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSER000:1;
      uint64_t SSER001:1;
      uint64_t SSER002:1;
      uint64_t SSER003:1;
      uint64_t SSER004:1;
      uint64_t SSER005:1;
      uint64_t SSER006:1;
      uint64_t SSER007:1;
      uint64_t SSER008:1;
      uint64_t SSER009:1;
      uint64_t SSER010:1;
      uint64_t SSER011:1;
      uint64_t SSER012:1;
      uint64_t SSER013:1;
      uint64_t SSER014:1;
      uint64_t SSER015:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SSER0;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSER100:1;
      uint64_t SSER101:1;
      uint64_t SSER102:1;
      uint64_t SSER103:1;
      uint64_t SSER104:1;
      uint64_t SSER105:1;
      uint64_t SSER106:1;
      uint64_t SSER107:1;
      uint64_t SSER108:1;
      uint64_t SSER109:1;
      uint64_t SSER110:1;
      uint64_t SSER111:1;
      uint64_t SSER112:1;
      uint64_t SSER113:1;
      uint64_t SSER114:1;
      uint64_t SSER115:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SSER1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSER200:1;
      uint64_t SSER201:1;
      uint64_t SSER202:1;
      uint64_t SSER203:1;
      uint64_t SSER204:1;
      uint64_t SSER205:1;
      uint64_t SSER206:1;
      uint64_t SSER207:1;
      uint64_t SSER208:1;
      uint64_t SSER209:1;
      uint64_t SSER210:1;
      uint64_t SSER211:1;
      uint64_t SSER212:1;
      uint64_t SSER213:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SSER2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSER300:1;
      uint64_t SSER301:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SSER3;

  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INI002:1;
      uint64_t INI003:1;
      uint64_t INI004:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INI00;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INI010:1;
      uint64_t INI011:1;
      uint64_t INI012:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INI01;

  uint8_t res6[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INI102:1;
      uint64_t INI103:1;
      uint64_t INI104:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INI10;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INI110:1;
      uint64_t INI111:1;
      uint64_t INI112:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INI11;

  uint8_t res8[67];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TSG0HALLSEL:1;
      uint64_t TSG1HALLSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TSGHALLSEL;

  uint8_t res9[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAUD0IN010:2;
      uint64_t TAUD0IN032:2;
      uint64_t TAUD0IN210:2;
      uint64_t TAUD0IN232:2;
      uint64_t TAUD0IN410:2;
      uint64_t TAUD0IN432:2;
      uint64_t TAUD0IN610:2;
      uint64_t TAUD0IN632:2;
      uint64_t TAUD0IN810:2;
      uint64_t TAUD0IN832:2;
      uint64_t TAUD0IN1010:2;
      uint64_t TAUD0IN1032:2;
      uint64_t TAUD0IN1210:2;
      uint64_t TAUD0IN1232:2;
      uint64_t TAUD0IN1410:2;
      uint64_t TAUD0IN1432:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAUD0SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAUD1IN010:2;
      uint64_t TAUD1IN032:2;
      uint64_t TAUD1IN210:2;
      uint64_t TAUD1IN232:2;
      uint64_t TAUD1IN410:2;
      uint64_t TAUD1IN432:2;
      uint64_t TAUD1IN610:2;
      uint64_t TAUD1IN632:2;
      uint64_t TAUD1IN810:2;
      uint64_t TAUD1IN832:2;
      uint64_t TAUD1IN1010:2;
      uint64_t TAUD1IN1032:2;
      uint64_t TAUD1IN1210:2;
      uint64_t TAUD1IN1232:2;
      uint64_t TAUD1IN1410:2;
      uint64_t TAUD1IN1432:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAUD1SEL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIZCEN00:1;
      uint64_t reservedSpace0:4;
      uint64_t HIZCEN05:1;
      uint64_t HIZCEN06:1;
      uint64_t HIZCEN07:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIZCEN0;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIZCEN10:1;
      uint64_t reservedSpace0:4;
      uint64_t HIZCEN15:1;
      uint64_t HIZCEN16:1;
      uint64_t HIZCEN17:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIZCEN1;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIZCEN20:1;
      uint64_t reservedSpace0:2;
      uint64_t HIZCEN23:1;
      uint64_t reservedSpace1:1;
      uint64_t HIZCEN25:1;
      uint64_t HIZCEN26:1;
      uint64_t HIZCEN27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIZCEN2;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIZCEN30:1;
      uint64_t reservedSpace0:3;
      uint64_t HIZCEN34:1;
      uint64_t HIZCEN35:1;
      uint64_t HIZCEN36:1;
      uint64_t HIZCEN37:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIZCEN3;

  uint8_t res13[43];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENCSEL40030:4;
      uint64_t reservedSpace0:3;
      uint64_t ENCSEL4007:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENCSEL400;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENCSEL41030:4;
      uint64_t reservedSpace0:3;
      uint64_t ENCSEL4107:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENCSEL410;

  uint8_t res15[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG20000:1;
      uint64_t REG20001:1;
      uint64_t REG20002:1;
      uint64_t REG20003:1;
      uint64_t reservedSpace0:4;
      uint64_t REG2000908:2;
      uint64_t REG2001110:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t REG2011716:2;
      uint64_t REG2011918:2;
      uint64_t REG2012120:2;
      uint64_t REG2012322:2;
      uint64_t REG2012524:2;
      uint64_t REG2012726:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t REG20202:1;
      uint64_t REG20203:1;
      uint64_t REG20204:1;
      uint64_t reservedSpace1:11;
      uint64_t REG2021716:2;
      uint64_t REG2021918:2;
      uint64_t REG2022120:2;
      uint64_t REG2022322:2;
      uint64_t REG2022524:2;
      uint64_t REG2022726:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG2030200:3;
      uint64_t reservedSpace0:1;
      uint64_t REG2030604:3;
      uint64_t reservedSpace1:1;
      uint64_t REG2031008:3;
      uint64_t reservedSpace2:1;
      uint64_t REG2031412:3;
      uint64_t reservedSpace3:1;
      uint64_t REG2031816:3;
      uint64_t reservedSpace4:1;
      uint64_t REG2032220:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG203;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG21000:1;
      uint64_t REG21001:1;
      uint64_t REG21002:1;
      uint64_t REG21003:1;
      uint64_t reservedSpace0:4;
      uint64_t REG2100908:2;
      uint64_t REG2101110:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t REG2111716:2;
      uint64_t REG2111918:2;
      uint64_t REG2112120:2;
      uint64_t REG2112322:2;
      uint64_t REG2112524:2;
      uint64_t REG2112726:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t REG21202:1;
      uint64_t REG21203:1;
      uint64_t REG21204:1;
      uint64_t reservedSpace1:11;
      uint64_t REG2121716:2;
      uint64_t REG2121918:2;
      uint64_t REG2122120:2;
      uint64_t REG2122322:2;
      uint64_t REG2122524:2;
      uint64_t REG2122726:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG2130200:3;
      uint64_t reservedSpace0:1;
      uint64_t REG2130604:3;
      uint64_t reservedSpace1:1;
      uint64_t REG2131008:3;
      uint64_t reservedSpace2:1;
      uint64_t REG2131412:3;
      uint64_t reservedSpace3:1;
      uint64_t REG2131816:3;
      uint64_t reservedSpace4:1;
      uint64_t REG2132220:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG213;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG3000:1;
      uint64_t REG3001:1;
      uint64_t REG300502:4;
      uint64_t REG300706:2;
      uint64_t REG300908:2;
      uint64_t REG301110:2;
      uint64_t REG301512:4;
      uint64_t REG301716:2;
      uint64_t REG3018:1;
      uint64_t REG302019:2;
      uint64_t REG3021:1;
      uint64_t REG3022:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG3100:1;
      uint64_t REG3101:1;
      uint64_t reservedSpace0:1;
      uint64_t REG3103:1;
      uint64_t REG3104:1;
      uint64_t reservedSpace1:1;
      uint64_t REG310806:3;
      uint64_t REG311009:2;
      uint64_t REG3111:1;
      uint64_t REG311312:2;
      uint64_t reservedSpace2:1;
      uint64_t REG311715:3;
      uint64_t REG311918:2;
      uint64_t REG3120:1;
      uint64_t REG312221:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG31;

  uint8_t res18[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REG5000:1;
      uint64_t reservedSpace0:4;
      uint64_t REG500605:2;
      uint64_t REG5007:1;
      uint64_t REG5008:1;
      uint64_t reservedSpace1:1;
      uint64_t REG5010:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) REG50;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REG5100:1;
      uint64_t reservedSpace0:4;
      uint64_t REG510605:2;
      uint64_t REG5107:1;
      uint64_t REG5108:1;
      uint64_t reservedSpace1:1;
      uint64_t REG5110:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) REG51;

  uint8_t res20[7938];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SELBSSER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SELBSSER;

  uint8_t res21[20479];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PIMONSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PIMONSEL;

  uint8_t res22[1023];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POMONSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) POMONSEL;

};

#define PIC1A (*(volatile struct PIC1A_tag *) 0xffdd0004)

struct PIC2B_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG0TSEL000:1;
      uint64_t ADCG0TSEL001:1;
      uint64_t ADCG0TSEL002:1;
      uint64_t ADCG0TSEL003:1;
      uint64_t ADCG0TSEL004:1;
      uint64_t ADCG0TSEL005:1;
      uint64_t ADCG0TSEL006:1;
      uint64_t ADCG0TSEL007:1;
      uint64_t ADCG0TSEL008:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG0TSEL016:1;
      uint64_t ADCG0TSEL017:1;
      uint64_t ADCG0TSEL018:1;
      uint64_t ADCG0TSEL019:1;
      uint64_t ADCG0TSEL020:1;
      uint64_t ADCG0TSEL021:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG0TSEL024:1;
      uint64_t ADCG0TSEL025:1;
      uint64_t ADCG0TSEL026:1;
      uint64_t ADCG0TSEL027:1;
      uint64_t ADCG0TSEL028:1;
      uint64_t ADCG0TSEL029:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG0TSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG0TSEL100:1;
      uint64_t ADCG0TSEL101:1;
      uint64_t ADCG0TSEL102:1;
      uint64_t ADCG0TSEL103:1;
      uint64_t ADCG0TSEL104:1;
      uint64_t ADCG0TSEL105:1;
      uint64_t ADCG0TSEL106:1;
      uint64_t ADCG0TSEL107:1;
      uint64_t ADCG0TSEL108:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG0TSEL116:1;
      uint64_t ADCG0TSEL117:1;
      uint64_t ADCG0TSEL118:1;
      uint64_t ADCG0TSEL119:1;
      uint64_t ADCG0TSEL120:1;
      uint64_t ADCG0TSEL121:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG0TSEL124:1;
      uint64_t ADCG0TSEL125:1;
      uint64_t ADCG0TSEL126:1;
      uint64_t ADCG0TSEL127:1;
      uint64_t ADCG0TSEL128:1;
      uint64_t ADCG0TSEL129:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG0TSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG0TSEL200:1;
      uint64_t ADCG0TSEL201:1;
      uint64_t ADCG0TSEL202:1;
      uint64_t ADCG0TSEL203:1;
      uint64_t ADCG0TSEL204:1;
      uint64_t ADCG0TSEL205:1;
      uint64_t ADCG0TSEL206:1;
      uint64_t ADCG0TSEL207:1;
      uint64_t ADCG0TSEL208:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG0TSEL216:1;
      uint64_t ADCG0TSEL217:1;
      uint64_t ADCG0TSEL218:1;
      uint64_t ADCG0TSEL219:1;
      uint64_t ADCG0TSEL220:1;
      uint64_t ADCG0TSEL221:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG0TSEL224:1;
      uint64_t ADCG0TSEL225:1;
      uint64_t ADCG0TSEL226:1;
      uint64_t ADCG0TSEL227:1;
      uint64_t ADCG0TSEL228:1;
      uint64_t ADCG0TSEL229:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG0TSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG0TSEL300:1;
      uint64_t ADCG0TSEL301:1;
      uint64_t ADCG0TSEL302:1;
      uint64_t ADCG0TSEL303:1;
      uint64_t ADCG0TSEL304:1;
      uint64_t ADCG0TSEL305:1;
      uint64_t ADCG0TSEL306:1;
      uint64_t ADCG0TSEL307:1;
      uint64_t ADCG0TSEL308:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG0TSEL316:1;
      uint64_t ADCG0TSEL317:1;
      uint64_t ADCG0TSEL318:1;
      uint64_t ADCG0TSEL319:1;
      uint64_t ADCG0TSEL320:1;
      uint64_t ADCG0TSEL321:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG0TSEL324:1;
      uint64_t ADCG0TSEL325:1;
      uint64_t ADCG0TSEL326:1;
      uint64_t ADCG0TSEL327:1;
      uint64_t ADCG0TSEL328:1;
      uint64_t ADCG0TSEL329:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG0TSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG0TSEL400:1;
      uint64_t ADCG0TSEL401:1;
      uint64_t ADCG0TSEL402:1;
      uint64_t ADCG0TSEL403:1;
      uint64_t ADCG0TSEL404:1;
      uint64_t ADCG0TSEL405:1;
      uint64_t ADCG0TSEL406:1;
      uint64_t ADCG0TSEL407:1;
      uint64_t ADCG0TSEL408:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG0TSEL416:1;
      uint64_t ADCG0TSEL417:1;
      uint64_t ADCG0TSEL418:1;
      uint64_t ADCG0TSEL419:1;
      uint64_t ADCG0TSEL420:1;
      uint64_t ADCG0TSEL421:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG0TSEL424:1;
      uint64_t ADCG0TSEL425:1;
      uint64_t ADCG0TSEL426:1;
      uint64_t ADCG0TSEL427:1;
      uint64_t ADCG0TSEL428:1;
      uint64_t ADCG0TSEL429:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG0TSEL4;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADCG0EDGSEL10:2;
      uint64_t ADCG0EDGSEL32:2;
      uint64_t ADCG0EDGSEL54:2;
      uint64_t ADCG0EDGSEL76:2;
      uint64_t ADCG0EDGSEL98:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCG0EDGSEL;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG1TSEL000:1;
      uint64_t ADCG1TSEL001:1;
      uint64_t ADCG1TSEL002:1;
      uint64_t ADCG1TSEL003:1;
      uint64_t ADCG1TSEL004:1;
      uint64_t ADCG1TSEL005:1;
      uint64_t ADCG1TSEL006:1;
      uint64_t ADCG1TSEL007:1;
      uint64_t ADCG1TSEL008:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG1TSEL016:1;
      uint64_t ADCG1TSEL017:1;
      uint64_t ADCG1TSEL018:1;
      uint64_t ADCG1TSEL019:1;
      uint64_t ADCG1TSEL020:1;
      uint64_t ADCG1TSEL021:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG1TSEL024:1;
      uint64_t ADCG1TSEL025:1;
      uint64_t ADCG1TSEL026:1;
      uint64_t ADCG1TSEL027:1;
      uint64_t ADCG1TSEL028:1;
      uint64_t ADCG1TSEL029:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG1TSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG1TSEL100:1;
      uint64_t ADCG1TSEL101:1;
      uint64_t ADCG1TSEL102:1;
      uint64_t ADCG1TSEL103:1;
      uint64_t ADCG1TSEL104:1;
      uint64_t ADCG1TSEL105:1;
      uint64_t ADCG1TSEL106:1;
      uint64_t ADCG1TSEL107:1;
      uint64_t ADCG1TSEL108:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG1TSEL116:1;
      uint64_t ADCG1TSEL117:1;
      uint64_t ADCG1TSEL118:1;
      uint64_t ADCG1TSEL119:1;
      uint64_t ADCG1TSEL120:1;
      uint64_t ADCG1TSEL121:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG1TSEL124:1;
      uint64_t ADCG1TSEL125:1;
      uint64_t ADCG1TSEL126:1;
      uint64_t ADCG1TSEL127:1;
      uint64_t ADCG1TSEL128:1;
      uint64_t ADCG1TSEL129:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG1TSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG1TSEL200:1;
      uint64_t ADCG1TSEL201:1;
      uint64_t ADCG1TSEL202:1;
      uint64_t ADCG1TSEL203:1;
      uint64_t ADCG1TSEL204:1;
      uint64_t ADCG1TSEL205:1;
      uint64_t ADCG1TSEL206:1;
      uint64_t ADCG1TSEL207:1;
      uint64_t ADCG1TSEL208:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG1TSEL216:1;
      uint64_t ADCG1TSEL217:1;
      uint64_t ADCG1TSEL218:1;
      uint64_t ADCG1TSEL219:1;
      uint64_t ADCG1TSEL220:1;
      uint64_t ADCG1TSEL221:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG1TSEL224:1;
      uint64_t ADCG1TSEL225:1;
      uint64_t ADCG1TSEL226:1;
      uint64_t ADCG1TSEL227:1;
      uint64_t ADCG1TSEL228:1;
      uint64_t ADCG1TSEL229:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG1TSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG1TSEL300:1;
      uint64_t ADCG1TSEL301:1;
      uint64_t ADCG1TSEL302:1;
      uint64_t ADCG1TSEL303:1;
      uint64_t ADCG1TSEL304:1;
      uint64_t ADCG1TSEL305:1;
      uint64_t ADCG1TSEL306:1;
      uint64_t ADCG1TSEL307:1;
      uint64_t ADCG1TSEL308:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG1TSEL316:1;
      uint64_t ADCG1TSEL317:1;
      uint64_t ADCG1TSEL318:1;
      uint64_t ADCG1TSEL319:1;
      uint64_t ADCG1TSEL320:1;
      uint64_t ADCG1TSEL321:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG1TSEL324:1;
      uint64_t ADCG1TSEL325:1;
      uint64_t ADCG1TSEL326:1;
      uint64_t ADCG1TSEL327:1;
      uint64_t ADCG1TSEL328:1;
      uint64_t ADCG1TSEL329:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG1TSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCG1TSEL400:1;
      uint64_t ADCG1TSEL401:1;
      uint64_t ADCG1TSEL402:1;
      uint64_t ADCG1TSEL403:1;
      uint64_t ADCG1TSEL404:1;
      uint64_t ADCG1TSEL405:1;
      uint64_t ADCG1TSEL406:1;
      uint64_t ADCG1TSEL407:1;
      uint64_t ADCG1TSEL408:1;
      uint64_t reservedSpace0:7;
      uint64_t ADCG1TSEL416:1;
      uint64_t ADCG1TSEL417:1;
      uint64_t ADCG1TSEL418:1;
      uint64_t ADCG1TSEL419:1;
      uint64_t ADCG1TSEL420:1;
      uint64_t ADCG1TSEL421:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCG1TSEL424:1;
      uint64_t ADCG1TSEL425:1;
      uint64_t ADCG1TSEL426:1;
      uint64_t ADCG1TSEL427:1;
      uint64_t ADCG1TSEL428:1;
      uint64_t ADCG1TSEL429:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCG1TSEL4;

  uint8_t res2[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADCG1EDGSEL10:2;
      uint64_t ADCG1EDGSEL32:2;
      uint64_t ADCG1EDGSEL54:2;
      uint64_t ADCG1EDGSEL76:2;
      uint64_t ADCG1EDGSEL98:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCG1EDGSEL;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4000:1;
      uint64_t ADTEN4001:1;
      uint64_t ADTEN4002:1;
      uint64_t ADTEN4003:1;
      uint64_t ADTEN4004:1;
      uint64_t ADTEN4005:1;
      uint64_t ADTEN4006:1;
      uint64_t ADTEN4007:1;
      uint64_t ADTEN4008:1;
      uint64_t ADTEN4009:1;
      uint64_t ADTEN40010:1;
      uint64_t ADTEN40011:1;
      uint64_t ADTEN40012:1;
      uint64_t ADTEN40013:1;
      uint64_t ADTEN40014:1;
      uint64_t ADTEN40015:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN400;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4010:1;
      uint64_t ADTEN4011:1;
      uint64_t ADTEN4012:1;
      uint64_t ADTEN4013:1;
      uint64_t ADTEN4014:1;
      uint64_t ADTEN4015:1;
      uint64_t ADTEN4016:1;
      uint64_t ADTEN4017:1;
      uint64_t ADTEN4018:1;
      uint64_t ADTEN4019:1;
      uint64_t ADTEN40110:1;
      uint64_t ADTEN40111:1;
      uint64_t ADTEN40112:1;
      uint64_t ADTEN40113:1;
      uint64_t ADTEN40114:1;
      uint64_t ADTEN40115:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN401;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4020:1;
      uint64_t ADTEN4021:1;
      uint64_t ADTEN4022:1;
      uint64_t ADTEN4023:1;
      uint64_t ADTEN4024:1;
      uint64_t ADTEN4025:1;
      uint64_t ADTEN4026:1;
      uint64_t ADTEN4027:1;
      uint64_t ADTEN4028:1;
      uint64_t ADTEN4029:1;
      uint64_t ADTEN40210:1;
      uint64_t ADTEN40211:1;
      uint64_t ADTEN40212:1;
      uint64_t ADTEN40213:1;
      uint64_t ADTEN40214:1;
      uint64_t ADTEN40215:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN402;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4030:1;
      uint64_t ADTEN4031:1;
      uint64_t ADTEN4032:1;
      uint64_t ADTEN4033:1;
      uint64_t ADTEN4034:1;
      uint64_t ADTEN4035:1;
      uint64_t ADTEN4036:1;
      uint64_t ADTEN4037:1;
      uint64_t ADTEN4038:1;
      uint64_t ADTEN4039:1;
      uint64_t ADTEN40310:1;
      uint64_t ADTEN40311:1;
      uint64_t ADTEN40312:1;
      uint64_t ADTEN40313:1;
      uint64_t ADTEN40314:1;
      uint64_t ADTEN40315:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN403;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4040:1;
      uint64_t ADTEN4041:1;
      uint64_t ADTEN4042:1;
      uint64_t ADTEN4043:1;
      uint64_t ADTEN4044:1;
      uint64_t ADTEN4045:1;
      uint64_t ADTEN4046:1;
      uint64_t ADTEN4047:1;
      uint64_t ADTEN4048:1;
      uint64_t ADTEN4049:1;
      uint64_t ADTEN40410:1;
      uint64_t ADTEN40411:1;
      uint64_t ADTEN40412:1;
      uint64_t ADTEN40413:1;
      uint64_t ADTEN40414:1;
      uint64_t ADTEN40415:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN404;

  uint8_t res8[14];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4100:1;
      uint64_t ADTEN4101:1;
      uint64_t ADTEN4102:1;
      uint64_t ADTEN4103:1;
      uint64_t ADTEN4104:1;
      uint64_t ADTEN4105:1;
      uint64_t ADTEN4106:1;
      uint64_t ADTEN4107:1;
      uint64_t ADTEN4108:1;
      uint64_t ADTEN4109:1;
      uint64_t ADTEN41010:1;
      uint64_t ADTEN41011:1;
      uint64_t ADTEN41012:1;
      uint64_t ADTEN41013:1;
      uint64_t ADTEN41014:1;
      uint64_t ADTEN41015:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN410;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4110:1;
      uint64_t ADTEN4111:1;
      uint64_t ADTEN4112:1;
      uint64_t ADTEN4113:1;
      uint64_t ADTEN4114:1;
      uint64_t ADTEN4115:1;
      uint64_t ADTEN4116:1;
      uint64_t ADTEN4117:1;
      uint64_t ADTEN4118:1;
      uint64_t ADTEN4119:1;
      uint64_t ADTEN41110:1;
      uint64_t ADTEN41111:1;
      uint64_t ADTEN41112:1;
      uint64_t ADTEN41113:1;
      uint64_t ADTEN41114:1;
      uint64_t ADTEN41115:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN411;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4120:1;
      uint64_t ADTEN4121:1;
      uint64_t ADTEN4122:1;
      uint64_t ADTEN4123:1;
      uint64_t ADTEN4124:1;
      uint64_t ADTEN4125:1;
      uint64_t ADTEN4126:1;
      uint64_t ADTEN4127:1;
      uint64_t ADTEN4128:1;
      uint64_t ADTEN4129:1;
      uint64_t ADTEN41210:1;
      uint64_t ADTEN41211:1;
      uint64_t ADTEN41212:1;
      uint64_t ADTEN41213:1;
      uint64_t ADTEN41214:1;
      uint64_t ADTEN41215:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN412;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4130:1;
      uint64_t ADTEN4131:1;
      uint64_t ADTEN4132:1;
      uint64_t ADTEN4133:1;
      uint64_t ADTEN4134:1;
      uint64_t ADTEN4135:1;
      uint64_t ADTEN4136:1;
      uint64_t ADTEN4137:1;
      uint64_t ADTEN4138:1;
      uint64_t ADTEN4139:1;
      uint64_t ADTEN41310:1;
      uint64_t ADTEN41311:1;
      uint64_t ADTEN41312:1;
      uint64_t ADTEN41313:1;
      uint64_t ADTEN41314:1;
      uint64_t ADTEN41315:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN413;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADTEN4140:1;
      uint64_t ADTEN4141:1;
      uint64_t ADTEN4142:1;
      uint64_t ADTEN4143:1;
      uint64_t ADTEN4144:1;
      uint64_t ADTEN4145:1;
      uint64_t ADTEN4146:1;
      uint64_t ADTEN4147:1;
      uint64_t ADTEN4148:1;
      uint64_t ADTEN4149:1;
      uint64_t ADTEN41410:1;
      uint64_t ADTEN41411:1;
      uint64_t ADTEN41412:1;
      uint64_t ADTEN41413:1;
      uint64_t ADTEN41414:1;
      uint64_t ADTEN41415:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADTEN414;

  uint8_t res13[1837966];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADSYNCTRG0:1;
      uint64_t ADSYNCTRG1:1;
      uint64_t ADSYNCTRG2:1;
      uint64_t ADSYNCTRG3:1;
      uint64_t ADSYNCTRG4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSYNCTRG;

};

#define PIC2B (*(volatile struct PIC2B_tag *) 0xffdd1000)

struct OSTM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC0CKSEL00:4;
      uint64_t IC0CKSEL01:4;
      uint64_t IC0CKSEL02:2;
      uint64_t IC0CKSEL03:2;
      uint64_t IC0TMSEL0:2;
      uint64_t reservedSpace0:1;
      uint64_t IC0TMEN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IC0CKSEL0;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC0CKSEL10:4;
      uint64_t IC0CKSEL11:4;
      uint64_t IC0CKSEL12:2;
      uint64_t IC0CKSEL13:2;
      uint64_t IC0TMSEL1:2;
      uint64_t reservedSpace0:1;
      uint64_t IC0TMEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IC0CKSEL1;

};

#define OSTM (*(volatile struct OSTM_tag *) 0xffdd6000)

struct OSTM0_tag
{
  uint32_t CMP;
  uint32_t CNT;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TO;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res4[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD0:1;
      uint64_t MD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define OSTM0 (*(volatile struct OSTM0_tag *) 0xffdd8000)

struct OSTM1_tag
{
  uint32_t CMP;
  uint32_t CNT;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TO;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res4[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD0:1;
      uint64_t MD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define OSTM1 (*(volatile struct OSTM1_tag *) 0xffdd9000)

struct PBG1_tag
{
  uint32_t FSGD1APROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID00;

  uint32_t FSGD1APROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID01;

  uint32_t FSGD1APROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID02;

  uint32_t FSGD1APROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID03;

  uint32_t FSGD1APROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID04;

  uint32_t FSGD1APROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID05;

  uint32_t FSGD1APROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID06;

  uint32_t FSGD1APROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID07;

  uint32_t FSGD1APROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID08;

  uint32_t FSGD1APROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID09;

  uint32_t FSGD1APROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID10;

  uint32_t FSGD1APROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID11;

  uint32_t FSGD1APROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID12;

  uint32_t FSGD1APROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID13;

  uint32_t FSGD1APROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID14;

  uint32_t FSGD1APROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ASPID15;

  uint32_t FSGD1BPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID00;

  uint32_t FSGD1BPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID01;

  uint32_t FSGD1BPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID02;

  uint32_t FSGD1BPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID03;

  uint32_t FSGD1BPROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID04;

  uint32_t FSGD1BPROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID05;

  uint32_t FSGD1BPROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID06;

  uint32_t FSGD1BPROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID07;

  uint32_t FSGD1BPROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID08;

  uint32_t FSGD1BPROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID09;

  uint32_t FSGD1BPROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID10;

  uint32_t FSGD1BPROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID11;

  uint32_t FSGD1BPROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID12;

  uint32_t FSGD1BPROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID13;

  uint32_t FSGD1BPROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID14;

  uint32_t FSGD1BPROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1BSPID15;

  uint32_t FSGD1CPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID00;

  uint32_t FSGD1CPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID01;

  uint32_t FSGD1CPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID02;

  uint32_t FSGD1CPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID03;

  uint32_t FSGD1CPROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID04;

  uint32_t FSGD1CPROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID05;

  uint32_t FSGD1CPROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID06;

  uint32_t FSGD1CPROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID07;

  uint32_t FSGD1CPROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID08;

  uint32_t FSGD1CPROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID09;

  uint32_t FSGD1CPROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID10;

  uint32_t FSGD1CPROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID11;

  uint32_t FSGD1CPROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID12;

  uint32_t FSGD1CPROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID13;

  uint32_t FSGD1CPROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID14;

  uint32_t FSGD1CPROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1CSPID15;

  uint32_t FSGD1DPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID00;

  uint32_t FSGD1DPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID01;

  uint32_t FSGD1DPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID02;

  uint32_t FSGD1DPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID03;

  uint32_t FSGD1DPROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID04;

  uint32_t FSGD1DPROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID05;

  uint32_t FSGD1DPROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID06;

  uint32_t FSGD1DPROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID07;

  uint32_t FSGD1DPROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID08;

  uint32_t FSGD1DPROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID09;

  uint32_t FSGD1DPROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID10;

  uint32_t FSGD1DPROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID11;

  uint32_t FSGD1DPROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID12;

  uint32_t FSGD1DPROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID13;

  uint32_t FSGD1DPROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID14;

  uint32_t FSGD1DPROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1DSPID15;

  uint32_t FSGD1EPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID00;

  uint32_t FSGD1EPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID01;

  uint32_t FSGD1EPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID02;

  uint32_t FSGD1EPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID03;

  uint32_t FSGD1EPROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID04;

  uint32_t FSGD1EPROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID05;

  uint32_t FSGD1EPROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID06;

  uint32_t FSGD1EPROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID07;

  uint32_t FSGD1EPROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID08;

  uint32_t FSGD1EPROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID09;

  uint32_t FSGD1EPROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID10;

  uint32_t FSGD1EPROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID11;

  uint32_t FSGD1EPROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID12;

  uint32_t FSGD1EPROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID13;

  uint32_t FSGD1EPROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID14;

  uint32_t FSGD1EPROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD1ESPID15;

  uint8_t res0[384];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRSLV1CTL;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV1STAT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
      uint64_t reservedSpace0:12;
      uint64_t PEID:3;
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV1TYPE;

};

#define PBG1 (*(volatile struct PBG1_tag *) 0xffddd000)

struct PBECC1_tag
{
  uint32_t APEC0ECCCTL;
  uint32_t APEC0ERRINT;
  uint32_t APEC0STCLR;
  uint32_t APEC0OVFSTR;
  uint32_t APEC01STERSTR;
  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APEC01STEADR0;

};

#define PBECC1 (*(volatile struct PBECC1_tag *) 0xffddd800)

struct SCI30_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t MP:1;
      uint64_t STOP:1;
      uint64_t PM:1;
      uint64_t PE:1;
      uint64_t CHR:1;
      uint64_t CM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SMR;

  uint8_t res0[3];

  uint8_t BRR;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKE:2;
      uint64_t TEIE:1;
      uint64_t MPIE:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t RIE:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCR;

  uint8_t res2[3];

  uint8_t TDR;
  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MPBT:1;
      uint64_t MPB:1;
      uint64_t TEND:1;
      uint64_t PER:1;
      uint64_t FER:1;
      uint64_t ORER:1;
      uint64_t RDRF:1;
      uint64_t TDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSR;

  uint8_t res4[3];

  uint8_t RDR;
  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SINV:1;
      uint64_t SDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCMR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXDMON:1;
      uint64_t ABCS:1;
      uint64_t reservedSpace1:2;
      uint64_t MDDRS:1;
      uint64_t BRME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SEMR;

};

#define SCI30 (*(volatile struct SCI30_tag *) 0xffdf0000)

struct SCI31_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t MP:1;
      uint64_t STOP:1;
      uint64_t PM:1;
      uint64_t PE:1;
      uint64_t CHR:1;
      uint64_t CM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SMR;

  uint8_t res0[3];

  uint8_t BRR;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKE:2;
      uint64_t TEIE:1;
      uint64_t MPIE:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t RIE:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCR;

  uint8_t res2[3];

  uint8_t TDR;
  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MPBT:1;
      uint64_t MPB:1;
      uint64_t TEND:1;
      uint64_t PER:1;
      uint64_t FER:1;
      uint64_t ORER:1;
      uint64_t RDRF:1;
      uint64_t TDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSR;

  uint8_t res4[3];

  uint8_t RDR;
  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SINV:1;
      uint64_t SDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCMR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXDMON:1;
      uint64_t ABCS:1;
      uint64_t reservedSpace1:2;
      uint64_t MDDRS:1;
      uint64_t BRME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SEMR;

};

#define SCI31 (*(volatile struct SCI31_tag *) 0xffdf1000)

struct SCI32_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t MP:1;
      uint64_t STOP:1;
      uint64_t PM:1;
      uint64_t PE:1;
      uint64_t CHR:1;
      uint64_t CM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SMR;

  uint8_t res0[3];

  uint8_t BRR;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKE:2;
      uint64_t TEIE:1;
      uint64_t MPIE:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t RIE:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCR;

  uint8_t res2[3];

  uint8_t TDR;
  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MPBT:1;
      uint64_t MPB:1;
      uint64_t TEND:1;
      uint64_t PER:1;
      uint64_t FER:1;
      uint64_t ORER:1;
      uint64_t RDRF:1;
      uint64_t TDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSR;

  uint8_t res4[3];

  uint8_t RDR;
  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SINV:1;
      uint64_t SDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCMR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RXDMON:1;
      uint64_t ABCS:1;
      uint64_t reservedSpace1:2;
      uint64_t MDDRS:1;
      uint64_t BRME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SEMR;

};

#define SCI32 (*(volatile struct SCI32_tag *) 0xffdf2000)

struct RLN30_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LWBR0:1;
      uint64_t LPRS:3;
      uint64_t NSPB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LWBR;

  uint16_t LBRP01;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LSTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LSTC;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LMD:2;
      uint64_t LCKS:2;
      uint64_t LIOS:1;
      uint64_t LRDNFS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LMD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BLT:4;
      uint64_t BDT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LBFC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IBHS:3;
      uint64_t reservedSpace0:1;
      uint64_t IBS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LSC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t WUTL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LWUP;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FTCIE:1;
      uint64_t FRCIE:1;
      uint64_t ERRIE:1;
      uint64_t SHIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LIE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BERE:1;
      uint64_t PBERE:1;
      uint64_t FTERE:1;
      uint64_t FERE:1;
      uint64_t reservedSpace0:3;
      uint64_t LTES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LEDE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LCUC;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FTS:1;
      uint64_t RTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LTRC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OMM0:1;
      uint64_t OMM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LMST;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FTC:1;
      uint64_t FRC:1;
      uint64_t reservedSpace0:1;
      uint64_t ERR:1;
      uint64_t reservedSpace1:2;
      uint64_t D1RC:1;
      uint64_t HTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LST;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BER:1;
      uint64_t PBER:1;
      uint64_t FTER:1;
      uint64_t FER:1;
      uint64_t reservedSpace0:1;
      uint64_t CSER:1;
      uint64_t reservedSpace1:1;
      uint64_t RPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LEST;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RFDL:4;
      uint64_t RFT:1;
      uint64_t CSM:1;
      uint64_t FSM:1;
      uint64_t LSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDFC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t IDP0:1;
      uint64_t IDP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LIDB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKSM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LCBR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LUDB0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UTOE:1;
      uint64_t UROE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LUOER;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UEBE:1;
      uint64_t UEBDL:1;
      uint64_t UEBDCE:1;
      uint64_t UTIGTS:1;
      uint64_t UECD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LUOR1;

  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN30 (*(volatile struct RLN30_tag *) 0xffdf8001)

struct RLN31_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LWBR0:1;
      uint64_t LPRS:3;
      uint64_t NSPB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LWBR;

  uint16_t LBRP01;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LSTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LSTC;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LMD:2;
      uint64_t LCKS:2;
      uint64_t LIOS:1;
      uint64_t LRDNFS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LMD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BLT:4;
      uint64_t BDT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LBFC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IBHS:3;
      uint64_t reservedSpace0:1;
      uint64_t IBS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LSC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t WUTL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LWUP;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FTCIE:1;
      uint64_t FRCIE:1;
      uint64_t ERRIE:1;
      uint64_t SHIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LIE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BERE:1;
      uint64_t PBERE:1;
      uint64_t FTERE:1;
      uint64_t FERE:1;
      uint64_t reservedSpace0:3;
      uint64_t LTES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LEDE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OM0:1;
      uint64_t OM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LCUC;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FTS:1;
      uint64_t RTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LTRC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OMM0:1;
      uint64_t OMM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LMST;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FTC:1;
      uint64_t FRC:1;
      uint64_t reservedSpace0:1;
      uint64_t ERR:1;
      uint64_t reservedSpace1:2;
      uint64_t D1RC:1;
      uint64_t HTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LST;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BER:1;
      uint64_t PBER:1;
      uint64_t FTER:1;
      uint64_t FER:1;
      uint64_t reservedSpace0:1;
      uint64_t CSER:1;
      uint64_t reservedSpace1:1;
      uint64_t RPER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LEST;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RFDL:4;
      uint64_t RFT:1;
      uint64_t CSM:1;
      uint64_t FSM:1;
      uint64_t LSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDFC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t IDP0:1;
      uint64_t IDP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LIDB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKSM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LCBR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LUDB0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LDB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LDBR8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UTOE:1;
      uint64_t UROE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LUOER;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UEBE:1;
      uint64_t UEBDL:1;
      uint64_t UEBDCE:1;
      uint64_t UTIGTS:1;
      uint64_t UECD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LUOR1;

  uint8_t res2[2];

  uint16_t LUTDR;
  uint16_t LURDR;
  uint16_t LUWTDR;
};

#define RLN31 (*(volatile struct RLN31_tag *) 0xffdf9001)

struct PSI50_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCTRL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPTIMEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TSCLR:1;
      uint64_t reservedSpace1:7;
      uint64_t MSTSLV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPTIMERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPTIMER;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPMCOMM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITRATECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPMBITRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTTTCNT:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPMCYCT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_RXMEXIST:1;
      uint64_t INT_RXMFOVF:1;
      uint64_t INT_RXMERR:1;
      uint64_t INT_RXDEXIST:1;
      uint64_t INT_RXDFOVF:1;
      uint64_t INT_RXDERR:1;
      uint64_t INT_RXDSCNFERR:1;
      uint64_t reservedSpace0:9;
      uint64_t INT_TXDEMPTY:1;
      uint64_t INT_SYNCST:1;
      uint64_t INT_SYNCED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSI5INT;

  uint8_t res3[12];

  uint32_t EMRXDATA;
  uint32_t EMRXDST;
  uint32_t EMRXDTIM;
  uint32_t EMRXDFIFO;
  uint32_t EMRXMRXMSG;
  uint32_t EMRXMRXST;
  uint32_t EMRXMRXTIM;
  uint32_t EMRXMFIFO;
  uint8_t res4[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHORTCNT:14;
      uint64_t DEFTXVAL:1;
      uint64_t PHYMODE:1;
      uint64_t LONGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSETTING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALTIMSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDEMPTY:1;
      uint64_t reservedSpace0:7;
      uint64_t SYNCST:1;
      uint64_t SYNCED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SYNCSTCLR:1;
      uint64_t SYNCEDCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDEMPTYINTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t SYNCSTINTEN:1;
      uint64_t SYNCEDINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSTINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRMFORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  uint8_t res5[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPLPROD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXSPLSET;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS1SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS2SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS3SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS4SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS5SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS6SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS7SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS8SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSTATUS:1;
      uint64_t reservedSpace0:3;
      uint64_t RXSLOTNUM:4;
      uint64_t RXCHKD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDTIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDEXIST:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDFOVF:1;
      uint64_t reservedSpace1:7;
      uint64_t RXDERR:1;
      uint64_t reservedSpace2:7;
      uint64_t RXDSCNFERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RXDFOVFCLR:1;
      uint64_t reservedSpace1:7;
      uint64_t RXDERRCLR:1;
      uint64_t reservedSpace2:7;
      uint64_t RXDSCNFERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDEXISTINTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDFOVFINTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXDERRINTEN:1;
      uint64_t reservedSpace2:7;
      uint64_t RXDSCNFERRINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODSTINTEN;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXM1EN:1;
      uint64_t RXM2EN:1;
      uint64_t RXM3EN:1;
      uint64_t RXM4EN:1;
      uint64_t RXM5EN:1;
      uint64_t RXM6EN:1;
      uint64_t RXM7EN:1;
      uint64_t RXM8EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAFIELD:16;
      uint64_t SERIALID:8;
      uint64_t reservedSpace0:7;
      uint64_t CONFIGBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMRXMSG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSTATUS:1;
      uint64_t reservedSpace0:3;
      uint64_t SLOTNUM:4;
      uint64_t RXCRC:6;
      uint64_t reservedSpace1:2;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMRXST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMTIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMRXTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMEXIST:1;
      uint64_t reservedSpace0:7;
      uint64_t RXMFOVF:1;
      uint64_t reservedSpace1:7;
      uint64_t RXMERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RXMFOVFCLR:1;
      uint64_t reservedSpace1:7;
      uint64_t RXMERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMMSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMEXISTINTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t RXMFOVFINTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXMERRINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMMSTINTEN;

};

#define PSI50 (*(volatile struct PSI50_tag *) 0xffe00000)

struct PSI51_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCTRL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPTIMEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TSCLR:1;
      uint64_t reservedSpace1:7;
      uint64_t MSTSLV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPTIMERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPTIMER;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPMCOMM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITRATECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPMBITRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTTTCNT:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPMCYCT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_RXMEXIST:1;
      uint64_t INT_RXMFOVF:1;
      uint64_t INT_RXMERR:1;
      uint64_t INT_RXDEXIST:1;
      uint64_t INT_RXDFOVF:1;
      uint64_t INT_RXDERR:1;
      uint64_t INT_RXDSCNFERR:1;
      uint64_t reservedSpace0:9;
      uint64_t INT_TXDEMPTY:1;
      uint64_t INT_SYNCST:1;
      uint64_t INT_SYNCED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSI5INT;

  uint8_t res3[12];

  uint32_t EMRXDATA;
  uint32_t EMRXDST;
  uint32_t EMRXDTIM;
  uint32_t EMRXDFIFO;
  uint32_t EMRXMRXMSG;
  uint32_t EMRXMRXST;
  uint32_t EMRXMRXTIM;
  uint32_t EMRXMFIFO;
  uint8_t res4[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHORTCNT:14;
      uint64_t DEFTXVAL:1;
      uint64_t PHYMODE:1;
      uint64_t LONGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSETTING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALTIMSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDEMPTY:1;
      uint64_t reservedSpace0:7;
      uint64_t SYNCST:1;
      uint64_t SYNCED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SYNCSTCLR:1;
      uint64_t SYNCEDCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDEMPTYINTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t SYNCSTINTEN:1;
      uint64_t SYNCEDINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSTINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRMFORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  uint8_t res5[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPLPROD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXSPLSET;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS1SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS2SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS3SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS4SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS5SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS6SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS7SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETCNT:20;
      uint64_t LENGTH:5;
      uint64_t ERRDET:1;
      uint64_t PASCMP:1;
      uint64_t reservedSpace0:4;
      uint64_t SLTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXS8SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSTATUS:1;
      uint64_t reservedSpace0:3;
      uint64_t RXSLOTNUM:4;
      uint64_t RXCHKD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDTIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDEXIST:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDFOVF:1;
      uint64_t reservedSpace1:7;
      uint64_t RXDERR:1;
      uint64_t reservedSpace2:7;
      uint64_t RXDSCNFERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RXDFOVFCLR:1;
      uint64_t reservedSpace1:7;
      uint64_t RXDERRCLR:1;
      uint64_t reservedSpace2:7;
      uint64_t RXDSCNFERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDEXISTINTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t RXDFOVFINTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXDERRINTEN:1;
      uint64_t reservedSpace2:7;
      uint64_t RXDSCNFERRINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODSTINTEN;

  uint8_t res7[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXM1EN:1;
      uint64_t RXM2EN:1;
      uint64_t RXM3EN:1;
      uint64_t RXM4EN:1;
      uint64_t RXM5EN:1;
      uint64_t RXM6EN:1;
      uint64_t RXM7EN:1;
      uint64_t RXM8EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAFIELD:16;
      uint64_t SERIALID:8;
      uint64_t reservedSpace0:7;
      uint64_t CONFIGBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMRXMSG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSTATUS:1;
      uint64_t reservedSpace0:3;
      uint64_t SLOTNUM:4;
      uint64_t RXCRC:6;
      uint64_t reservedSpace1:2;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMRXST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMTIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMRXTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMEXIST:1;
      uint64_t reservedSpace0:7;
      uint64_t RXMFOVF:1;
      uint64_t reservedSpace1:7;
      uint64_t RXMERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RXMFOVFCLR:1;
      uint64_t reservedSpace1:7;
      uint64_t RXMERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMMSTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMEXISTINTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t RXMFOVFINTEN:1;
      uint64_t reservedSpace1:7;
      uint64_t RXMERRINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMMSTINTEN;

};

#define PSI51 (*(volatile struct PSI51_tag *) 0xffe01000)

struct PSI5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSEL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSEL;

};

#define PSI5 (*(volatile struct PSI5_tag *) 0xffe03000)

struct RSENT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTPV:7;
      uint64_t reservedSpace0:1;
      uint64_t TTM:7;
      uint64_t reservedSpace1:1;
      uint64_t TMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCE:1;
      uint64_t NDN:3;
      uint64_t PPC:1;
      uint64_t PPTC:1;
      uint64_t SMF:2;
      uint64_t reservedSpace0:1;
      uint64_t FCCD:1;
      uint64_t SCCD:1;
      uint64_t FCM:1;
      uint64_t SOPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCMV:5;
      uint64_t reservedSpace0:3;
      uint64_t SCDV:7;
      uint64_t reservedSpace1:1;
      uint64_t TTI:7;
      uint64_t reservedSpace2:1;
      uint64_t TTF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIE:1;
      uint64_t FCIE:1;
      uint64_t FMIE:1;
      uint64_t FEIE:1;
      uint64_t FNIE:1;
      uint64_t CLIE:1;
      uint64_t CVIE:1;
      uint64_t NRIE:1;
      uint64_t SCIE:1;
      uint64_t SMIE:1;
      uint64_t SEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRS:1;
      uint64_t FCS:1;
      uint64_t FMS:1;
      uint64_t FES:1;
      uint64_t FNS:1;
      uint64_t CLS:1;
      uint64_t CVS:1;
      uint64_t NRS:1;
      uint64_t SCS:1;
      uint64_t SMS:1;
      uint64_t SES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FCC:1;
      uint64_t FMC:1;
      uint64_t FEC:1;
      uint64_t FNC:1;
      uint64_t CLC:1;
      uint64_t CVC:1;
      uint64_t NRC:1;
      uint64_t SCC:1;
      uint64_t SMC:1;
      uint64_t SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDD:20;
      uint64_t SMGC:1;
      uint64_t reservedSpace0:3;
      uint64_t SCRC:6;
      uint64_t reservedSpace1:1;
      uint64_t SND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPLV:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MLV:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:24;
      uint64_t FCRC:4;
      uint64_t FCCN:2;
      uint64_t FND:1;
      uint64_t SNDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRXD;

};

#define RSENT0 (*(volatile struct RSENT0_tag *) 0xffe05000)

struct RSENT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTPV:7;
      uint64_t reservedSpace0:1;
      uint64_t TTM:7;
      uint64_t reservedSpace1:1;
      uint64_t TMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCE:1;
      uint64_t NDN:3;
      uint64_t PPC:1;
      uint64_t PPTC:1;
      uint64_t SMF:2;
      uint64_t reservedSpace0:1;
      uint64_t FCCD:1;
      uint64_t SCCD:1;
      uint64_t FCM:1;
      uint64_t SOPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCMV:5;
      uint64_t reservedSpace0:3;
      uint64_t SCDV:7;
      uint64_t reservedSpace1:1;
      uint64_t TTI:7;
      uint64_t reservedSpace2:1;
      uint64_t TTF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIE:1;
      uint64_t FCIE:1;
      uint64_t FMIE:1;
      uint64_t FEIE:1;
      uint64_t FNIE:1;
      uint64_t CLIE:1;
      uint64_t CVIE:1;
      uint64_t NRIE:1;
      uint64_t SCIE:1;
      uint64_t SMIE:1;
      uint64_t SEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRS:1;
      uint64_t FCS:1;
      uint64_t FMS:1;
      uint64_t FES:1;
      uint64_t FNS:1;
      uint64_t CLS:1;
      uint64_t CVS:1;
      uint64_t NRS:1;
      uint64_t SCS:1;
      uint64_t SMS:1;
      uint64_t SES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FCC:1;
      uint64_t FMC:1;
      uint64_t FEC:1;
      uint64_t FNC:1;
      uint64_t CLC:1;
      uint64_t CVC:1;
      uint64_t NRC:1;
      uint64_t SCC:1;
      uint64_t SMC:1;
      uint64_t SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDD:20;
      uint64_t SMGC:1;
      uint64_t reservedSpace0:3;
      uint64_t SCRC:6;
      uint64_t reservedSpace1:1;
      uint64_t SND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPLV:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MLV:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:24;
      uint64_t FCRC:4;
      uint64_t FCCN:2;
      uint64_t FND:1;
      uint64_t SNDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRXD;

};

#define RSENT1 (*(volatile struct RSENT1_tag *) 0xffe06000)

struct RSENT2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTPV:7;
      uint64_t reservedSpace0:1;
      uint64_t TTM:7;
      uint64_t reservedSpace1:1;
      uint64_t TMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCE:1;
      uint64_t NDN:3;
      uint64_t PPC:1;
      uint64_t PPTC:1;
      uint64_t SMF:2;
      uint64_t reservedSpace0:1;
      uint64_t FCCD:1;
      uint64_t SCCD:1;
      uint64_t FCM:1;
      uint64_t SOPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCMV:5;
      uint64_t reservedSpace0:3;
      uint64_t SCDV:7;
      uint64_t reservedSpace1:1;
      uint64_t TTI:7;
      uint64_t reservedSpace2:1;
      uint64_t TTF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIE:1;
      uint64_t FCIE:1;
      uint64_t FMIE:1;
      uint64_t FEIE:1;
      uint64_t FNIE:1;
      uint64_t CLIE:1;
      uint64_t CVIE:1;
      uint64_t NRIE:1;
      uint64_t SCIE:1;
      uint64_t SMIE:1;
      uint64_t SEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRS:1;
      uint64_t FCS:1;
      uint64_t FMS:1;
      uint64_t FES:1;
      uint64_t FNS:1;
      uint64_t CLS:1;
      uint64_t CVS:1;
      uint64_t NRS:1;
      uint64_t SCS:1;
      uint64_t SMS:1;
      uint64_t SES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FCC:1;
      uint64_t FMC:1;
      uint64_t FEC:1;
      uint64_t FNC:1;
      uint64_t CLC:1;
      uint64_t CVC:1;
      uint64_t NRC:1;
      uint64_t SCC:1;
      uint64_t SMC:1;
      uint64_t SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDD:20;
      uint64_t SMGC:1;
      uint64_t reservedSpace0:3;
      uint64_t SCRC:6;
      uint64_t reservedSpace1:1;
      uint64_t SND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPLV:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MLV:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:24;
      uint64_t FCRC:4;
      uint64_t FCCN:2;
      uint64_t FND:1;
      uint64_t SNDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRXD;

};

#define RSENT2 (*(volatile struct RSENT2_tag *) 0xffe07000)

struct RSENT3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTPV:7;
      uint64_t reservedSpace0:1;
      uint64_t TTM:7;
      uint64_t reservedSpace1:1;
      uint64_t TMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCE:1;
      uint64_t NDN:3;
      uint64_t PPC:1;
      uint64_t PPTC:1;
      uint64_t SMF:2;
      uint64_t reservedSpace0:1;
      uint64_t FCCD:1;
      uint64_t SCCD:1;
      uint64_t FCM:1;
      uint64_t SOPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCMV:5;
      uint64_t reservedSpace0:3;
      uint64_t SCDV:7;
      uint64_t reservedSpace1:1;
      uint64_t TTI:7;
      uint64_t reservedSpace2:1;
      uint64_t TTF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIE:1;
      uint64_t FCIE:1;
      uint64_t FMIE:1;
      uint64_t FEIE:1;
      uint64_t FNIE:1;
      uint64_t CLIE:1;
      uint64_t CVIE:1;
      uint64_t NRIE:1;
      uint64_t SCIE:1;
      uint64_t SMIE:1;
      uint64_t SEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRS:1;
      uint64_t FCS:1;
      uint64_t FMS:1;
      uint64_t FES:1;
      uint64_t FNS:1;
      uint64_t CLS:1;
      uint64_t CVS:1;
      uint64_t NRS:1;
      uint64_t SCS:1;
      uint64_t SMS:1;
      uint64_t SES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FCC:1;
      uint64_t FMC:1;
      uint64_t FEC:1;
      uint64_t FNC:1;
      uint64_t CLC:1;
      uint64_t CVC:1;
      uint64_t NRC:1;
      uint64_t SCC:1;
      uint64_t SMC:1;
      uint64_t SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDD:20;
      uint64_t SMGC:1;
      uint64_t reservedSpace0:3;
      uint64_t SCRC:6;
      uint64_t reservedSpace1:1;
      uint64_t SND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPLV:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MLV:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:24;
      uint64_t FCRC:4;
      uint64_t FCCN:2;
      uint64_t FND:1;
      uint64_t SNDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRXD;

};

#define RSENT3 (*(volatile struct RSENT3_tag *) 0xffe08000)

struct RSENT4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTPV:7;
      uint64_t reservedSpace0:1;
      uint64_t TTM:7;
      uint64_t reservedSpace1:1;
      uint64_t TMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCE:1;
      uint64_t NDN:3;
      uint64_t PPC:1;
      uint64_t PPTC:1;
      uint64_t SMF:2;
      uint64_t reservedSpace0:1;
      uint64_t FCCD:1;
      uint64_t SCCD:1;
      uint64_t FCM:1;
      uint64_t SOPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCMV:5;
      uint64_t reservedSpace0:3;
      uint64_t SCDV:7;
      uint64_t reservedSpace1:1;
      uint64_t TTI:7;
      uint64_t reservedSpace2:1;
      uint64_t TTF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIE:1;
      uint64_t FCIE:1;
      uint64_t FMIE:1;
      uint64_t FEIE:1;
      uint64_t FNIE:1;
      uint64_t CLIE:1;
      uint64_t CVIE:1;
      uint64_t NRIE:1;
      uint64_t SCIE:1;
      uint64_t SMIE:1;
      uint64_t SEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRS:1;
      uint64_t FCS:1;
      uint64_t FMS:1;
      uint64_t FES:1;
      uint64_t FNS:1;
      uint64_t CLS:1;
      uint64_t CVS:1;
      uint64_t NRS:1;
      uint64_t SCS:1;
      uint64_t SMS:1;
      uint64_t SES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FCC:1;
      uint64_t FMC:1;
      uint64_t FEC:1;
      uint64_t FNC:1;
      uint64_t CLC:1;
      uint64_t CVC:1;
      uint64_t NRC:1;
      uint64_t SCC:1;
      uint64_t SMC:1;
      uint64_t SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDD:20;
      uint64_t SMGC:1;
      uint64_t reservedSpace0:3;
      uint64_t SCRC:6;
      uint64_t reservedSpace1:1;
      uint64_t SND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPLV:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MLV:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:24;
      uint64_t FCRC:4;
      uint64_t FCCN:2;
      uint64_t FND:1;
      uint64_t SNDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRXD;

};

#define RSENT4 (*(volatile struct RSENT4_tag *) 0xffe09000)

struct RSENT5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TTPV:7;
      uint64_t reservedSpace0:1;
      uint64_t TTM:7;
      uint64_t reservedSpace1:1;
      uint64_t TMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCE:1;
      uint64_t NDN:3;
      uint64_t PPC:1;
      uint64_t PPTC:1;
      uint64_t SMF:2;
      uint64_t reservedSpace0:1;
      uint64_t FCCD:1;
      uint64_t SCCD:1;
      uint64_t FCM:1;
      uint64_t SOPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCMV:5;
      uint64_t reservedSpace0:3;
      uint64_t SCDV:7;
      uint64_t reservedSpace1:1;
      uint64_t TTI:7;
      uint64_t reservedSpace2:1;
      uint64_t TTF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRIE:1;
      uint64_t FCIE:1;
      uint64_t FMIE:1;
      uint64_t FEIE:1;
      uint64_t FNIE:1;
      uint64_t CLIE:1;
      uint64_t CVIE:1;
      uint64_t NRIE:1;
      uint64_t SCIE:1;
      uint64_t SMIE:1;
      uint64_t SEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TLL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRS:1;
      uint64_t FCS:1;
      uint64_t FMS:1;
      uint64_t FES:1;
      uint64_t FNS:1;
      uint64_t CLS:1;
      uint64_t CVS:1;
      uint64_t NRS:1;
      uint64_t SCS:1;
      uint64_t SMS:1;
      uint64_t SES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FCC:1;
      uint64_t FMC:1;
      uint64_t FEC:1;
      uint64_t FNC:1;
      uint64_t CLC:1;
      uint64_t CVC:1;
      uint64_t NRC:1;
      uint64_t SCC:1;
      uint64_t SMC:1;
      uint64_t SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDD:20;
      uint64_t SMGC:1;
      uint64_t reservedSpace0:3;
      uint64_t SCRC:6;
      uint64_t reservedSpace1:1;
      uint64_t SND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPLV:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MLV:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ND:24;
      uint64_t FCRC:4;
      uint64_t FCCN:2;
      uint64_t FND:1;
      uint64_t SNDM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRXD;

};

#define RSENT5 (*(volatile struct RSENT5_tag *) 0xffe0a000)

struct RSENT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSEL0:3;
      uint64_t reservedSpace0:1;
      uint64_t MSSEL1:3;
      uint64_t reservedSpace1:1;
      uint64_t MSSEL2:3;
      uint64_t reservedSpace2:1;
      uint64_t MSSEL3:3;
      uint64_t reservedSpace3:1;
      uint64_t MSSEL4:3;
      uint64_t reservedSpace4:1;
      uint64_t MSSEL5:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSEL;

};

#define RSENT (*(volatile struct RSENT_tag *) 0xffe0f000)

struct TAUD0_tag
{
  uint16_t CDR0;
  uint8_t res0[2];

  uint16_t CDR1;
  uint8_t res1[2];

  uint16_t CDR2;
  uint8_t res2[2];

  uint16_t CDR3;
  uint8_t res3[2];

  uint16_t CDR4;
  uint8_t res4[2];

  uint16_t CDR5;
  uint8_t res5[2];

  uint16_t CDR6;
  uint8_t res6[2];

  uint16_t CDR7;
  uint8_t res7[2];

  uint16_t CDR8;
  uint8_t res8[2];

  uint16_t CDR9;
  uint8_t res9[2];

  uint16_t CDR10;
  uint8_t res10[2];

  uint16_t CDR11;
  uint8_t res11[2];

  uint16_t CDR12;
  uint8_t res12[2];

  uint16_t CDR13;
  uint8_t res13[2];

  uint16_t CDR14;
  uint8_t res14[2];

  uint16_t CDR15;
  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOL00:1;
      uint64_t TOL01:1;
      uint64_t TOL02:1;
      uint64_t TOL03:1;
      uint64_t TOL04:1;
      uint64_t TOL05:1;
      uint64_t TOL06:1;
      uint64_t TOL07:1;
      uint64_t TOL08:1;
      uint64_t TOL09:1;
      uint64_t TOL10:1;
      uint64_t TOL11:1;
      uint64_t TOL12:1;
      uint64_t TOL13:1;
      uint64_t TOL14:1;
      uint64_t TOL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOL;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDT00:1;
      uint64_t RDT01:1;
      uint64_t RDT02:1;
      uint64_t RDT03:1;
      uint64_t RDT04:1;
      uint64_t RDT05:1;
      uint64_t RDT06:1;
      uint64_t RDT07:1;
      uint64_t RDT08:1;
      uint64_t RDT09:1;
      uint64_t RDT10:1;
      uint64_t RDT11:1;
      uint64_t RDT12:1;
      uint64_t RDT13:1;
      uint64_t RDT14:1;
      uint64_t RDT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDT;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RSF00:1;
      uint64_t RSF01:1;
      uint64_t RSF02:1;
      uint64_t RSF03:1;
      uint64_t RSF04:1;
      uint64_t RSF05:1;
      uint64_t RSF06:1;
      uint64_t RSF07:1;
      uint64_t RSF08:1;
      uint64_t RSF09:1;
      uint64_t RSF10:1;
      uint64_t RSF11:1;
      uint64_t RSF12:1;
      uint64_t RSF13:1;
      uint64_t RSF14:1;
      uint64_t RSF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RSF;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRO00:1;
      uint64_t TRO01:1;
      uint64_t TRO02:1;
      uint64_t TRO03:1;
      uint64_t TRO04:1;
      uint64_t TRO05:1;
      uint64_t TRO06:1;
      uint64_t TRO07:1;
      uint64_t TRO08:1;
      uint64_t TRO09:1;
      uint64_t TRO10:1;
      uint64_t TRO11:1;
      uint64_t TRO12:1;
      uint64_t TRO13:1;
      uint64_t TRO14:1;
      uint64_t TRO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRO;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TME00:1;
      uint64_t TME01:1;
      uint64_t TME02:1;
      uint64_t TME03:1;
      uint64_t TME04:1;
      uint64_t TME05:1;
      uint64_t TME06:1;
      uint64_t TME07:1;
      uint64_t TME08:1;
      uint64_t TME09:1;
      uint64_t TME10:1;
      uint64_t TME11:1;
      uint64_t TME12:1;
      uint64_t TME13:1;
      uint64_t TME14:1;
      uint64_t TME15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TME;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDL00:1;
      uint64_t TDL01:1;
      uint64_t TDL02:1;
      uint64_t TDL03:1;
      uint64_t TDL04:1;
      uint64_t TDL05:1;
      uint64_t TDL06:1;
      uint64_t TDL07:1;
      uint64_t TDL08:1;
      uint64_t TDL09:1;
      uint64_t TDL10:1;
      uint64_t TDL11:1;
      uint64_t TDL12:1;
      uint64_t TDL13:1;
      uint64_t TDL14:1;
      uint64_t TDL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDL;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TO00:1;
      uint64_t TO01:1;
      uint64_t TO02:1;
      uint64_t TO03:1;
      uint64_t TO04:1;
      uint64_t TO05:1;
      uint64_t TO06:1;
      uint64_t TO07:1;
      uint64_t TO08:1;
      uint64_t TO09:1;
      uint64_t TO10:1;
      uint64_t TO11:1;
      uint64_t TO12:1;
      uint64_t TO13:1;
      uint64_t TO14:1;
      uint64_t TO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TO;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOE00:1;
      uint64_t TOE01:1;
      uint64_t TOE02:1;
      uint64_t TOE03:1;
      uint64_t TOE04:1;
      uint64_t TOE05:1;
      uint64_t TOE06:1;
      uint64_t TOE07:1;
      uint64_t TOE08:1;
      uint64_t TOE09:1;
      uint64_t TOE10:1;
      uint64_t TOE11:1;
      uint64_t TOE12:1;
      uint64_t TOE13:1;
      uint64_t TOE14:1;
      uint64_t TOE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOE;

  uint8_t res23[34];

  uint16_t CNT0;
  uint8_t res24[2];

  uint16_t CNT1;
  uint8_t res25[2];

  uint16_t CNT2;
  uint8_t res26[2];

  uint16_t CNT3;
  uint8_t res27[2];

  uint16_t CNT4;
  uint8_t res28[2];

  uint16_t CNT5;
  uint8_t res29[2];

  uint16_t CNT6;
  uint8_t res30[2];

  uint16_t CNT7;
  uint8_t res31[2];

  uint16_t CNT8;
  uint8_t res32[2];

  uint16_t CNT9;
  uint8_t res33[2];

  uint16_t CNT10;
  uint8_t res34[2];

  uint16_t CNT11;
  uint8_t res35[2];

  uint16_t CNT12;
  uint8_t res36[2];

  uint16_t CNT13;
  uint8_t res37[2];

  uint16_t CNT14;
  uint8_t res38[2];

  uint16_t CNT15;
  uint8_t res39[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR0;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR1;

  uint8_t res41[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR2;

  uint8_t res42[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR3;

  uint8_t res43[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR4;

  uint8_t res44[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR5;

  uint8_t res45[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR6;

  uint8_t res46[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR7;

  uint8_t res47[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR8;

  uint8_t res48[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR9;

  uint8_t res49[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR10;

  uint8_t res50[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR11;

  uint8_t res51[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR12;

  uint8_t res52[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR13;

  uint8_t res53[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR14;

  uint8_t res54[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR15;

  uint8_t res55[67];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR0;

  uint8_t res56[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR1;

  uint8_t res57[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR2;

  uint8_t res58[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR3;

  uint8_t res59[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR4;

  uint8_t res60[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR5;

  uint8_t res61[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR6;

  uint8_t res62[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR7;

  uint8_t res63[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR8;

  uint8_t res64[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR9;

  uint8_t res65[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR10;

  uint8_t res66[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR11;

  uint8_t res67[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR12;

  uint8_t res68[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR13;

  uint8_t res69[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR14;

  uint8_t res70[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR15;

  uint8_t res71[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC0;

  uint8_t res72[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC1;

  uint8_t res73[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC2;

  uint8_t res74[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC3;

  uint8_t res75[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC4;

  uint8_t res76[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC5;

  uint8_t res77[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC6;

  uint8_t res78[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC7;

  uint8_t res79[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC8;

  uint8_t res80[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC9;

  uint8_t res81[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC10;

  uint8_t res82[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC11;

  uint8_t res83[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC12;

  uint8_t res84[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC13;

  uint8_t res85[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC14;

  uint8_t res86[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC15;

  uint8_t res87[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TE00:1;
      uint64_t TE01:1;
      uint64_t TE02:1;
      uint64_t TE03:1;
      uint64_t TE04:1;
      uint64_t TE05:1;
      uint64_t TE06:1;
      uint64_t TE07:1;
      uint64_t TE08:1;
      uint64_t TE09:1;
      uint64_t TE10:1;
      uint64_t TE11:1;
      uint64_t TE12:1;
      uint64_t TE13:1;
      uint64_t TE14:1;
      uint64_t TE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TE;

  uint8_t res88[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TS00:1;
      uint64_t TS01:1;
      uint64_t TS02:1;
      uint64_t TS03:1;
      uint64_t TS04:1;
      uint64_t TS05:1;
      uint64_t TS06:1;
      uint64_t TS07:1;
      uint64_t TS08:1;
      uint64_t TS09:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TS;

  uint8_t res89[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TT00:1;
      uint64_t TT01:1;
      uint64_t TT02:1;
      uint64_t TT03:1;
      uint64_t TT04:1;
      uint64_t TT05:1;
      uint64_t TT06:1;
      uint64_t TT07:1;
      uint64_t TT08:1;
      uint64_t TT09:1;
      uint64_t TT10:1;
      uint64_t TT11:1;
      uint64_t TT12:1;
      uint64_t TT13:1;
      uint64_t TT14:1;
      uint64_t TT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TT;

  uint8_t res90[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR0;

  uint8_t res91[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR1;

  uint8_t res92[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR2;

  uint8_t res93[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR3;

  uint8_t res94[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR4;

  uint8_t res95[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR5;

  uint8_t res96[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR6;

  uint8_t res97[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR7;

  uint8_t res98[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR8;

  uint8_t res99[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR9;

  uint8_t res100[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR10;

  uint8_t res101[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR11;

  uint8_t res102[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR12;

  uint8_t res103[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR13;

  uint8_t res104[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR14;

  uint8_t res105[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR15;

  uint8_t res106[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRS0:4;
      uint64_t PRS1:4;
      uint64_t PRS2:4;
      uint64_t PRS3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TPS;

  uint8_t res107[2];

  uint8_t BRS;
  uint8_t res108[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOM00:1;
      uint64_t TOM01:1;
      uint64_t TOM02:1;
      uint64_t TOM03:1;
      uint64_t TOM04:1;
      uint64_t TOM05:1;
      uint64_t TOM06:1;
      uint64_t TOM07:1;
      uint64_t TOM08:1;
      uint64_t TOM09:1;
      uint64_t TOM10:1;
      uint64_t TOM11:1;
      uint64_t TOM12:1;
      uint64_t TOM13:1;
      uint64_t TOM14:1;
      uint64_t TOM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOM;

  uint8_t res109[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOC00:1;
      uint64_t TOC01:1;
      uint64_t TOC02:1;
      uint64_t TOC03:1;
      uint64_t TOC04:1;
      uint64_t TOC05:1;
      uint64_t TOC06:1;
      uint64_t TOC07:1;
      uint64_t TOC08:1;
      uint64_t TOC09:1;
      uint64_t TOC10:1;
      uint64_t TOC11:1;
      uint64_t TOC12:1;
      uint64_t TOC13:1;
      uint64_t TOC14:1;
      uint64_t TOC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOC;

  uint8_t res110[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDE00:1;
      uint64_t TDE01:1;
      uint64_t TDE02:1;
      uint64_t TDE03:1;
      uint64_t TDE04:1;
      uint64_t TDE05:1;
      uint64_t TDE06:1;
      uint64_t TDE07:1;
      uint64_t TDE08:1;
      uint64_t TDE09:1;
      uint64_t TDE10:1;
      uint64_t TDE11:1;
      uint64_t TDE12:1;
      uint64_t TDE13:1;
      uint64_t TDE14:1;
      uint64_t TDE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDE;

  uint8_t res111[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDM00:1;
      uint64_t TDM01:1;
      uint64_t TDM02:1;
      uint64_t TDM03:1;
      uint64_t TDM04:1;
      uint64_t TDM05:1;
      uint64_t TDM06:1;
      uint64_t TDM07:1;
      uint64_t TDM08:1;
      uint64_t TDM09:1;
      uint64_t TDM10:1;
      uint64_t TDM11:1;
      uint64_t TDM12:1;
      uint64_t TDM13:1;
      uint64_t TDM14:1;
      uint64_t TDM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDM;

  uint8_t res112[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRE00:1;
      uint64_t TRE01:1;
      uint64_t TRE02:1;
      uint64_t TRE03:1;
      uint64_t TRE04:1;
      uint64_t TRE05:1;
      uint64_t TRE06:1;
      uint64_t TRE07:1;
      uint64_t TRE08:1;
      uint64_t TRE09:1;
      uint64_t TRE10:1;
      uint64_t TRE11:1;
      uint64_t TRE12:1;
      uint64_t TRE13:1;
      uint64_t TRE14:1;
      uint64_t TRE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRE;

  uint8_t res113[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRC00:1;
      uint64_t TRC01:1;
      uint64_t TRC02:1;
      uint64_t TRC03:1;
      uint64_t TRC04:1;
      uint64_t TRC05:1;
      uint64_t TRC06:1;
      uint64_t TRC07:1;
      uint64_t TRC08:1;
      uint64_t TRC09:1;
      uint64_t TRC10:1;
      uint64_t TRC11:1;
      uint64_t TRC12:1;
      uint64_t TRC13:1;
      uint64_t TRC14:1;
      uint64_t TRC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRC;

  uint8_t res114[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDE00:1;
      uint64_t RDE01:1;
      uint64_t RDE02:1;
      uint64_t RDE03:1;
      uint64_t RDE04:1;
      uint64_t RDE05:1;
      uint64_t RDE06:1;
      uint64_t RDE07:1;
      uint64_t RDE08:1;
      uint64_t RDE09:1;
      uint64_t RDE10:1;
      uint64_t RDE11:1;
      uint64_t RDE12:1;
      uint64_t RDE13:1;
      uint64_t RDE14:1;
      uint64_t RDE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDE;

  uint8_t res115[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDM00:1;
      uint64_t RDM01:1;
      uint64_t RDM02:1;
      uint64_t RDM03:1;
      uint64_t RDM04:1;
      uint64_t RDM05:1;
      uint64_t RDM06:1;
      uint64_t RDM07:1;
      uint64_t RDM08:1;
      uint64_t RDM09:1;
      uint64_t RDM10:1;
      uint64_t RDM11:1;
      uint64_t RDM12:1;
      uint64_t RDM13:1;
      uint64_t RDM14:1;
      uint64_t RDM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDM;

  uint8_t res116[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDS00:1;
      uint64_t RDS01:1;
      uint64_t RDS02:1;
      uint64_t RDS03:1;
      uint64_t RDS04:1;
      uint64_t RDS05:1;
      uint64_t RDS06:1;
      uint64_t RDS07:1;
      uint64_t RDS08:1;
      uint64_t RDS09:1;
      uint64_t RDS10:1;
      uint64_t RDS11:1;
      uint64_t RDS12:1;
      uint64_t RDS13:1;
      uint64_t RDS14:1;
      uint64_t RDS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDS;

  uint8_t res117[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDC00:1;
      uint64_t RDC01:1;
      uint64_t RDC02:1;
      uint64_t RDC03:1;
      uint64_t RDC04:1;
      uint64_t RDC05:1;
      uint64_t RDC06:1;
      uint64_t RDC07:1;
      uint64_t RDC08:1;
      uint64_t RDC09:1;
      uint64_t RDC10:1;
      uint64_t RDC11:1;
      uint64_t RDC12:1;
      uint64_t RDC13:1;
      uint64_t RDC14:1;
      uint64_t RDC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDC;

};

#define TAUD0 (*(volatile struct TAUD0_tag *) 0xffe20000)

struct TAUD1_tag
{
  uint16_t CDR0;
  uint8_t res0[2];

  uint16_t CDR1;
  uint8_t res1[2];

  uint16_t CDR2;
  uint8_t res2[2];

  uint16_t CDR3;
  uint8_t res3[2];

  uint16_t CDR4;
  uint8_t res4[2];

  uint16_t CDR5;
  uint8_t res5[2];

  uint16_t CDR6;
  uint8_t res6[2];

  uint16_t CDR7;
  uint8_t res7[2];

  uint16_t CDR8;
  uint8_t res8[2];

  uint16_t CDR9;
  uint8_t res9[2];

  uint16_t CDR10;
  uint8_t res10[2];

  uint16_t CDR11;
  uint8_t res11[2];

  uint16_t CDR12;
  uint8_t res12[2];

  uint16_t CDR13;
  uint8_t res13[2];

  uint16_t CDR14;
  uint8_t res14[2];

  uint16_t CDR15;
  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOL00:1;
      uint64_t TOL01:1;
      uint64_t TOL02:1;
      uint64_t TOL03:1;
      uint64_t TOL04:1;
      uint64_t TOL05:1;
      uint64_t TOL06:1;
      uint64_t TOL07:1;
      uint64_t TOL08:1;
      uint64_t TOL09:1;
      uint64_t TOL10:1;
      uint64_t TOL11:1;
      uint64_t TOL12:1;
      uint64_t TOL13:1;
      uint64_t TOL14:1;
      uint64_t TOL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOL;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDT00:1;
      uint64_t RDT01:1;
      uint64_t RDT02:1;
      uint64_t RDT03:1;
      uint64_t RDT04:1;
      uint64_t RDT05:1;
      uint64_t RDT06:1;
      uint64_t RDT07:1;
      uint64_t RDT08:1;
      uint64_t RDT09:1;
      uint64_t RDT10:1;
      uint64_t RDT11:1;
      uint64_t RDT12:1;
      uint64_t RDT13:1;
      uint64_t RDT14:1;
      uint64_t RDT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDT;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RSF00:1;
      uint64_t RSF01:1;
      uint64_t RSF02:1;
      uint64_t RSF03:1;
      uint64_t RSF04:1;
      uint64_t RSF05:1;
      uint64_t RSF06:1;
      uint64_t RSF07:1;
      uint64_t RSF08:1;
      uint64_t RSF09:1;
      uint64_t RSF10:1;
      uint64_t RSF11:1;
      uint64_t RSF12:1;
      uint64_t RSF13:1;
      uint64_t RSF14:1;
      uint64_t RSF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RSF;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRO00:1;
      uint64_t TRO01:1;
      uint64_t TRO02:1;
      uint64_t TRO03:1;
      uint64_t TRO04:1;
      uint64_t TRO05:1;
      uint64_t TRO06:1;
      uint64_t TRO07:1;
      uint64_t TRO08:1;
      uint64_t TRO09:1;
      uint64_t TRO10:1;
      uint64_t TRO11:1;
      uint64_t TRO12:1;
      uint64_t TRO13:1;
      uint64_t TRO14:1;
      uint64_t TRO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRO;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TME00:1;
      uint64_t TME01:1;
      uint64_t TME02:1;
      uint64_t TME03:1;
      uint64_t TME04:1;
      uint64_t TME05:1;
      uint64_t TME06:1;
      uint64_t TME07:1;
      uint64_t TME08:1;
      uint64_t TME09:1;
      uint64_t TME10:1;
      uint64_t TME11:1;
      uint64_t TME12:1;
      uint64_t TME13:1;
      uint64_t TME14:1;
      uint64_t TME15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TME;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDL00:1;
      uint64_t TDL01:1;
      uint64_t TDL02:1;
      uint64_t TDL03:1;
      uint64_t TDL04:1;
      uint64_t TDL05:1;
      uint64_t TDL06:1;
      uint64_t TDL07:1;
      uint64_t TDL08:1;
      uint64_t TDL09:1;
      uint64_t TDL10:1;
      uint64_t TDL11:1;
      uint64_t TDL12:1;
      uint64_t TDL13:1;
      uint64_t TDL14:1;
      uint64_t TDL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDL;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TO00:1;
      uint64_t TO01:1;
      uint64_t TO02:1;
      uint64_t TO03:1;
      uint64_t TO04:1;
      uint64_t TO05:1;
      uint64_t TO06:1;
      uint64_t TO07:1;
      uint64_t TO08:1;
      uint64_t TO09:1;
      uint64_t TO10:1;
      uint64_t TO11:1;
      uint64_t TO12:1;
      uint64_t TO13:1;
      uint64_t TO14:1;
      uint64_t TO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TO;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOE00:1;
      uint64_t TOE01:1;
      uint64_t TOE02:1;
      uint64_t TOE03:1;
      uint64_t TOE04:1;
      uint64_t TOE05:1;
      uint64_t TOE06:1;
      uint64_t TOE07:1;
      uint64_t TOE08:1;
      uint64_t TOE09:1;
      uint64_t TOE10:1;
      uint64_t TOE11:1;
      uint64_t TOE12:1;
      uint64_t TOE13:1;
      uint64_t TOE14:1;
      uint64_t TOE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOE;

  uint8_t res23[34];

  uint16_t CNT0;
  uint8_t res24[2];

  uint16_t CNT1;
  uint8_t res25[2];

  uint16_t CNT2;
  uint8_t res26[2];

  uint16_t CNT3;
  uint8_t res27[2];

  uint16_t CNT4;
  uint8_t res28[2];

  uint16_t CNT5;
  uint8_t res29[2];

  uint16_t CNT6;
  uint8_t res30[2];

  uint16_t CNT7;
  uint8_t res31[2];

  uint16_t CNT8;
  uint8_t res32[2];

  uint16_t CNT9;
  uint8_t res33[2];

  uint16_t CNT10;
  uint8_t res34[2];

  uint16_t CNT11;
  uint8_t res35[2];

  uint16_t CNT12;
  uint8_t res36[2];

  uint16_t CNT13;
  uint8_t res37[2];

  uint16_t CNT14;
  uint8_t res38[2];

  uint16_t CNT15;
  uint8_t res39[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR0;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR1;

  uint8_t res41[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR2;

  uint8_t res42[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR3;

  uint8_t res43[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR4;

  uint8_t res44[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR5;

  uint8_t res45[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR6;

  uint8_t res46[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR7;

  uint8_t res47[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR8;

  uint8_t res48[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR9;

  uint8_t res49[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR10;

  uint8_t res50[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR11;

  uint8_t res51[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR12;

  uint8_t res52[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR13;

  uint8_t res53[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR14;

  uint8_t res54[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR15;

  uint8_t res55[67];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR0;

  uint8_t res56[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR1;

  uint8_t res57[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR2;

  uint8_t res58[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR3;

  uint8_t res59[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR4;

  uint8_t res60[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR5;

  uint8_t res61[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR6;

  uint8_t res62[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR7;

  uint8_t res63[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR8;

  uint8_t res64[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR9;

  uint8_t res65[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR10;

  uint8_t res66[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR11;

  uint8_t res67[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR12;

  uint8_t res68[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR13;

  uint8_t res69[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR14;

  uint8_t res70[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR15;

  uint8_t res71[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC0;

  uint8_t res72[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC1;

  uint8_t res73[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC2;

  uint8_t res74[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC3;

  uint8_t res75[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC4;

  uint8_t res76[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC5;

  uint8_t res77[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC6;

  uint8_t res78[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC7;

  uint8_t res79[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC8;

  uint8_t res80[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC9;

  uint8_t res81[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC10;

  uint8_t res82[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC11;

  uint8_t res83[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC12;

  uint8_t res84[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC13;

  uint8_t res85[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC14;

  uint8_t res86[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC15;

  uint8_t res87[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TE00:1;
      uint64_t TE01:1;
      uint64_t TE02:1;
      uint64_t TE03:1;
      uint64_t TE04:1;
      uint64_t TE05:1;
      uint64_t TE06:1;
      uint64_t TE07:1;
      uint64_t TE08:1;
      uint64_t TE09:1;
      uint64_t TE10:1;
      uint64_t TE11:1;
      uint64_t TE12:1;
      uint64_t TE13:1;
      uint64_t TE14:1;
      uint64_t TE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TE;

  uint8_t res88[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TS00:1;
      uint64_t TS01:1;
      uint64_t TS02:1;
      uint64_t TS03:1;
      uint64_t TS04:1;
      uint64_t TS05:1;
      uint64_t TS06:1;
      uint64_t TS07:1;
      uint64_t TS08:1;
      uint64_t TS09:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TS;

  uint8_t res89[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TT00:1;
      uint64_t TT01:1;
      uint64_t TT02:1;
      uint64_t TT03:1;
      uint64_t TT04:1;
      uint64_t TT05:1;
      uint64_t TT06:1;
      uint64_t TT07:1;
      uint64_t TT08:1;
      uint64_t TT09:1;
      uint64_t TT10:1;
      uint64_t TT11:1;
      uint64_t TT12:1;
      uint64_t TT13:1;
      uint64_t TT14:1;
      uint64_t TT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TT;

  uint8_t res90[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR0;

  uint8_t res91[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR1;

  uint8_t res92[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR2;

  uint8_t res93[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR3;

  uint8_t res94[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR4;

  uint8_t res95[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR5;

  uint8_t res96[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR6;

  uint8_t res97[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR7;

  uint8_t res98[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR8;

  uint8_t res99[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR9;

  uint8_t res100[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR10;

  uint8_t res101[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR11;

  uint8_t res102[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR12;

  uint8_t res103[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR13;

  uint8_t res104[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR14;

  uint8_t res105[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR15;

  uint8_t res106[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRS0:4;
      uint64_t PRS1:4;
      uint64_t PRS2:4;
      uint64_t PRS3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TPS;

  uint8_t res107[2];

  uint8_t BRS;
  uint8_t res108[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOM00:1;
      uint64_t TOM01:1;
      uint64_t TOM02:1;
      uint64_t TOM03:1;
      uint64_t TOM04:1;
      uint64_t TOM05:1;
      uint64_t TOM06:1;
      uint64_t TOM07:1;
      uint64_t TOM08:1;
      uint64_t TOM09:1;
      uint64_t TOM10:1;
      uint64_t TOM11:1;
      uint64_t TOM12:1;
      uint64_t TOM13:1;
      uint64_t TOM14:1;
      uint64_t TOM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOM;

  uint8_t res109[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOC00:1;
      uint64_t TOC01:1;
      uint64_t TOC02:1;
      uint64_t TOC03:1;
      uint64_t TOC04:1;
      uint64_t TOC05:1;
      uint64_t TOC06:1;
      uint64_t TOC07:1;
      uint64_t TOC08:1;
      uint64_t TOC09:1;
      uint64_t TOC10:1;
      uint64_t TOC11:1;
      uint64_t TOC12:1;
      uint64_t TOC13:1;
      uint64_t TOC14:1;
      uint64_t TOC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOC;

  uint8_t res110[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDE00:1;
      uint64_t TDE01:1;
      uint64_t TDE02:1;
      uint64_t TDE03:1;
      uint64_t TDE04:1;
      uint64_t TDE05:1;
      uint64_t TDE06:1;
      uint64_t TDE07:1;
      uint64_t TDE08:1;
      uint64_t TDE09:1;
      uint64_t TDE10:1;
      uint64_t TDE11:1;
      uint64_t TDE12:1;
      uint64_t TDE13:1;
      uint64_t TDE14:1;
      uint64_t TDE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDE;

  uint8_t res111[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDM00:1;
      uint64_t TDM01:1;
      uint64_t TDM02:1;
      uint64_t TDM03:1;
      uint64_t TDM04:1;
      uint64_t TDM05:1;
      uint64_t TDM06:1;
      uint64_t TDM07:1;
      uint64_t TDM08:1;
      uint64_t TDM09:1;
      uint64_t TDM10:1;
      uint64_t TDM11:1;
      uint64_t TDM12:1;
      uint64_t TDM13:1;
      uint64_t TDM14:1;
      uint64_t TDM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDM;

  uint8_t res112[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRE00:1;
      uint64_t TRE01:1;
      uint64_t TRE02:1;
      uint64_t TRE03:1;
      uint64_t TRE04:1;
      uint64_t TRE05:1;
      uint64_t TRE06:1;
      uint64_t TRE07:1;
      uint64_t TRE08:1;
      uint64_t TRE09:1;
      uint64_t TRE10:1;
      uint64_t TRE11:1;
      uint64_t TRE12:1;
      uint64_t TRE13:1;
      uint64_t TRE14:1;
      uint64_t TRE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRE;

  uint8_t res113[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRC00:1;
      uint64_t TRC01:1;
      uint64_t TRC02:1;
      uint64_t TRC03:1;
      uint64_t TRC04:1;
      uint64_t TRC05:1;
      uint64_t TRC06:1;
      uint64_t TRC07:1;
      uint64_t TRC08:1;
      uint64_t TRC09:1;
      uint64_t TRC10:1;
      uint64_t TRC11:1;
      uint64_t TRC12:1;
      uint64_t TRC13:1;
      uint64_t TRC14:1;
      uint64_t TRC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRC;

  uint8_t res114[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDE00:1;
      uint64_t RDE01:1;
      uint64_t RDE02:1;
      uint64_t RDE03:1;
      uint64_t RDE04:1;
      uint64_t RDE05:1;
      uint64_t RDE06:1;
      uint64_t RDE07:1;
      uint64_t RDE08:1;
      uint64_t RDE09:1;
      uint64_t RDE10:1;
      uint64_t RDE11:1;
      uint64_t RDE12:1;
      uint64_t RDE13:1;
      uint64_t RDE14:1;
      uint64_t RDE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDE;

  uint8_t res115[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDM00:1;
      uint64_t RDM01:1;
      uint64_t RDM02:1;
      uint64_t RDM03:1;
      uint64_t RDM04:1;
      uint64_t RDM05:1;
      uint64_t RDM06:1;
      uint64_t RDM07:1;
      uint64_t RDM08:1;
      uint64_t RDM09:1;
      uint64_t RDM10:1;
      uint64_t RDM11:1;
      uint64_t RDM12:1;
      uint64_t RDM13:1;
      uint64_t RDM14:1;
      uint64_t RDM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDM;

  uint8_t res116[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDS00:1;
      uint64_t RDS01:1;
      uint64_t RDS02:1;
      uint64_t RDS03:1;
      uint64_t RDS04:1;
      uint64_t RDS05:1;
      uint64_t RDS06:1;
      uint64_t RDS07:1;
      uint64_t RDS08:1;
      uint64_t RDS09:1;
      uint64_t RDS10:1;
      uint64_t RDS11:1;
      uint64_t RDS12:1;
      uint64_t RDS13:1;
      uint64_t RDS14:1;
      uint64_t RDS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDS;

  uint8_t res117[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDC00:1;
      uint64_t RDC01:1;
      uint64_t RDC02:1;
      uint64_t RDC03:1;
      uint64_t RDC04:1;
      uint64_t RDC05:1;
      uint64_t RDC06:1;
      uint64_t RDC07:1;
      uint64_t RDC08:1;
      uint64_t RDC09:1;
      uint64_t RDC10:1;
      uint64_t RDC11:1;
      uint64_t RDC12:1;
      uint64_t RDC13:1;
      uint64_t RDC14:1;
      uint64_t RDC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDC;

};

#define TAUD1 (*(volatile struct TAUD1_tag *) 0xffe21000)

struct TAUD2_tag
{
  uint16_t CDR0;
  uint8_t res0[2];

  uint16_t CDR1;
  uint8_t res1[2];

  uint16_t CDR2;
  uint8_t res2[2];

  uint16_t CDR3;
  uint8_t res3[2];

  uint16_t CDR4;
  uint8_t res4[2];

  uint16_t CDR5;
  uint8_t res5[2];

  uint16_t CDR6;
  uint8_t res6[2];

  uint16_t CDR7;
  uint8_t res7[2];

  uint16_t CDR8;
  uint8_t res8[2];

  uint16_t CDR9;
  uint8_t res9[2];

  uint16_t CDR10;
  uint8_t res10[2];

  uint16_t CDR11;
  uint8_t res11[2];

  uint16_t CDR12;
  uint8_t res12[2];

  uint16_t CDR13;
  uint8_t res13[2];

  uint16_t CDR14;
  uint8_t res14[2];

  uint16_t CDR15;
  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOL00:1;
      uint64_t TOL01:1;
      uint64_t TOL02:1;
      uint64_t TOL03:1;
      uint64_t TOL04:1;
      uint64_t TOL05:1;
      uint64_t TOL06:1;
      uint64_t TOL07:1;
      uint64_t TOL08:1;
      uint64_t TOL09:1;
      uint64_t TOL10:1;
      uint64_t TOL11:1;
      uint64_t TOL12:1;
      uint64_t TOL13:1;
      uint64_t TOL14:1;
      uint64_t TOL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOL;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDT00:1;
      uint64_t RDT01:1;
      uint64_t RDT02:1;
      uint64_t RDT03:1;
      uint64_t RDT04:1;
      uint64_t RDT05:1;
      uint64_t RDT06:1;
      uint64_t RDT07:1;
      uint64_t RDT08:1;
      uint64_t RDT09:1;
      uint64_t RDT10:1;
      uint64_t RDT11:1;
      uint64_t RDT12:1;
      uint64_t RDT13:1;
      uint64_t RDT14:1;
      uint64_t RDT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDT;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RSF00:1;
      uint64_t RSF01:1;
      uint64_t RSF02:1;
      uint64_t RSF03:1;
      uint64_t RSF04:1;
      uint64_t RSF05:1;
      uint64_t RSF06:1;
      uint64_t RSF07:1;
      uint64_t RSF08:1;
      uint64_t RSF09:1;
      uint64_t RSF10:1;
      uint64_t RSF11:1;
      uint64_t RSF12:1;
      uint64_t RSF13:1;
      uint64_t RSF14:1;
      uint64_t RSF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RSF;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRO00:1;
      uint64_t TRO01:1;
      uint64_t TRO02:1;
      uint64_t TRO03:1;
      uint64_t TRO04:1;
      uint64_t TRO05:1;
      uint64_t TRO06:1;
      uint64_t TRO07:1;
      uint64_t TRO08:1;
      uint64_t TRO09:1;
      uint64_t TRO10:1;
      uint64_t TRO11:1;
      uint64_t TRO12:1;
      uint64_t TRO13:1;
      uint64_t TRO14:1;
      uint64_t TRO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRO;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TME00:1;
      uint64_t TME01:1;
      uint64_t TME02:1;
      uint64_t TME03:1;
      uint64_t TME04:1;
      uint64_t TME05:1;
      uint64_t TME06:1;
      uint64_t TME07:1;
      uint64_t TME08:1;
      uint64_t TME09:1;
      uint64_t TME10:1;
      uint64_t TME11:1;
      uint64_t TME12:1;
      uint64_t TME13:1;
      uint64_t TME14:1;
      uint64_t TME15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TME;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDL00:1;
      uint64_t TDL01:1;
      uint64_t TDL02:1;
      uint64_t TDL03:1;
      uint64_t TDL04:1;
      uint64_t TDL05:1;
      uint64_t TDL06:1;
      uint64_t TDL07:1;
      uint64_t TDL08:1;
      uint64_t TDL09:1;
      uint64_t TDL10:1;
      uint64_t TDL11:1;
      uint64_t TDL12:1;
      uint64_t TDL13:1;
      uint64_t TDL14:1;
      uint64_t TDL15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDL;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TO00:1;
      uint64_t TO01:1;
      uint64_t TO02:1;
      uint64_t TO03:1;
      uint64_t TO04:1;
      uint64_t TO05:1;
      uint64_t TO06:1;
      uint64_t TO07:1;
      uint64_t TO08:1;
      uint64_t TO09:1;
      uint64_t TO10:1;
      uint64_t TO11:1;
      uint64_t TO12:1;
      uint64_t TO13:1;
      uint64_t TO14:1;
      uint64_t TO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TO;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOE00:1;
      uint64_t TOE01:1;
      uint64_t TOE02:1;
      uint64_t TOE03:1;
      uint64_t TOE04:1;
      uint64_t TOE05:1;
      uint64_t TOE06:1;
      uint64_t TOE07:1;
      uint64_t TOE08:1;
      uint64_t TOE09:1;
      uint64_t TOE10:1;
      uint64_t TOE11:1;
      uint64_t TOE12:1;
      uint64_t TOE13:1;
      uint64_t TOE14:1;
      uint64_t TOE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOE;

  uint8_t res23[34];

  uint16_t CNT0;
  uint8_t res24[2];

  uint16_t CNT1;
  uint8_t res25[2];

  uint16_t CNT2;
  uint8_t res26[2];

  uint16_t CNT3;
  uint8_t res27[2];

  uint16_t CNT4;
  uint8_t res28[2];

  uint16_t CNT5;
  uint8_t res29[2];

  uint16_t CNT6;
  uint8_t res30[2];

  uint16_t CNT7;
  uint8_t res31[2];

  uint16_t CNT8;
  uint8_t res32[2];

  uint16_t CNT9;
  uint8_t res33[2];

  uint16_t CNT10;
  uint8_t res34[2];

  uint16_t CNT11;
  uint8_t res35[2];

  uint16_t CNT12;
  uint8_t res36[2];

  uint16_t CNT13;
  uint8_t res37[2];

  uint16_t CNT14;
  uint8_t res38[2];

  uint16_t CNT15;
  uint8_t res39[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR0;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR1;

  uint8_t res41[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR2;

  uint8_t res42[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR3;

  uint8_t res43[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR4;

  uint8_t res44[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR5;

  uint8_t res45[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR6;

  uint8_t res46[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR7;

  uint8_t res47[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR8;

  uint8_t res48[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR9;

  uint8_t res49[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR10;

  uint8_t res50[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR11;

  uint8_t res51[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR12;

  uint8_t res52[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR13;

  uint8_t res53[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR14;

  uint8_t res54[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR15;

  uint8_t res55[67];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR0;

  uint8_t res56[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR1;

  uint8_t res57[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR2;

  uint8_t res58[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR3;

  uint8_t res59[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR4;

  uint8_t res60[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR5;

  uint8_t res61[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR6;

  uint8_t res62[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR7;

  uint8_t res63[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR8;

  uint8_t res64[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR9;

  uint8_t res65[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR10;

  uint8_t res66[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR11;

  uint8_t res67[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR12;

  uint8_t res68[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR13;

  uint8_t res69[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR14;

  uint8_t res70[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR15;

  uint8_t res71[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC0;

  uint8_t res72[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC1;

  uint8_t res73[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC2;

  uint8_t res74[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC3;

  uint8_t res75[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC4;

  uint8_t res76[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC5;

  uint8_t res77[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC6;

  uint8_t res78[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC7;

  uint8_t res79[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC8;

  uint8_t res80[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC9;

  uint8_t res81[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC10;

  uint8_t res82[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC11;

  uint8_t res83[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC12;

  uint8_t res84[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC13;

  uint8_t res85[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC14;

  uint8_t res86[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC15;

  uint8_t res87[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TE00:1;
      uint64_t TE01:1;
      uint64_t TE02:1;
      uint64_t TE03:1;
      uint64_t TE04:1;
      uint64_t TE05:1;
      uint64_t TE06:1;
      uint64_t TE07:1;
      uint64_t TE08:1;
      uint64_t TE09:1;
      uint64_t TE10:1;
      uint64_t TE11:1;
      uint64_t TE12:1;
      uint64_t TE13:1;
      uint64_t TE14:1;
      uint64_t TE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TE;

  uint8_t res88[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TS00:1;
      uint64_t TS01:1;
      uint64_t TS02:1;
      uint64_t TS03:1;
      uint64_t TS04:1;
      uint64_t TS05:1;
      uint64_t TS06:1;
      uint64_t TS07:1;
      uint64_t TS08:1;
      uint64_t TS09:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TS;

  uint8_t res89[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TT00:1;
      uint64_t TT01:1;
      uint64_t TT02:1;
      uint64_t TT03:1;
      uint64_t TT04:1;
      uint64_t TT05:1;
      uint64_t TT06:1;
      uint64_t TT07:1;
      uint64_t TT08:1;
      uint64_t TT09:1;
      uint64_t TT10:1;
      uint64_t TT11:1;
      uint64_t TT12:1;
      uint64_t TT13:1;
      uint64_t TT14:1;
      uint64_t TT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TT;

  uint8_t res90[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR0;

  uint8_t res91[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR1;

  uint8_t res92[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR2;

  uint8_t res93[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR3;

  uint8_t res94[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR4;

  uint8_t res95[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR5;

  uint8_t res96[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR6;

  uint8_t res97[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR7;

  uint8_t res98[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR8;

  uint8_t res99[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR9;

  uint8_t res100[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR10;

  uint8_t res101[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR11;

  uint8_t res102[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR12;

  uint8_t res103[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR13;

  uint8_t res104[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR14;

  uint8_t res105[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR15;

  uint8_t res106[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRS0:4;
      uint64_t PRS1:4;
      uint64_t PRS2:4;
      uint64_t PRS3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TPS;

  uint8_t res107[2];

  uint8_t BRS;
  uint8_t res108[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOM00:1;
      uint64_t TOM01:1;
      uint64_t TOM02:1;
      uint64_t TOM03:1;
      uint64_t TOM04:1;
      uint64_t TOM05:1;
      uint64_t TOM06:1;
      uint64_t TOM07:1;
      uint64_t TOM08:1;
      uint64_t TOM09:1;
      uint64_t TOM10:1;
      uint64_t TOM11:1;
      uint64_t TOM12:1;
      uint64_t TOM13:1;
      uint64_t TOM14:1;
      uint64_t TOM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOM;

  uint8_t res109[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TOC00:1;
      uint64_t TOC01:1;
      uint64_t TOC02:1;
      uint64_t TOC03:1;
      uint64_t TOC04:1;
      uint64_t TOC05:1;
      uint64_t TOC06:1;
      uint64_t TOC07:1;
      uint64_t TOC08:1;
      uint64_t TOC09:1;
      uint64_t TOC10:1;
      uint64_t TOC11:1;
      uint64_t TOC12:1;
      uint64_t TOC13:1;
      uint64_t TOC14:1;
      uint64_t TOC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TOC;

  uint8_t res110[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDE00:1;
      uint64_t TDE01:1;
      uint64_t TDE02:1;
      uint64_t TDE03:1;
      uint64_t TDE04:1;
      uint64_t TDE05:1;
      uint64_t TDE06:1;
      uint64_t TDE07:1;
      uint64_t TDE08:1;
      uint64_t TDE09:1;
      uint64_t TDE10:1;
      uint64_t TDE11:1;
      uint64_t TDE12:1;
      uint64_t TDE13:1;
      uint64_t TDE14:1;
      uint64_t TDE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDE;

  uint8_t res111[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TDM00:1;
      uint64_t TDM01:1;
      uint64_t TDM02:1;
      uint64_t TDM03:1;
      uint64_t TDM04:1;
      uint64_t TDM05:1;
      uint64_t TDM06:1;
      uint64_t TDM07:1;
      uint64_t TDM08:1;
      uint64_t TDM09:1;
      uint64_t TDM10:1;
      uint64_t TDM11:1;
      uint64_t TDM12:1;
      uint64_t TDM13:1;
      uint64_t TDM14:1;
      uint64_t TDM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TDM;

  uint8_t res112[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRE00:1;
      uint64_t TRE01:1;
      uint64_t TRE02:1;
      uint64_t TRE03:1;
      uint64_t TRE04:1;
      uint64_t TRE05:1;
      uint64_t TRE06:1;
      uint64_t TRE07:1;
      uint64_t TRE08:1;
      uint64_t TRE09:1;
      uint64_t TRE10:1;
      uint64_t TRE11:1;
      uint64_t TRE12:1;
      uint64_t TRE13:1;
      uint64_t TRE14:1;
      uint64_t TRE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRE;

  uint8_t res113[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRC00:1;
      uint64_t TRC01:1;
      uint64_t TRC02:1;
      uint64_t TRC03:1;
      uint64_t TRC04:1;
      uint64_t TRC05:1;
      uint64_t TRC06:1;
      uint64_t TRC07:1;
      uint64_t TRC08:1;
      uint64_t TRC09:1;
      uint64_t TRC10:1;
      uint64_t TRC11:1;
      uint64_t TRC12:1;
      uint64_t TRC13:1;
      uint64_t TRC14:1;
      uint64_t TRC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRC;

  uint8_t res114[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDE00:1;
      uint64_t RDE01:1;
      uint64_t RDE02:1;
      uint64_t RDE03:1;
      uint64_t RDE04:1;
      uint64_t RDE05:1;
      uint64_t RDE06:1;
      uint64_t RDE07:1;
      uint64_t RDE08:1;
      uint64_t RDE09:1;
      uint64_t RDE10:1;
      uint64_t RDE11:1;
      uint64_t RDE12:1;
      uint64_t RDE13:1;
      uint64_t RDE14:1;
      uint64_t RDE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDE;

  uint8_t res115[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDM00:1;
      uint64_t RDM01:1;
      uint64_t RDM02:1;
      uint64_t RDM03:1;
      uint64_t RDM04:1;
      uint64_t RDM05:1;
      uint64_t RDM06:1;
      uint64_t RDM07:1;
      uint64_t RDM08:1;
      uint64_t RDM09:1;
      uint64_t RDM10:1;
      uint64_t RDM11:1;
      uint64_t RDM12:1;
      uint64_t RDM13:1;
      uint64_t RDM14:1;
      uint64_t RDM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDM;

  uint8_t res116[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDS00:1;
      uint64_t RDS01:1;
      uint64_t RDS02:1;
      uint64_t RDS03:1;
      uint64_t RDS04:1;
      uint64_t RDS05:1;
      uint64_t RDS06:1;
      uint64_t RDS07:1;
      uint64_t RDS08:1;
      uint64_t RDS09:1;
      uint64_t RDS10:1;
      uint64_t RDS11:1;
      uint64_t RDS12:1;
      uint64_t RDS13:1;
      uint64_t RDS14:1;
      uint64_t RDS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDS;

  uint8_t res117[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDC00:1;
      uint64_t RDC01:1;
      uint64_t RDC02:1;
      uint64_t RDC03:1;
      uint64_t RDC04:1;
      uint64_t RDC05:1;
      uint64_t RDC06:1;
      uint64_t RDC07:1;
      uint64_t RDC08:1;
      uint64_t RDC09:1;
      uint64_t RDC10:1;
      uint64_t RDC11:1;
      uint64_t RDC12:1;
      uint64_t RDC13:1;
      uint64_t RDC14:1;
      uint64_t RDC15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RDC;

};

#define TAUD2 (*(volatile struct TAUD2_tag *) 0xffe22000)

struct TAUJ0_tag
{
  uint32_t CDR0;
  uint32_t CDR1;
  uint32_t CDR2;
  uint32_t CDR3;
  uint32_t CNT0;
  uint32_t CNT1;
  uint32_t CNT2;
  uint32_t CNT3;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR0;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR1;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR2;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR3;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC0;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC1;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC2;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC3;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE00:1;
      uint64_t TE01:1;
      uint64_t TE02:1;
      uint64_t TE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS00:1;
      uint64_t TS01:1;
      uint64_t TS02:1;
      uint64_t TS03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT00:1;
      uint64_t TT01:1;
      uint64_t TT02:1;
      uint64_t TT03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TO00:1;
      uint64_t TO01:1;
      uint64_t TO02:1;
      uint64_t TO03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TO;

  uint8_t res15[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOE00:1;
      uint64_t TOE01:1;
      uint64_t TOE02:1;
      uint64_t TOE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOE;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOL00:1;
      uint64_t TOL01:1;
      uint64_t TOL02:1;
      uint64_t TOL03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOL;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDT00:1;
      uint64_t RDT01:1;
      uint64_t RDT02:1;
      uint64_t RDT03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDT;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSF00:1;
      uint64_t RSF01:1;
      uint64_t RSF02:1;
      uint64_t RSF03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RSF;

  uint8_t res19[19];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR0;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR1;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR2;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR3;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRS0:4;
      uint64_t PRS1:4;
      uint64_t PRS2:4;
      uint64_t PRS3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TPS;

  uint8_t res24[2];

  uint8_t BRS;
  uint8_t res25[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOM00:1;
      uint64_t TOM01:1;
      uint64_t TOM02:1;
      uint64_t TOM03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOM;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOC00:1;
      uint64_t TOC01:1;
      uint64_t TOC02:1;
      uint64_t TOC03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOC;

  uint8_t res27[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDE00:1;
      uint64_t RDE01:1;
      uint64_t RDE02:1;
      uint64_t RDE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDE;

  uint8_t res28[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDM00:1;
      uint64_t RDM01:1;
      uint64_t RDM02:1;
      uint64_t RDM03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDM;

};

#define TAUJ0 (*(volatile struct TAUJ0_tag *) 0xffe50000)

struct TAUJ1_tag
{
  uint32_t CDR0;
  uint32_t CDR1;
  uint32_t CDR2;
  uint32_t CDR3;
  uint32_t CNT0;
  uint32_t CNT1;
  uint32_t CNT2;
  uint32_t CNT3;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR0;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR1;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR2;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR3;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC0;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC1;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC2;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC3;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE00:1;
      uint64_t TE01:1;
      uint64_t TE02:1;
      uint64_t TE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS00:1;
      uint64_t TS01:1;
      uint64_t TS02:1;
      uint64_t TS03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT00:1;
      uint64_t TT01:1;
      uint64_t TT02:1;
      uint64_t TT03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TO00:1;
      uint64_t TO01:1;
      uint64_t TO02:1;
      uint64_t TO03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TO;

  uint8_t res15[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOE00:1;
      uint64_t TOE01:1;
      uint64_t TOE02:1;
      uint64_t TOE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOE;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOL00:1;
      uint64_t TOL01:1;
      uint64_t TOL02:1;
      uint64_t TOL03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOL;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDT00:1;
      uint64_t RDT01:1;
      uint64_t RDT02:1;
      uint64_t RDT03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDT;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSF00:1;
      uint64_t RSF01:1;
      uint64_t RSF02:1;
      uint64_t RSF03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RSF;

  uint8_t res19[19];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR0;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR1;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR2;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR3;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRS0:4;
      uint64_t PRS1:4;
      uint64_t PRS2:4;
      uint64_t PRS3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TPS;

  uint8_t res24[2];

  uint8_t BRS;
  uint8_t res25[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOM00:1;
      uint64_t TOM01:1;
      uint64_t TOM02:1;
      uint64_t TOM03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOM;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOC00:1;
      uint64_t TOC01:1;
      uint64_t TOC02:1;
      uint64_t TOC03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOC;

  uint8_t res27[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDE00:1;
      uint64_t RDE01:1;
      uint64_t RDE02:1;
      uint64_t RDE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDE;

  uint8_t res28[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDM00:1;
      uint64_t RDM01:1;
      uint64_t RDM02:1;
      uint64_t RDM03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDM;

};

#define TAUJ1 (*(volatile struct TAUJ1_tag *) 0xffe51000)

struct TAUJ2_tag
{
  uint32_t CDR0;
  uint32_t CDR1;
  uint32_t CDR2;
  uint32_t CDR3;
  uint32_t CNT0;
  uint32_t CNT1;
  uint32_t CNT2;
  uint32_t CNT3;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMUR3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR0;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR1;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR2;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSR3;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC0;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC1;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC2;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSC3;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE00:1;
      uint64_t TE01:1;
      uint64_t TE02:1;
      uint64_t TE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS00:1;
      uint64_t TS01:1;
      uint64_t TS02:1;
      uint64_t TS03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT00:1;
      uint64_t TT01:1;
      uint64_t TT02:1;
      uint64_t TT03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TO00:1;
      uint64_t TO01:1;
      uint64_t TO02:1;
      uint64_t TO03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TO;

  uint8_t res15[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOE00:1;
      uint64_t TOE01:1;
      uint64_t TOE02:1;
      uint64_t TOE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOE;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOL00:1;
      uint64_t TOL01:1;
      uint64_t TOL02:1;
      uint64_t TOL03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOL;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDT00:1;
      uint64_t RDT01:1;
      uint64_t RDT02:1;
      uint64_t RDT03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDT;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSF00:1;
      uint64_t RSF01:1;
      uint64_t RSF02:1;
      uint64_t RSF03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RSF;

  uint8_t res19[19];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR0;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR1;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR2;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MD:5;
      uint64_t reservedSpace0:1;
      uint64_t COS:2;
      uint64_t STS:3;
      uint64_t MAS:1;
      uint64_t CCS:2;
      uint64_t CKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMOR3;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRS0:4;
      uint64_t PRS1:4;
      uint64_t PRS2:4;
      uint64_t PRS3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TPS;

  uint8_t res24[2];

  uint8_t BRS;
  uint8_t res25[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOM00:1;
      uint64_t TOM01:1;
      uint64_t TOM02:1;
      uint64_t TOM03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOM;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOC00:1;
      uint64_t TOC01:1;
      uint64_t TOC02:1;
      uint64_t TOC03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOC;

  uint8_t res27[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDE00:1;
      uint64_t RDE01:1;
      uint64_t RDE02:1;
      uint64_t RDE03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDE;

  uint8_t res28[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDM00:1;
      uint64_t RDM01:1;
      uint64_t RDM02:1;
      uint64_t RDM03:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDM;

};

#define TAUJ2 (*(volatile struct TAUJ2_tag *) 0xffe52000)

struct TSG30_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TO1:1;
      uint64_t TO2:1;
      uint64_t TO3:1;
      uint64_t TO4:1;
      uint64_t TO5:1;
      uint64_t TO6:1;
      uint64_t reservedSpace1:2;
      uint64_t OL1:1;
      uint64_t OL2:1;
      uint64_t OL3:1;
      uint64_t OL4:1;
      uint64_t OL5:1;
      uint64_t OL6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IOC2;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RMC:1;
      uint64_t RIA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL3;

  uint8_t res1[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AT00:1;
      uint64_t AT01:1;
      uint64_t AT02:1;
      uint64_t AT03:1;
      uint64_t AT04:1;
      uint64_t AT05:1;
      uint64_t AT06:1;
      uint64_t AT07:1;
      uint64_t AT08:1;
      uint64_t AT09:1;
      uint64_t ACC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL5;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AT10:1;
      uint64_t AT11:1;
      uint64_t AT12:1;
      uint64_t AT13:1;
      uint64_t AT14:1;
      uint64_t AT15:1;
      uint64_t AT16:1;
      uint64_t AT17:1;
      uint64_t AT18:1;
      uint64_t AT19:1;
      uint64_t ACC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL6;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
      uint64_t RSF:1;
      uint64_t SUF:1;
      uint64_t CUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STR0;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPF:3;
      uint64_t TSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STR1;

  uint8_t res5[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PTF:1;
      uint64_t PRF:1;
      uint64_t NDF:1;
      uint64_t TDF:1;
      uint64_t PEF:1;
      uint64_t PPF:1;
      uint64_t TBF0:1;
      uint64_t TBF1:1;
      uint64_t TBF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STR2;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PTR:1;
      uint64_t PRR:1;
      uint64_t NDR:1;
      uint64_t TDR:1;
      uint64_t PER:1;
      uint64_t PPR:1;
      uint64_t TBR0:1;
      uint64_t TBR1:1;
      uint64_t TBR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STC;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PSC:1;
      uint64_t IDC:1;
      uint64_t PSS:1;
      uint64_t POT:1;
      uint64_t STE:1;
      uint64_t SOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPT0;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPT1;

  uint8_t res9[3];

  uint16_t CNT;
  uint8_t res10[2];

  uint16_t SBC;
  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRG0;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRG1;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IMT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRG2;

  uint8_t res14[7];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1:16;
      uint64_t CMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP5:16;
      uint64_t CMP6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP5W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP9:16;
      uint64_t CMP10:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP9W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3:16;
      uint64_t CMP4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP7:16;
      uint64_t CMP8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP7W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP11:16;
      uint64_t CMP12:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP11W;

  uint32_t CMP0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP0:16;
      uint64_t DCMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP0W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT0T:3;
      uint64_t PAT1T:3;
      uint64_t PAT2T:3;
      uint64_t PAT3T:3;
      uint64_t PAT4T:3;
      uint64_t PAT5T:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAT0W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT0B:3;
      uint64_t PAT1B:3;
      uint64_t PAT2B:3;
      uint64_t PAT3B:3;
      uint64_t PAT4B:3;
      uint64_t PAT5B:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAT1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTC0:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC0W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTC1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TOL1:1;
      uint64_t TOL2:1;
      uint64_t TOL3:1;
      uint64_t TOL4:1;
      uint64_t TOL5:1;
      uint64_t TOL6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCC:5;
      uint64_t VIE:1;
      uint64_t PIE:1;
      uint64_t VRE:1;
      uint64_t PRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL4;

  uint16_t CMP1;
  uint8_t res15[2];

  uint16_t CMP2;
  uint8_t res16[2];

  uint16_t CMP5;
  uint8_t res17[2];

  uint16_t CMP6;
  uint8_t res18[2];

  uint16_t CMP9;
  uint8_t res19[2];

  uint16_t CMP10;
  uint8_t res20[2];

  uint16_t CMP3;
  uint8_t res21[2];

  uint16_t CMP4;
  uint8_t res22[2];

  uint16_t CMP7;
  uint8_t res23[2];

  uint16_t CMP8;
  uint8_t res24[2];

  uint16_t CMP11;
  uint8_t res25[2];

  uint16_t CMP12;
  uint8_t res26[2];

  uint16_t CMPU;
  uint8_t res27[2];

  uint16_t CMPV;
  uint8_t res28[2];

  uint16_t CMPW;
  uint8_t res29[2];

  uint16_t UPW;
  uint8_t res30[2];

  uint16_t VPW;
  uint8_t res31[2];

  uint16_t WPW;
  uint8_t res32[90];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSHWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPSHWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSHVE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPSHVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSHUE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPSHUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPCMWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPCMWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPCMVE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPCMVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPCMUE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPCMUE;

  uint8_t res33[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP2E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP2E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP1E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP0E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP0E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP0E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP12E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP12E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP11E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP11E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP8E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP8E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP7E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP7E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP4E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP4E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP10E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP10E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP9E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP9E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP6E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP6E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP5E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP5E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP2E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPVE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPUE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPUE;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UPWE;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBCE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCE;

  uint8_t res36[88];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TOE1:1;
      uint64_t TOE2:1;
      uint64_t TOE3:1;
      uint64_t TOE4:1;
      uint64_t TOE5:1;
      uint64_t TOE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC0;

  uint8_t res37[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOS:1;
      uint64_t TGS:1;
      uint64_t WOC:1;
      uint64_t EOC:1;
      uint64_t PTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC1;

  uint8_t res38[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD:3;
      uint64_t reservedSpace0:1;
      uint64_t DWD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res39[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PTC:2;
      uint64_t PRC:1;
      uint64_t NDC:1;
      uint64_t TDC:1;
      uint64_t PEC:1;
      uint64_t PPC:1;
      uint64_t TBA0:1;
      uint64_t TBA1:1;
      uint64_t TBA2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL1;

  uint8_t res40[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTPR:15;
      uint64_t DTCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DTPR;

  uint8_t res41[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPSTL0:1;
      uint64_t SPSTL1:1;
      uint64_t SPSTL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL7;

  uint8_t res42[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S120DCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL8;

};

#define TSG30 (*(volatile struct TSG30_tag *) 0xffe70000)

struct TSG31_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TO1:1;
      uint64_t TO2:1;
      uint64_t TO3:1;
      uint64_t TO4:1;
      uint64_t TO5:1;
      uint64_t TO6:1;
      uint64_t reservedSpace1:2;
      uint64_t OL1:1;
      uint64_t OL2:1;
      uint64_t OL3:1;
      uint64_t OL4:1;
      uint64_t OL5:1;
      uint64_t OL6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IOC2;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RMC:1;
      uint64_t RIA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL3;

  uint8_t res1[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AT00:1;
      uint64_t AT01:1;
      uint64_t AT02:1;
      uint64_t AT03:1;
      uint64_t AT04:1;
      uint64_t AT05:1;
      uint64_t AT06:1;
      uint64_t AT07:1;
      uint64_t AT08:1;
      uint64_t AT09:1;
      uint64_t ACC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL5;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AT10:1;
      uint64_t AT11:1;
      uint64_t AT12:1;
      uint64_t AT13:1;
      uint64_t AT14:1;
      uint64_t AT15:1;
      uint64_t AT16:1;
      uint64_t AT17:1;
      uint64_t AT18:1;
      uint64_t AT19:1;
      uint64_t ACC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL6;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
      uint64_t RSF:1;
      uint64_t SUF:1;
      uint64_t CUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STR0;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPF:3;
      uint64_t TSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STR1;

  uint8_t res5[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PTF:1;
      uint64_t PRF:1;
      uint64_t NDF:1;
      uint64_t TDF:1;
      uint64_t PEF:1;
      uint64_t PPF:1;
      uint64_t TBF0:1;
      uint64_t TBF1:1;
      uint64_t TBF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STR2;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PTR:1;
      uint64_t PRR:1;
      uint64_t NDR:1;
      uint64_t TDR:1;
      uint64_t PER:1;
      uint64_t PPR:1;
      uint64_t TBR0:1;
      uint64_t TBR1:1;
      uint64_t TBR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STC;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PSC:1;
      uint64_t IDC:1;
      uint64_t PSS:1;
      uint64_t POT:1;
      uint64_t STE:1;
      uint64_t SOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPT0;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPT1;

  uint8_t res9[3];

  uint16_t CNT;
  uint8_t res10[2];

  uint16_t SBC;
  uint8_t res11[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRG0;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRG1;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IMT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TRG2;

  uint8_t res14[7];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1:16;
      uint64_t CMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP5:16;
      uint64_t CMP6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP5W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP9:16;
      uint64_t CMP10:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP9W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3:16;
      uint64_t CMP4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP7:16;
      uint64_t CMP8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP7W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP11:16;
      uint64_t CMP12:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP11W;

  uint32_t CMP0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP0:16;
      uint64_t DCMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP0W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT0T:3;
      uint64_t PAT1T:3;
      uint64_t PAT2T:3;
      uint64_t PAT3T:3;
      uint64_t PAT4T:3;
      uint64_t PAT5T:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAT0W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAT0B:3;
      uint64_t PAT1B:3;
      uint64_t PAT2B:3;
      uint64_t PAT3B:3;
      uint64_t PAT4B:3;
      uint64_t PAT5B:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAT1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTC0:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC0W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTC1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC1W;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TOL1:1;
      uint64_t TOL2:1;
      uint64_t TOL3:1;
      uint64_t TOL4:1;
      uint64_t TOL5:1;
      uint64_t TOL6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCC:5;
      uint64_t VIE:1;
      uint64_t PIE:1;
      uint64_t VRE:1;
      uint64_t PRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL4;

  uint16_t CMP1;
  uint8_t res15[2];

  uint16_t CMP2;
  uint8_t res16[2];

  uint16_t CMP5;
  uint8_t res17[2];

  uint16_t CMP6;
  uint8_t res18[2];

  uint16_t CMP9;
  uint8_t res19[2];

  uint16_t CMP10;
  uint8_t res20[2];

  uint16_t CMP3;
  uint8_t res21[2];

  uint16_t CMP4;
  uint8_t res22[2];

  uint16_t CMP7;
  uint8_t res23[2];

  uint16_t CMP8;
  uint8_t res24[2];

  uint16_t CMP11;
  uint8_t res25[2];

  uint16_t CMP12;
  uint8_t res26[2];

  uint16_t CMPU;
  uint8_t res27[2];

  uint16_t CMPV;
  uint8_t res28[2];

  uint16_t CMPW;
  uint8_t res29[2];

  uint16_t UPW;
  uint8_t res30[2];

  uint16_t VPW;
  uint8_t res31[2];

  uint16_t WPW;
  uint8_t res32[90];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSHWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPSHWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSHVE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPSHVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSHUE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPSHUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPCMWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPCMWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPCMVE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPCMVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPCMUE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSPCMUE;

  uint8_t res33[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP2E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP2E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP1E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCMP0E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCMP0E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP0E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP0E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP12E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP12E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP11E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP11E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP8E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP8E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP7E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP7E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP4E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP4E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP3E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP3E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP10E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP10E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP9E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP9E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP6E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP6E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP5E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP5E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP2E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP2E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP1E:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPVE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPVE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPUE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPUE;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPWE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPWE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UPWE;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBCE:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBCE;

  uint8_t res36[88];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TOE1:1;
      uint64_t TOE2:1;
      uint64_t TOE3:1;
      uint64_t TOE4:1;
      uint64_t TOE5:1;
      uint64_t TOE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC0;

  uint8_t res37[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOS:1;
      uint64_t TGS:1;
      uint64_t WOC:1;
      uint64_t EOC:1;
      uint64_t PTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC1;

  uint8_t res38[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MD:3;
      uint64_t reservedSpace0:1;
      uint64_t DWD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res39[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PTC:2;
      uint64_t PRC:1;
      uint64_t NDC:1;
      uint64_t TDC:1;
      uint64_t PEC:1;
      uint64_t PPC:1;
      uint64_t TBA0:1;
      uint64_t TBA1:1;
      uint64_t TBA2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL1;

  uint8_t res40[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTPR:15;
      uint64_t DTCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DTPR;

  uint8_t res41[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPSTL0:1;
      uint64_t SPSTL1:1;
      uint64_t SPSTL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL7;

  uint8_t res42[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S120DCO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL8;

};

#define TSG31 (*(volatile struct TSG31_tag *) 0xffe71000)

struct ENCA0_tag
{
  uint16_t CCR0;
  uint8_t res0[2];

  uint16_t CCR1;
  uint8_t res1[2];

  uint16_t CNT;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t UDF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLG;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
      uint64_t CLUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FGC;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS10:2;
      uint64_t TIS32:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC0;

  uint8_t res8[31];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UDS:2;
      uint64_t ECM0:1;
      uint64_t ECM1:1;
      uint64_t LDE:1;
      uint64_t reservedSpace0:2;
      uint64_t CTS:1;
      uint64_t CRM0:1;
      uint64_t CRM1:1;
      uint64_t reservedSpace1:4;
      uint64_t MCS:1;
      uint64_t CME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EIS:2;
      uint64_t ECS:2;
      uint64_t ACL:1;
      uint64_t BCL:1;
      uint64_t ZCL:1;
      uint64_t SCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC1;

};

#define ENCA0 (*(volatile struct ENCA0_tag *) 0xffe80000)

struct ENCA1_tag
{
  uint16_t CCR0;
  uint8_t res0[2];

  uint16_t CCR1;
  uint8_t res1[2];

  uint16_t CNT;
  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVF:1;
      uint64_t UDF:1;
      uint64_t CSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLG;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLOV:1;
      uint64_t CLUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FGC;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TIS10:2;
      uint64_t TIS32:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC0;

  uint8_t res8[31];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UDS:2;
      uint64_t ECM0:1;
      uint64_t ECM1:1;
      uint64_t LDE:1;
      uint64_t reservedSpace0:2;
      uint64_t CTS:1;
      uint64_t CRM0:1;
      uint64_t CRM1:1;
      uint64_t reservedSpace1:4;
      uint64_t MCS:1;
      uint64_t CME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EIS:2;
      uint64_t ECS:2;
      uint64_t ACL:1;
      uint64_t BCL:1;
      uint64_t ZCL:1;
      uint64_t SCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IOC1;

};

#define ENCA1 (*(volatile struct ENCA1_tag *) 0xffe81000)

struct TAPA0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACE:1;
      uint64_t reservedSpace0:7;
      uint64_t HOF0:1;
      uint64_t HOF1:1;
      uint64_t HOF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FLG;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACWE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHS;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHT;

  uint8_t res5[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DCP:1;
      uint64_t DCN:1;
      uint64_t DCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL0;

};

#define TAPA0 (*(volatile struct TAPA0_tag *) 0xffe90000)

struct TAPA1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACE:1;
      uint64_t reservedSpace0:7;
      uint64_t HOF0:1;
      uint64_t HOF1:1;
      uint64_t HOF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FLG;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACWE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHS;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHT;

  uint8_t res5[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DCP:1;
      uint64_t DCN:1;
      uint64_t DCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL0;

};

#define TAPA1 (*(volatile struct TAPA1_tag *) 0xffe91000)

struct TAPA2_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACE:1;
      uint64_t reservedSpace0:7;
      uint64_t HOF0:1;
      uint64_t HOF1:1;
      uint64_t HOF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FLG;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACWE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHS;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHT;

  uint8_t res5[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DCP:1;
      uint64_t DCN:1;
      uint64_t DCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL0;

};

#define TAPA2 (*(volatile struct TAPA2_tag *) 0xffe92000)

struct TAPA3_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACE:1;
      uint64_t reservedSpace0:7;
      uint64_t HOF0:1;
      uint64_t HOF1:1;
      uint64_t HOF2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FLG;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACWE;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTS;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACTT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACTT;

  uint8_t res3[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHS;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPHT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OPHT;

  uint8_t res5[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DCP:1;
      uint64_t DCN:1;
      uint64_t DCM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL0;

};

#define TAPA3 (*(volatile struct TAPA3_tag *) 0xffe93000)

struct TPBA0_tag
{
  uint16_t BUF00;
  uint8_t res0[2];

  uint16_t BUF01;
  uint8_t res1[2];

  uint16_t BUF02;
  uint8_t res2[2];

  uint16_t BUF03;
  uint8_t res3[2];

  uint16_t BUF04;
  uint8_t res4[2];

  uint16_t BUF05;
  uint8_t res5[2];

  uint16_t BUF06;
  uint8_t res6[2];

  uint16_t BUF07;
  uint8_t res7[2];

  uint16_t BUF08;
  uint8_t res8[2];

  uint16_t BUF09;
  uint8_t res9[2];

  uint16_t BUF10;
  uint8_t res10[2];

  uint16_t BUF11;
  uint8_t res11[2];

  uint16_t BUF12;
  uint8_t res12[2];

  uint16_t BUF13;
  uint8_t res13[2];

  uint16_t BUF14;
  uint8_t res14[2];

  uint16_t BUF15;
  uint8_t res15[2];

  uint16_t BUF16;
  uint8_t res16[2];

  uint16_t BUF17;
  uint8_t res17[2];

  uint16_t BUF18;
  uint8_t res18[2];

  uint16_t BUF19;
  uint8_t res19[2];

  uint16_t BUF20;
  uint8_t res20[2];

  uint16_t BUF21;
  uint8_t res21[2];

  uint16_t BUF22;
  uint8_t res22[2];

  uint16_t BUF23;
  uint8_t res23[2];

  uint16_t BUF24;
  uint8_t res24[2];

  uint16_t BUF25;
  uint8_t res25[2];

  uint16_t BUF26;
  uint8_t res26[2];

  uint16_t BUF27;
  uint8_t res27[2];

  uint16_t BUF28;
  uint8_t res28[2];

  uint16_t BUF29;
  uint8_t res29[2];

  uint16_t BUF30;
  uint8_t res30[2];

  uint16_t BUF31;
  uint8_t res31[2];

  uint16_t BUF32;
  uint8_t res32[2];

  uint16_t BUF33;
  uint8_t res33[2];

  uint16_t BUF34;
  uint8_t res34[2];

  uint16_t BUF35;
  uint8_t res35[2];

  uint16_t BUF36;
  uint8_t res36[2];

  uint16_t BUF37;
  uint8_t res37[2];

  uint16_t BUF38;
  uint8_t res38[2];

  uint16_t BUF39;
  uint8_t res39[2];

  uint16_t BUF40;
  uint8_t res40[2];

  uint16_t BUF41;
  uint8_t res41[2];

  uint16_t BUF42;
  uint8_t res42[2];

  uint16_t BUF43;
  uint8_t res43[2];

  uint16_t BUF44;
  uint8_t res44[2];

  uint16_t BUF45;
  uint8_t res45[2];

  uint16_t BUF46;
  uint8_t res46[2];

  uint16_t BUF47;
  uint8_t res47[2];

  uint16_t BUF48;
  uint8_t res48[2];

  uint16_t BUF49;
  uint8_t res49[2];

  uint16_t BUF50;
  uint8_t res50[2];

  uint16_t BUF51;
  uint8_t res51[2];

  uint16_t BUF52;
  uint8_t res52[2];

  uint16_t BUF53;
  uint8_t res53[2];

  uint16_t BUF54;
  uint8_t res54[2];

  uint16_t BUF55;
  uint8_t res55[2];

  uint16_t BUF56;
  uint8_t res56[2];

  uint16_t BUF57;
  uint8_t res57[2];

  uint16_t BUF58;
  uint8_t res58[2];

  uint16_t BUF59;
  uint8_t res59[2];

  uint16_t BUF60;
  uint8_t res60[2];

  uint16_t BUF61;
  uint8_t res61[2];

  uint16_t BUF62;
  uint8_t res62[2];

  uint16_t BUF63;
  uint8_t res63[2];

  uint16_t CMP0;
  uint8_t res64[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMP1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMP1;

  uint8_t res65[3];

  uint16_t CNT0;
  uint8_t res66[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CNT1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CNT1;

  uint8_t res67[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSF0:1;
      uint64_t RSF1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RSF;

  uint8_t res68[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDT0:1;
      uint64_t RDT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDT;

  uint8_t res69[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDM0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDM;

  uint8_t res70[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TO;

  uint8_t res71[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOE;

  uint8_t res72[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOL;

  uint8_t res73[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res74[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res75[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res76[207];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DPS:1;
      uint64_t reservedSpace0:3;
      uint64_t PRS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define TPBA0 (*(volatile struct TPBA0_tag *) 0xffea0000)

struct TPBA1_tag
{
  uint16_t BUF00;
  uint8_t res0[2];

  uint16_t BUF01;
  uint8_t res1[2];

  uint16_t BUF02;
  uint8_t res2[2];

  uint16_t BUF03;
  uint8_t res3[2];

  uint16_t BUF04;
  uint8_t res4[2];

  uint16_t BUF05;
  uint8_t res5[2];

  uint16_t BUF06;
  uint8_t res6[2];

  uint16_t BUF07;
  uint8_t res7[2];

  uint16_t BUF08;
  uint8_t res8[2];

  uint16_t BUF09;
  uint8_t res9[2];

  uint16_t BUF10;
  uint8_t res10[2];

  uint16_t BUF11;
  uint8_t res11[2];

  uint16_t BUF12;
  uint8_t res12[2];

  uint16_t BUF13;
  uint8_t res13[2];

  uint16_t BUF14;
  uint8_t res14[2];

  uint16_t BUF15;
  uint8_t res15[2];

  uint16_t BUF16;
  uint8_t res16[2];

  uint16_t BUF17;
  uint8_t res17[2];

  uint16_t BUF18;
  uint8_t res18[2];

  uint16_t BUF19;
  uint8_t res19[2];

  uint16_t BUF20;
  uint8_t res20[2];

  uint16_t BUF21;
  uint8_t res21[2];

  uint16_t BUF22;
  uint8_t res22[2];

  uint16_t BUF23;
  uint8_t res23[2];

  uint16_t BUF24;
  uint8_t res24[2];

  uint16_t BUF25;
  uint8_t res25[2];

  uint16_t BUF26;
  uint8_t res26[2];

  uint16_t BUF27;
  uint8_t res27[2];

  uint16_t BUF28;
  uint8_t res28[2];

  uint16_t BUF29;
  uint8_t res29[2];

  uint16_t BUF30;
  uint8_t res30[2];

  uint16_t BUF31;
  uint8_t res31[2];

  uint16_t BUF32;
  uint8_t res32[2];

  uint16_t BUF33;
  uint8_t res33[2];

  uint16_t BUF34;
  uint8_t res34[2];

  uint16_t BUF35;
  uint8_t res35[2];

  uint16_t BUF36;
  uint8_t res36[2];

  uint16_t BUF37;
  uint8_t res37[2];

  uint16_t BUF38;
  uint8_t res38[2];

  uint16_t BUF39;
  uint8_t res39[2];

  uint16_t BUF40;
  uint8_t res40[2];

  uint16_t BUF41;
  uint8_t res41[2];

  uint16_t BUF42;
  uint8_t res42[2];

  uint16_t BUF43;
  uint8_t res43[2];

  uint16_t BUF44;
  uint8_t res44[2];

  uint16_t BUF45;
  uint8_t res45[2];

  uint16_t BUF46;
  uint8_t res46[2];

  uint16_t BUF47;
  uint8_t res47[2];

  uint16_t BUF48;
  uint8_t res48[2];

  uint16_t BUF49;
  uint8_t res49[2];

  uint16_t BUF50;
  uint8_t res50[2];

  uint16_t BUF51;
  uint8_t res51[2];

  uint16_t BUF52;
  uint8_t res52[2];

  uint16_t BUF53;
  uint8_t res53[2];

  uint16_t BUF54;
  uint8_t res54[2];

  uint16_t BUF55;
  uint8_t res55[2];

  uint16_t BUF56;
  uint8_t res56[2];

  uint16_t BUF57;
  uint8_t res57[2];

  uint16_t BUF58;
  uint8_t res58[2];

  uint16_t BUF59;
  uint8_t res59[2];

  uint16_t BUF60;
  uint8_t res60[2];

  uint16_t BUF61;
  uint8_t res61[2];

  uint16_t BUF62;
  uint8_t res62[2];

  uint16_t BUF63;
  uint8_t res63[2];

  uint16_t CMP0;
  uint8_t res64[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CMP1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMP1;

  uint8_t res65[3];

  uint16_t CNT0;
  uint8_t res66[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CNT1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CNT1;

  uint8_t res67[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSF0:1;
      uint64_t RSF1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RSF;

  uint8_t res68[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDT0:1;
      uint64_t RDT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDT;

  uint8_t res69[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RDM0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RDM;

  uint8_t res70[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TO;

  uint8_t res71[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOE;

  uint8_t res72[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TOL0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOL;

  uint8_t res73[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TE;

  uint8_t res74[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TS;

  uint8_t res75[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TT0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TT;

  uint8_t res76[207];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DPS:1;
      uint64_t reservedSpace0:3;
      uint64_t PRS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL;

};

#define TPBA1 (*(volatile struct TPBA1_tag *) 0xffea1000)

struct MODC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLMD0:1;
      uint64_t FLMD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE;

};

#define MODC (*(volatile struct MODC_tag *) 0xfff80104)

struct CLMAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESCLM:1;
      uint64_t MONCLKMSK:1;
      uint64_t ERRMSK:1;
      uint64_t CLMA0TESEN:1;
      uint64_t CLMA1TESEN:1;
      uint64_t CLMA2TESEN:1;
      uint64_t CLMA3TESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLMATEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLMA0ERRS:1;
      uint64_t CLMA1ERRS:1;
      uint64_t CLMA2ERRS:1;
      uint64_t CLMA3ERRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLMATESTS;

};

#define CLMAC (*(volatile struct CLMAC_tag *) 0xfff83000)

struct CLMA0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPL;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPH;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t REG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCMD;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PS;

};

#define CLMA0 (*(volatile struct CLMA0_tag *) 0xfff83100)

struct CLMA1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPL;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPH;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t REG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCMD;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PS;

};

#define CLMA1 (*(volatile struct CLMA1_tag *) 0xfff83200)

struct CLMA2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPL;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPH;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t REG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCMD;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PS;

};

#define CLMA2 (*(volatile struct CLMA2_tag *) 0xfff83300)

struct CLMA3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CTL0;

  uint8_t res0[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPL;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPH;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t REG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCMD;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PS;

};

#define CLMA3 (*(volatile struct CLMA3_tag *) 0xfff83400)

struct ADCG0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR23;

  uint8_t res0[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR00:16;
      uint64_t DR01:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR02:16;
      uint64_t DR03:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR04:16;
      uint64_t DR05:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR06:16;
      uint64_t DR07:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR08:16;
      uint64_t DR09:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR10:16;
      uint64_t DR11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR12:16;
      uint64_t DR13:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR14:16;
      uint64_t DR15:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR16:16;
      uint64_t DR17:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR18:16;
      uint64_t DR19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR20:16;
      uint64_t DR21:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR22:16;
      uint64_t DR23:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR22;

  uint8_t res1[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR00:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR01:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR02:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR03:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR04:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR05:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR06:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR07:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR08:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR09:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR10:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR11:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR12:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR13:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR14:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR15:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR16:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR17:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR18:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR19:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR20:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR21:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR22:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR23:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR23;

  uint8_t res2[160];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSYNSTCR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTSYNSTCR;

  uint8_t res4[59];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SMPCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SMPCR;

  uint8_t res5[62];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADHALTR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SUSMTD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR1;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSKCFMT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MPXCURCR;

  uint8_t res8[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPXCUR:5;
      uint64_t reservedSpace0:11;
      uint64_t MSKC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPXCURR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MPXOW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MPXOWR;

  uint8_t res9[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADDNT:1;
      uint64_t reservedSpace0:3;
      uint64_t DFMT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR2;

  uint8_t res10[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP0;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP1;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP2;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP3;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP4;

  uint8_t res15[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IDEIE:1;
      uint64_t PEIE:1;
      uint64_t OWEIE:1;
      uint64_t ULEIE:1;
      uint64_t RDCLRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFTCR;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TDLV:2;
      uint64_t reservedSpace0:5;
      uint64_t TDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TDCR;

  uint8_t res17[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODPW:6;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:23;
      uint64_t ODDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLMTB:16;
      uint64_t ULMTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULLMTBR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLMTB:16;
      uint64_t ULMTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULLMTBR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLMTB:16;
      uint64_t ULMTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULLMTBR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IDEC:1;
      uint64_t PEC:1;
      uint64_t OWEC:1;
      uint64_t ULEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECR;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t ULE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULER;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OWECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t OWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OWER;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t PE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PER;

  uint8_t res21[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IDECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IDER;

  uint8_t res22[23];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SMPST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THSMPSTCR;

  uint8_t res23[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t THSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THSTPCR;

  uint8_t res24[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ASMPMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THCR;

  uint8_t res25[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HLDST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THAHLDSTCR;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HLDST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THBHLDSTCR;

  uint8_t res27[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGS:2;
      uint64_t reservedSpace0:2;
      uint64_t HLDTE:1;
      uint64_t HLDCTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THACR;

  uint8_t res28[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGS:2;
      uint64_t reservedSpace0:2;
      uint64_t HLDTE:1;
      uint64_t HLDCTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THBCR;

  uint8_t res29[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TH0E:1;
      uint64_t TH1E:1;
      uint64_t TH2E:1;
      uint64_t TH3E:1;
      uint64_t TH4E:1;
      uint64_t TH5E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THER;

  uint8_t res30[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TH0GS:1;
      uint64_t reservedSpace0:1;
      uint64_t TH1GS:1;
      uint64_t reservedSpace1:1;
      uint64_t TH2GS:1;
      uint64_t reservedSpace2:1;
      uint64_t TH3GS:1;
      uint64_t reservedSpace3:1;
      uint64_t TH4GS:1;
      uint64_t reservedSpace4:1;
      uint64_t TH5GS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) THGSR;

  uint8_t res31[74];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR0;

  uint8_t res32[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:1;
      uint64_t reservedSpace0:3;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR0;

  uint8_t res33[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP0;

  uint8_t res34[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP0;

  uint8_t res35[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR0;

  uint8_t res36[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR0;

  uint8_t res37[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR0;

  uint8_t res38[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR1;

  uint8_t res39[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:1;
      uint64_t reservedSpace0:3;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR1;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP1;

  uint8_t res41[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP1;

  uint8_t res42[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR1;

  uint8_t res43[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR1;

  uint8_t res44[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR1;

  uint8_t res45[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR2;

  uint8_t res46[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:1;
      uint64_t reservedSpace0:3;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR2;

  uint8_t res47[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP2;

  uint8_t res48[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP2;

  uint8_t res49[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR2;

  uint8_t res50[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR2;

  uint8_t res51[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR2;

  uint8_t res52[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR3;

  uint8_t res53[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTSTCR3;

  uint8_t res54[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTENDCR3;

  uint8_t res55[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:2;
      uint64_t reservedSpace0:2;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
      uint64_t ADTSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR3;

  uint8_t res56[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP3;

  uint8_t res57[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP3;

  uint8_t res58[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR3;

  uint8_t res59[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
      uint64_t ADTACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR3;

  uint8_t res60[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTIP:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTIPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTPR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTPRR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR3;

  uint8_t res61[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR4;

  uint8_t res62[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTSTCR4;

  uint8_t res63[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTENDCR4;

  uint8_t res64[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:2;
      uint64_t reservedSpace0:2;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
      uint64_t ADTSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR4;

  uint8_t res65[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP4;

  uint8_t res66[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP4;

  uint8_t res67[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR4;

  uint8_t res68[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
      uint64_t ADTACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR4;

  uint8_t res69[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTIP:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTIPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTPR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTPRR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR4;

  uint8_t res70[335];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADOPDIG000:1;
      uint64_t ADOPDIG001:1;
      uint64_t ADOPDIG002:1;
      uint64_t ADOPDIG003:1;
      uint64_t ADOPDIG004:1;
      uint64_t ADOPDIG005:1;
      uint64_t ADOPDIG006:1;
      uint64_t ADOPDIG007:1;
      uint64_t ADOPDIG008:1;
      uint64_t ADOPDIG009:1;
      uint64_t ADOPDIG010:1;
      uint64_t ADOPDIG011:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADOPDIG0;

};

#define ADCG0 (*(volatile struct ADCG0_tag *) 0xfff91000)

struct ADCG1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCTRL:6;
      uint64_t reservedSpace0:1;
      uint64_t ADIE:1;
      uint64_t reservedSpace1:5;
      uint64_t CNVCLS:3;
      uint64_t PDE:1;
      uint64_t PUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCR23;

  uint8_t res0[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR00:16;
      uint64_t DR01:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR02:16;
      uint64_t DR03:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR04:16;
      uint64_t DR05:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR06:16;
      uint64_t DR07:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR08:16;
      uint64_t DR09:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR10:16;
      uint64_t DR11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR12:16;
      uint64_t DR13:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR14:16;
      uint64_t DR15:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR16:16;
      uint64_t DR17:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR18:16;
      uint64_t DR19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR20:16;
      uint64_t DR21:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR22:16;
      uint64_t DR23:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR22;

  uint8_t res1[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR00:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR01:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR02:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR03:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR04:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR05:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR06:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR07:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR08:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR09:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR10:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR11:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR12:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR13:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR14:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR15:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR16:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR17:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR18:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR19:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR20:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR21:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR22:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR23:16;
      uint64_t ID:5;
      uint64_t reservedSpace0:3;
      uint64_t PRTY:1;
      uint64_t WFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR23;

  uint8_t res2[224];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SMPCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SMPCR;

  uint8_t res3[62];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADHALTR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SUSMTD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR1;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSKCFMT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MPXCURCR;

  uint8_t res6[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPXCUR:5;
      uint64_t reservedSpace0:11;
      uint64_t MSKC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPXCURR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MPXOW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MPXOWR;

  uint8_t res7[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADDNT:1;
      uint64_t reservedSpace0:3;
      uint64_t DFMT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR2;

  uint8_t res8[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP0;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP1;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP2;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP3;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADENDP4;

  uint8_t res13[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IDEIE:1;
      uint64_t PEIE:1;
      uint64_t OWEIE:1;
      uint64_t ULEIE:1;
      uint64_t RDCLRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFTCR;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TDLV:2;
      uint64_t reservedSpace0:5;
      uint64_t TDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TDCR;

  uint8_t res15[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODPW:6;
      uint64_t reservedSpace0:1;
      uint64_t ODE:1;
      uint64_t reservedSpace1:23;
      uint64_t ODDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLMTB:16;
      uint64_t ULMTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULLMTBR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLMTB:16;
      uint64_t ULMTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULLMTBR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LLMTB:16;
      uint64_t ULMTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULLMTBR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IDEC:1;
      uint64_t PEC:1;
      uint64_t OWEC:1;
      uint64_t ULEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ECR;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t ULE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULER;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OWECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t OWE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OWER;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t PE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PER;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IDECAP:6;
      uint64_t reservedSpace0:1;
      uint64_t IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IDER;

  uint8_t res20[23];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SMPST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THSMPSTCR;

  uint8_t res21[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t THSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THSTPCR;

  uint8_t res22[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ASMPMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THCR;

  uint8_t res23[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HLDST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THAHLDSTCR;

  uint8_t res24[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HLDST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THBHLDSTCR;

  uint8_t res25[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGS:2;
      uint64_t reservedSpace0:2;
      uint64_t HLDTE:1;
      uint64_t HLDCTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THACR;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGS:2;
      uint64_t reservedSpace0:2;
      uint64_t HLDTE:1;
      uint64_t HLDCTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THBCR;

  uint8_t res27[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TH0E:1;
      uint64_t TH1E:1;
      uint64_t TH2E:1;
      uint64_t TH3E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) THER;

  uint8_t res28[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TH0GS:1;
      uint64_t reservedSpace0:1;
      uint64_t TH1GS:1;
      uint64_t reservedSpace1:1;
      uint64_t TH2GS:1;
      uint64_t reservedSpace2:1;
      uint64_t TH3GS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) THGSR;

  uint8_t res29[74];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR0;

  uint8_t res30[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:1;
      uint64_t reservedSpace0:3;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR0;

  uint8_t res31[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP0;

  uint8_t res32[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP0;

  uint8_t res33[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR0;

  uint8_t res34[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR0;

  uint8_t res35[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR0;

  uint8_t res36[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR1;

  uint8_t res37[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:1;
      uint64_t reservedSpace0:3;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR1;

  uint8_t res38[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP1;

  uint8_t res39[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP1;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR1;

  uint8_t res41[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR1;

  uint8_t res42[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR1;

  uint8_t res43[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR2;

  uint8_t res44[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:1;
      uint64_t reservedSpace0:3;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR2;

  uint8_t res45[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP2;

  uint8_t res46[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP2;

  uint8_t res47[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR2;

  uint8_t res48[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR2;

  uint8_t res49[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR2;

  uint8_t res50[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR3;

  uint8_t res51[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTSTCR3;

  uint8_t res52[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTENDCR3;

  uint8_t res53[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:2;
      uint64_t reservedSpace0:2;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
      uint64_t ADTSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR3;

  uint8_t res54[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP3;

  uint8_t res55[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP3;

  uint8_t res56[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR3;

  uint8_t res57[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
      uint64_t ADTACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR3;

  uint8_t res58[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTIP:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTIPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTPR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTPRR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR3;

  uint8_t res59[79];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSTCR4;

  uint8_t res60[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTSTCR4;

  uint8_t res61[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADTEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADTENDCR4;

  uint8_t res62[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRGMD:2;
      uint64_t reservedSpace0:2;
      uint64_t ADIE:1;
      uint64_t SCANMD:1;
      uint64_t ADSTARTE:1;
      uint64_t ADTSTARTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGCR4;

  uint8_t res63[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCSP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCSP4;

  uint8_t res64[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VCEP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGVCEP4;

  uint8_t res65[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGMCYCR4;

  uint8_t res66[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SGACT:1;
      uint64_t ADTACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SGSR4;

  uint8_t res67[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTIP:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTIPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADTPR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADTPRR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ULS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ULLMSR4;

  uint8_t res68[335];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADOPDIG100:1;
      uint64_t ADOPDIG101:1;
      uint64_t ADOPDIG102:1;
      uint64_t ADOPDIG103:1;
      uint64_t ADOPDIG104:1;
      uint64_t ADOPDIG105:1;
      uint64_t ADOPDIG106:1;
      uint64_t ADOPDIG107:1;
      uint64_t ADOPDIG108:1;
      uint64_t ADOPDIG109:1;
      uint64_t ADOPDIG110:1;
      uint64_t ADOPDIG111:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADOPDIG1;

};

#define ADCG1 (*(volatile struct ADCG1_tag *) 0xfff92000)

struct TSN0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSNEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSNST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSNSELFDIAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIAG;

};

#define TSN0 (*(volatile struct TSN0_tag *) 0xfff93000)

struct PBG2_tag
{
  uint32_t FSGD2APROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID00;

  uint32_t FSGD2APROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID01;

  uint32_t FSGD2APROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID02;

  uint32_t FSGD2APROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID03;

  uint32_t FSGD2APROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID04;

  uint32_t FSGD2APROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID05;

  uint32_t FSGD2APROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID06;

  uint32_t FSGD2APROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID07;

  uint32_t FSGD2APROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID08;

  uint32_t FSGD2APROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID09;

  uint32_t FSGD2APROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID10;

  uint32_t FSGD2APROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID11;

  uint32_t FSGD2APROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID12;

  uint32_t FSGD2APROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID13;

  uint32_t FSGD2APROT14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID14;

  uint32_t FSGD2APROT15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2ASPID15;

  uint32_t FSGD2BPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID00;

  uint32_t FSGD2BPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID01;

  uint32_t FSGD2BPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID02;

  uint32_t FSGD2BPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID03;

  uint32_t FSGD2BPROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID04;

  uint32_t FSGD2BPROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID05;

  uint32_t FSGD2BPROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID06;

  uint32_t FSGD2BPROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID07;

  uint32_t FSGD2BPROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID08;

  uint32_t FSGD2BPROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID09;

  uint32_t FSGD2BPROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID10;

  uint32_t FSGD2BPROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID11;

  uint32_t FSGD2BPROT12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID12;

  uint32_t FSGD2BPROT13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2BSPID13;

  uint8_t res0[16];

  uint32_t FSGD2CPROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID00;

  uint32_t FSGD2CPROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID01;

  uint32_t FSGD2CPROT02;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID02;

  uint32_t FSGD2CPROT03;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID03;

  uint32_t FSGD2CPROT04;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID04;

  uint32_t FSGD2CPROT05;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID05;

  uint32_t FSGD2CPROT06;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID06;

  uint32_t FSGD2CPROT07;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID07;

  uint32_t FSGD2CPROT08;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID08;

  uint32_t FSGD2CPROT09;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID09;

  uint32_t FSGD2CPROT10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID10;

  uint32_t FSGD2CPROT11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGD2CSPID11;

  uint8_t res1[672];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRSLV2CTL;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV2STAT;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
      uint64_t reservedSpace0:12;
      uint64_t PEID:3;
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLV2TYPE;

};

#define PBG2 (*(volatile struct PBG2_tag *) 0xfff94000)

struct PBECC2_tag
{
  uint32_t APEC1ECCCTL;
  uint32_t APEC1ERRINT;
  uint32_t APEC1STCLR;
  uint32_t APEC1OVFSTR;
  uint32_t APEC11STERSTR;
  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APEC11STEADR0;

};

#define PBECC2 (*(volatile struct PBECC2_tag *) 0xfff94800)

struct DTSMRG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTDTS0:1;
      uint64_t INTDTS1:1;
      uint64_t INTDTS2:1;
      uint64_t INTDTS3:1;
      uint64_t INTDTS4:1;
      uint64_t INTDTS5:1;
      uint64_t INTDTS6:1;
      uint64_t INTDTS7:1;
      uint64_t INTDTS8:1;
      uint64_t INTDTS9:1;
      uint64_t INTDTS10:1;
      uint64_t INTDTS11:1;
      uint64_t INTDTS12:1;
      uint64_t INTDTS13:1;
      uint64_t INTDTS14:1;
      uint64_t INTDTS15:1;
      uint64_t INTDTS16:1;
      uint64_t INTDTS17:1;
      uint64_t INTDTS18:1;
      uint64_t INTDTS19:1;
      uint64_t INTDTS20:1;
      uint64_t INTDTS21:1;
      uint64_t INTDTS22:1;
      uint64_t INTDTS23:1;
      uint64_t INTDTS24:1;
      uint64_t INTDTS25:1;
      uint64_t INTDTS26:1;
      uint64_t INTDTS27:1;
      uint64_t INTDTS28:1;
      uint64_t INTDTS29:1;
      uint64_t INTDTS30:1;
      uint64_t INTDTS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTDTS32:1;
      uint64_t INTDTS33:1;
      uint64_t INTDTS34:1;
      uint64_t INTDTS35:1;
      uint64_t INTDTS36:1;
      uint64_t INTDTS37:1;
      uint64_t INTDTS38:1;
      uint64_t INTDTS39:1;
      uint64_t INTDTS40:1;
      uint64_t INTDTS41:1;
      uint64_t INTDTS42:1;
      uint64_t INTDTS43:1;
      uint64_t INTDTS44:1;
      uint64_t INTDTS45:1;
      uint64_t INTDTS46:1;
      uint64_t INTDTS47:1;
      uint64_t INTDTS48:1;
      uint64_t INTDTS49:1;
      uint64_t INTDTS50:1;
      uint64_t INTDTS51:1;
      uint64_t INTDTS52:1;
      uint64_t INTDTS53:1;
      uint64_t INTDTS54:1;
      uint64_t INTDTS55:1;
      uint64_t INTDTS56:1;
      uint64_t INTDTS57:1;
      uint64_t INTDTS58:1;
      uint64_t INTDTS59:1;
      uint64_t INTDTS60:1;
      uint64_t INTDTS61:1;
      uint64_t INTDTS62:1;
      uint64_t INTDTS63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTDTS64:1;
      uint64_t INTDTS65:1;
      uint64_t INTDTS66:1;
      uint64_t INTDTS67:1;
      uint64_t INTDTS68:1;
      uint64_t INTDTS69:1;
      uint64_t INTDTS70:1;
      uint64_t INTDTS71:1;
      uint64_t INTDTS72:1;
      uint64_t INTDTS73:1;
      uint64_t INTDTS74:1;
      uint64_t INTDTS75:1;
      uint64_t INTDTS76:1;
      uint64_t INTDTS77:1;
      uint64_t INTDTS78:1;
      uint64_t INTDTS79:1;
      uint64_t INTDTS80:1;
      uint64_t INTDTS81:1;
      uint64_t INTDTS82:1;
      uint64_t INTDTS83:1;
      uint64_t INTDTS84:1;
      uint64_t INTDTS85:1;
      uint64_t INTDTS86:1;
      uint64_t INTDTS87:1;
      uint64_t INTDTS88:1;
      uint64_t INTDTS89:1;
      uint64_t INTDTS90:1;
      uint64_t INTDTS91:1;
      uint64_t INTDTS92:1;
      uint64_t INTDTS93:1;
      uint64_t INTDTS94:1;
      uint64_t INTDTS95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTDTS96:1;
      uint64_t INTDTS97:1;
      uint64_t INTDTS98:1;
      uint64_t INTDTS99:1;
      uint64_t INTDTS100:1;
      uint64_t INTDTS101:1;
      uint64_t INTDTS102:1;
      uint64_t INTDTS103:1;
      uint64_t INTDTS104:1;
      uint64_t INTDTS105:1;
      uint64_t INTDTS106:1;
      uint64_t INTDTS107:1;
      uint64_t INTDTS108:1;
      uint64_t INTDTS109:1;
      uint64_t INTDTS110:1;
      uint64_t INTDTS111:1;
      uint64_t INTDTS112:1;
      uint64_t INTDTS113:1;
      uint64_t INTDTS114:1;
      uint64_t INTDTS115:1;
      uint64_t INTDTS116:1;
      uint64_t INTDTS117:1;
      uint64_t INTDTS118:1;
      uint64_t INTDTS119:1;
      uint64_t INTDTS120:1;
      uint64_t INTDTS121:1;
      uint64_t INTDTS122:1;
      uint64_t INTDTS123:1;
      uint64_t INTDTS124:1;
      uint64_t reservedSpace0:2;
      uint64_t INTDTS127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCTDTS0:1;
      uint64_t INTCTDTS1:1;
      uint64_t INTCTDTS2:1;
      uint64_t INTCTDTS3:1;
      uint64_t INTCTDTS4:1;
      uint64_t INTCTDTS5:1;
      uint64_t INTCTDTS6:1;
      uint64_t INTCTDTS7:1;
      uint64_t INTCTDTS8:1;
      uint64_t INTCTDTS9:1;
      uint64_t INTCTDTS10:1;
      uint64_t INTCTDTS11:1;
      uint64_t INTCTDTS12:1;
      uint64_t INTCTDTS13:1;
      uint64_t INTCTDTS14:1;
      uint64_t INTCTDTS15:1;
      uint64_t INTCTDTS16:1;
      uint64_t INTCTDTS17:1;
      uint64_t INTCTDTS18:1;
      uint64_t INTCTDTS19:1;
      uint64_t INTCTDTS20:1;
      uint64_t INTCTDTS21:1;
      uint64_t INTCTDTS22:1;
      uint64_t INTCTDTS23:1;
      uint64_t INTCTDTS24:1;
      uint64_t INTCTDTS25:1;
      uint64_t INTCTDTS26:1;
      uint64_t INTCTDTS27:1;
      uint64_t INTCTDTS28:1;
      uint64_t INTCTDTS29:1;
      uint64_t INTCTDTS30:1;
      uint64_t INTCTDTS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCTDTS32:1;
      uint64_t INTCTDTS33:1;
      uint64_t INTCTDTS34:1;
      uint64_t INTCTDTS35:1;
      uint64_t INTCTDTS36:1;
      uint64_t INTCTDTS37:1;
      uint64_t INTCTDTS38:1;
      uint64_t INTCTDTS39:1;
      uint64_t INTCTDTS40:1;
      uint64_t INTCTDTS41:1;
      uint64_t INTCTDTS42:1;
      uint64_t INTCTDTS43:1;
      uint64_t INTCTDTS44:1;
      uint64_t INTCTDTS45:1;
      uint64_t INTCTDTS46:1;
      uint64_t INTCTDTS47:1;
      uint64_t INTCTDTS48:1;
      uint64_t INTCTDTS49:1;
      uint64_t INTCTDTS50:1;
      uint64_t INTCTDTS51:1;
      uint64_t INTCTDTS52:1;
      uint64_t INTCTDTS53:1;
      uint64_t INTCTDTS54:1;
      uint64_t INTCTDTS55:1;
      uint64_t INTCTDTS56:1;
      uint64_t INTCTDTS57:1;
      uint64_t INTCTDTS58:1;
      uint64_t INTCTDTS59:1;
      uint64_t INTCTDTS60:1;
      uint64_t INTCTDTS61:1;
      uint64_t INTCTDTS62:1;
      uint64_t INTCTDTS63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCTDTS64:1;
      uint64_t INTCTDTS65:1;
      uint64_t INTCTDTS66:1;
      uint64_t INTCTDTS67:1;
      uint64_t INTCTDTS68:1;
      uint64_t INTCTDTS69:1;
      uint64_t INTCTDTS70:1;
      uint64_t INTCTDTS71:1;
      uint64_t INTCTDTS72:1;
      uint64_t INTCTDTS73:1;
      uint64_t INTCTDTS74:1;
      uint64_t INTCTDTS75:1;
      uint64_t INTCTDTS76:1;
      uint64_t INTCTDTS77:1;
      uint64_t INTCTDTS78:1;
      uint64_t INTCTDTS79:1;
      uint64_t INTCTDTS80:1;
      uint64_t INTCTDTS81:1;
      uint64_t INTCTDTS82:1;
      uint64_t INTCTDTS83:1;
      uint64_t INTCTDTS84:1;
      uint64_t INTCTDTS85:1;
      uint64_t INTCTDTS86:1;
      uint64_t INTCTDTS87:1;
      uint64_t INTCTDTS88:1;
      uint64_t INTCTDTS89:1;
      uint64_t INTCTDTS90:1;
      uint64_t INTCTDTS91:1;
      uint64_t INTCTDTS92:1;
      uint64_t INTCTDTS93:1;
      uint64_t INTCTDTS94:1;
      uint64_t INTCTDTS95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCTDTS96:1;
      uint64_t INTCTDTS97:1;
      uint64_t INTCTDTS98:1;
      uint64_t INTCTDTS99:1;
      uint64_t INTCTDTS100:1;
      uint64_t INTCTDTS101:1;
      uint64_t INTCTDTS102:1;
      uint64_t INTCTDTS103:1;
      uint64_t INTCTDTS104:1;
      uint64_t INTCTDTS105:1;
      uint64_t INTCTDTS106:1;
      uint64_t INTCTDTS107:1;
      uint64_t INTCTDTS108:1;
      uint64_t INTCTDTS109:1;
      uint64_t INTCTDTS110:1;
      uint64_t INTCTDTS111:1;
      uint64_t INTCTDTS112:1;
      uint64_t INTCTDTS113:1;
      uint64_t INTCTDTS114:1;
      uint64_t INTCTDTS115:1;
      uint64_t INTCTDTS116:1;
      uint64_t INTCTDTS117:1;
      uint64_t INTCTDTS118:1;
      uint64_t INTCTDTS119:1;
      uint64_t INTCTDTS120:1;
      uint64_t INTCTDTS121:1;
      uint64_t INTCTDTS122:1;
      uint64_t INTCTDTS123:1;
      uint64_t INTCTDTS124:1;
      uint64_t reservedSpace0:2;
      uint64_t INTCTDTS127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR0:1;
      uint64_t INTCLR1:1;
      uint64_t INTCLR2:1;
      uint64_t INTCLR3:1;
      uint64_t INTCLR4:1;
      uint64_t INTCLR5:1;
      uint64_t INTCLR6:1;
      uint64_t INTCLR7:1;
      uint64_t INTCLR8:1;
      uint64_t INTCLR9:1;
      uint64_t INTCLR10:1;
      uint64_t INTCLR11:1;
      uint64_t INTCLR12:1;
      uint64_t INTCLR13:1;
      uint64_t INTCLR14:1;
      uint64_t INTCLR15:1;
      uint64_t INTCLR16:1;
      uint64_t INTCLR17:1;
      uint64_t INTCLR18:1;
      uint64_t INTCLR19:1;
      uint64_t INTCLR20:1;
      uint64_t INTCLR21:1;
      uint64_t INTCLR22:1;
      uint64_t INTCLR23:1;
      uint64_t INTCLR24:1;
      uint64_t INTCLR25:1;
      uint64_t INTCLR26:1;
      uint64_t INTCLR27:1;
      uint64_t INTCLR28:1;
      uint64_t INTCLR29:1;
      uint64_t INTCLR30:1;
      uint64_t INTCLR31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR32:1;
      uint64_t INTCLR33:1;
      uint64_t INTCLR34:1;
      uint64_t INTCLR35:1;
      uint64_t INTCLR36:1;
      uint64_t INTCLR37:1;
      uint64_t INTCLR38:1;
      uint64_t INTCLR39:1;
      uint64_t INTCLR40:1;
      uint64_t INTCLR41:1;
      uint64_t INTCLR42:1;
      uint64_t INTCLR43:1;
      uint64_t INTCLR44:1;
      uint64_t INTCLR45:1;
      uint64_t INTCLR46:1;
      uint64_t INTCLR47:1;
      uint64_t INTCLR48:1;
      uint64_t INTCLR49:1;
      uint64_t INTCLR50:1;
      uint64_t INTCLR51:1;
      uint64_t INTCLR52:1;
      uint64_t INTCLR53:1;
      uint64_t INTCLR54:1;
      uint64_t INTCLR55:1;
      uint64_t INTCLR56:1;
      uint64_t INTCLR57:1;
      uint64_t INTCLR58:1;
      uint64_t INTCLR59:1;
      uint64_t INTCLR60:1;
      uint64_t INTCLR61:1;
      uint64_t INTCLR62:1;
      uint64_t INTCLR63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR64:1;
      uint64_t INTCLR65:1;
      uint64_t INTCLR66:1;
      uint64_t INTCLR67:1;
      uint64_t INTCLR68:1;
      uint64_t INTCLR69:1;
      uint64_t INTCLR70:1;
      uint64_t INTCLR71:1;
      uint64_t INTCLR72:1;
      uint64_t INTCLR73:1;
      uint64_t INTCLR74:1;
      uint64_t INTCLR75:1;
      uint64_t INTCLR76:1;
      uint64_t INTCLR77:1;
      uint64_t INTCLR78:1;
      uint64_t INTCLR79:1;
      uint64_t INTCLR80:1;
      uint64_t INTCLR81:1;
      uint64_t INTCLR82:1;
      uint64_t INTCLR83:1;
      uint64_t INTCLR84:1;
      uint64_t INTCLR85:1;
      uint64_t INTCLR86:1;
      uint64_t INTCLR87:1;
      uint64_t INTCLR88:1;
      uint64_t INTCLR89:1;
      uint64_t INTCLR90:1;
      uint64_t INTCLR91:1;
      uint64_t INTCLR92:1;
      uint64_t INTCLR93:1;
      uint64_t INTCLR94:1;
      uint64_t INTCLR95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR96:1;
      uint64_t INTCLR97:1;
      uint64_t INTCLR98:1;
      uint64_t INTCLR99:1;
      uint64_t INTCLR100:1;
      uint64_t INTCLR101:1;
      uint64_t INTCLR102:1;
      uint64_t INTCLR103:1;
      uint64_t INTCLR104:1;
      uint64_t INTCLR105:1;
      uint64_t INTCLR106:1;
      uint64_t INTCLR107:1;
      uint64_t INTCLR108:1;
      uint64_t INTCLR109:1;
      uint64_t INTCLR110:1;
      uint64_t INTCLR111:1;
      uint64_t INTCLR112:1;
      uint64_t INTCLR113:1;
      uint64_t INTCLR114:1;
      uint64_t INTCLR115:1;
      uint64_t INTCLR116:1;
      uint64_t INTCLR117:1;
      uint64_t INTCLR118:1;
      uint64_t INTCLR119:1;
      uint64_t INTCLR120:1;
      uint64_t INTCLR121:1;
      uint64_t INTCLR122:1;
      uint64_t INTCLR123:1;
      uint64_t INTCLR124:1;
      uint64_t reservedSpace0:2;
      uint64_t INTCLR127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR0:1;
      uint64_t INTCLR1:1;
      uint64_t INTCLR2:1;
      uint64_t INTCLR3:1;
      uint64_t INTCLR4:1;
      uint64_t INTCLR5:1;
      uint64_t INTCLR6:1;
      uint64_t INTCLR7:1;
      uint64_t INTCLR8:1;
      uint64_t INTCLR9:1;
      uint64_t INTCLR10:1;
      uint64_t INTCLR11:1;
      uint64_t INTCLR12:1;
      uint64_t INTCLR13:1;
      uint64_t INTCLR14:1;
      uint64_t INTCLR15:1;
      uint64_t INTCLR16:1;
      uint64_t INTCLR17:1;
      uint64_t INTCLR18:1;
      uint64_t INTCLR19:1;
      uint64_t INTCLR20:1;
      uint64_t INTCLR21:1;
      uint64_t INTCLR22:1;
      uint64_t INTCLR23:1;
      uint64_t INTCLR24:1;
      uint64_t INTCLR25:1;
      uint64_t INTCLR26:1;
      uint64_t INTCLR27:1;
      uint64_t INTCLR28:1;
      uint64_t INTCLR29:1;
      uint64_t INTCLR30:1;
      uint64_t INTCLR31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR32:1;
      uint64_t INTCLR33:1;
      uint64_t INTCLR34:1;
      uint64_t INTCLR35:1;
      uint64_t INTCLR36:1;
      uint64_t INTCLR37:1;
      uint64_t INTCLR38:1;
      uint64_t INTCLR39:1;
      uint64_t INTCLR40:1;
      uint64_t INTCLR41:1;
      uint64_t INTCLR42:1;
      uint64_t INTCLR43:1;
      uint64_t INTCLR44:1;
      uint64_t INTCLR45:1;
      uint64_t INTCLR46:1;
      uint64_t INTCLR47:1;
      uint64_t INTCLR48:1;
      uint64_t INTCLR49:1;
      uint64_t INTCLR50:1;
      uint64_t INTCLR51:1;
      uint64_t INTCLR52:1;
      uint64_t INTCLR53:1;
      uint64_t INTCLR54:1;
      uint64_t INTCLR55:1;
      uint64_t INTCLR56:1;
      uint64_t INTCLR57:1;
      uint64_t INTCLR58:1;
      uint64_t INTCLR59:1;
      uint64_t INTCLR60:1;
      uint64_t INTCLR61:1;
      uint64_t INTCLR62:1;
      uint64_t INTCLR63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR64:1;
      uint64_t INTCLR65:1;
      uint64_t INTCLR66:1;
      uint64_t INTCLR67:1;
      uint64_t INTCLR68:1;
      uint64_t INTCLR69:1;
      uint64_t INTCLR70:1;
      uint64_t INTCLR71:1;
      uint64_t INTCLR72:1;
      uint64_t INTCLR73:1;
      uint64_t INTCLR74:1;
      uint64_t INTCLR75:1;
      uint64_t INTCLR76:1;
      uint64_t INTCLR77:1;
      uint64_t INTCLR78:1;
      uint64_t INTCLR79:1;
      uint64_t INTCLR80:1;
      uint64_t INTCLR81:1;
      uint64_t INTCLR82:1;
      uint64_t INTCLR83:1;
      uint64_t INTCLR84:1;
      uint64_t INTCLR85:1;
      uint64_t INTCLR86:1;
      uint64_t INTCLR87:1;
      uint64_t INTCLR88:1;
      uint64_t INTCLR89:1;
      uint64_t INTCLR90:1;
      uint64_t INTCLR91:1;
      uint64_t INTCLR92:1;
      uint64_t INTCLR93:1;
      uint64_t INTCLR94:1;
      uint64_t INTCLR95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLR96:1;
      uint64_t INTCLR97:1;
      uint64_t INTCLR98:1;
      uint64_t INTCLR99:1;
      uint64_t INTCLR100:1;
      uint64_t INTCLR101:1;
      uint64_t INTCLR102:1;
      uint64_t INTCLR103:1;
      uint64_t INTCLR104:1;
      uint64_t INTCLR105:1;
      uint64_t INTCLR106:1;
      uint64_t INTCLR107:1;
      uint64_t INTCLR108:1;
      uint64_t INTCLR109:1;
      uint64_t INTCLR110:1;
      uint64_t INTCLR111:1;
      uint64_t INTCLR112:1;
      uint64_t INTCLR113:1;
      uint64_t INTCLR114:1;
      uint64_t INTCLR115:1;
      uint64_t INTCLR116:1;
      uint64_t INTCLR117:1;
      uint64_t INTCLR118:1;
      uint64_t INTCLR119:1;
      uint64_t INTCLR120:1;
      uint64_t INTCLR121:1;
      uint64_t INTCLR122:1;
      uint64_t INTCLR123:1;
      uint64_t INTCLR124:1;
      uint64_t reservedSpace0:2;
      uint64_t INTCLR127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTCLR7;

};

#define DTSMRG (*(volatile struct DTSMRG_tag *) 0xfff98000)

struct DMATRG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACSEL000:1;
      uint64_t DMACSEL001:1;
      uint64_t DMACSEL002:1;
      uint64_t DMACSEL003:1;
      uint64_t DMACSEL004:1;
      uint64_t DMACSEL005:1;
      uint64_t DMACSEL006:1;
      uint64_t DMACSEL007:1;
      uint64_t DMACSEL008:1;
      uint64_t DMACSEL009:1;
      uint64_t DMACSEL010:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTRGSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACSEL100:1;
      uint64_t DMACSEL101:1;
      uint64_t DMACSEL102:1;
      uint64_t DMACSEL103:1;
      uint64_t DMACSEL104:1;
      uint64_t DMACSEL105:1;
      uint64_t DMACSEL106:1;
      uint64_t DMACSEL107:1;
      uint64_t DMACSEL108:1;
      uint64_t DMACSEL109:1;
      uint64_t DMACSEL110:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTRGSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTSSEL000:1;
      uint64_t DTSSEL001:1;
      uint64_t DTSSEL002:1;
      uint64_t DTSSEL003:1;
      uint64_t DTSSEL004:1;
      uint64_t DTSSEL005:1;
      uint64_t DTSSEL006:1;
      uint64_t DTSSEL007:1;
      uint64_t DTSSEL008:1;
      uint64_t DTSSEL009:1;
      uint64_t DTSSEL010:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSTRGSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTSSEL100:1;
      uint64_t DTSSEL101:1;
      uint64_t DTSSEL102:1;
      uint64_t DTSSEL103:1;
      uint64_t DTSSEL104:1;
      uint64_t DTSSEL105:1;
      uint64_t DTSSEL106:1;
      uint64_t DTSSEL107:1;
      uint64_t DTSSEL108:1;
      uint64_t DTSSEL109:1;
      uint64_t DTSSEL110:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSTRGSEL1;

};

#define DMATRG (*(volatile struct DMATRG_tag *) 0xfff99000)

struct HBG_tag
{
  uint32_t FSGDF0PROT00;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGDF0SPID00;

  uint32_t FSGDF0PROT01;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSGDF0SPID01;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRE:1;
      uint64_t CLRO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRSLVF0CTL;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVF0STAT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE:1;
      uint64_t reservedSpace0:12;
      uint64_t PEID:3;
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSLVF0TYPE;

  uint8_t res2[4064];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSSPIDRG0;

};

#define HBG (*(volatile struct HBG_tag *) 0xfffa0000)

struct IPG_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t VD:1;
      uint64_t RD:1;
      uint64_t WR:1;
      uint64_t EX:1;
      uint64_t DS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECRUM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADRUM;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t E:1;
      uint64_t IRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ENUM;

  uint8_t res2[18];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t R1:1;
      uint64_t W1:1;
      uint64_t X1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMTUM0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t X0:1;
      uint64_t reservedSpace1:3;
      uint64_t X1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMTUM1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R0:1;
      uint64_t W0:1;
      uint64_t reservedSpace0:2;
      uint64_t R1:1;
      uint64_t W1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMTUM2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t R1:1;
      uint64_t W1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMTUM3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t R0:1;
      uint64_t W0:1;
      uint64_t reservedSpace0:2;
      uint64_t R1:1;
      uint64_t W1:1;
      uint64_t X1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMTUM4;

};

#define IPG (*(volatile struct IPG_tag *) 0xfffee002)

struct SEG_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEE:1;
      uint64_t reservedSpace0:1;
      uint64_t ICCE:1;
      uint64_t reservedSpace1:1;
      uint64_t VCIE:1;
      uint64_t reservedSpace2:1;
      uint64_t TCME:1;
      uint64_t reservedSpace3:1;
      uint64_t VCRE:1;
      uint64_t VPGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CONT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ICCF:1;
      uint64_t reservedSpace1:1;
      uint64_t VCIF:1;
      uint64_t reservedSpace2:1;
      uint64_t TCMF:1;
      uint64_t reservedSpace3:1;
      uint64_t VCRF:1;
      uint64_t VPGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FLAG;

  uint8_t res0[4];

  uint32_t ADDR;
};

#define SEG (*(volatile struct SEG_tag *) 0xfffee980)

struct INTC1_tag
{
  uint16_t EIC8;
  uint16_t EIC9;
  uint8_t res0[12];

  uint16_t EIC16;
  uint16_t EIC17;
  uint16_t EIC18;
  uint16_t EIC19;
  uint16_t EIC20;
  uint16_t EIC21;
  uint16_t EIC22;
  uint16_t EIC23;
  uint16_t EIC24;
  uint16_t EIC25;
  uint16_t EIC26;
  uint16_t EIC27;
  uint16_t EIC28;
  uint16_t EIC29;
  uint16_t EIC30;
  uint16_t EIC31;
  uint8_t res1[56];

  uint16_t FNC;
  uint16_t FIC;
  uint8_t res2[116];

  uint32_t IMR0;
  uint8_t res3[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD9;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEID:3;
      uint64_t reservedSpace0:13;
      uint64_t GPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIBD31;

};

#define INTC1 (*(volatile struct INTC1_tag *) 0xfffeea10)

struct TESTCOMP_tag
{
  uint32_t CMPTST0;
  uint32_t CMPTST1;
};

#define TESTCOMP (*(volatile struct TESTCOMP_tag *) 0xfffeed00)

struct CFU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TM_CC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TME0:1;
      uint64_t TME1:1;
      uint64_t TME2:1;
      uint64_t TME3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TM_ME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MES0:1;
      uint64_t MES1:1;
      uint64_t MES2:1;
      uint64_t MES3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TM_MS;

  uint8_t res1[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMA0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TM_MA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TM_MA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMA2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TM_MA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMA3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TM_MA3;

};

#define CFU (*(volatile struct CFU_tag *) 0xffff7808)

struct GRAMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTBUFMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTBCONFIG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTBUFTMREN:1;
      uint64_t WTBUFTMRCMP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTBCONFIG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTBUFTMCCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTBCONFIG2;

};

#define GRAMC (*(volatile struct GRAMC_tag *) 0xffff7a04)

struct DMASS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMASPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTSUST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTSTIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTSACT:1;
      uint64_t DTSACH:7;
      uint64_t DTSCYC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSSTS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM0ER:8;
      uint64_t DM1ER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTSER:1;
      uint64_t DTSERWR:1;
      uint64_t reservedSpace0:6;
      uint64_t DTSERCH:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMSEDAD:12;
      uint64_t reservedSpace0:2;
      uint64_t RAMSEDOV:1;
      uint64_t RAMSED:1;
      uint64_t RAMDEDAD:12;
      uint64_t reservedSpace1:2;
      uint64_t RAMDEDOV:1;
      uint64_t RAMDED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTSERC:1;
      uint64_t reservedSpace0:13;
      uint64_t RAMSEDOVC:1;
      uint64_t RAMSEDC:1;
      uint64_t reservedSpace1:14;
      uint64_t RAMDEDOVC:1;
      uint64_t RAMDEDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSERC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VF:1;
      uint64_t reservedSpace0:3;
      uint64_t VCH:3;
      uint64_t reservedSpace1:10;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace2:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM0CMV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VF:1;
      uint64_t reservedSpace0:3;
      uint64_t VCH:3;
      uint64_t reservedSpace1:10;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace2:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM1CMV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VF:1;
      uint64_t reservedSpace0:3;
      uint64_t VCH:7;
      uint64_t reservedSpace1:6;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace2:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSCMV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM0VC:1;
      uint64_t DM1VC:1;
      uint64_t DTSVC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMVC;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACY:16;
      uint64_t DTSCYC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFRSTS;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS0PR:2;
      uint64_t DTS1PR:2;
      uint64_t DTS2PR:2;
      uint64_t DTS3PR:2;
      uint64_t DTS4PR:2;
      uint64_t DTS5PR:2;
      uint64_t DTS6PR:2;
      uint64_t DTS7PR:2;
      uint64_t DTS8PR:2;
      uint64_t DTS9PR:2;
      uint64_t DTS10PR:2;
      uint64_t DTS11PR:2;
      uint64_t DTS12PR:2;
      uint64_t DTS13PR:2;
      uint64_t DTS14PR:2;
      uint64_t DTS15PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS16PR:2;
      uint64_t DTS17PR:2;
      uint64_t DTS18PR:2;
      uint64_t DTS19PR:2;
      uint64_t DTS20PR:2;
      uint64_t DTS21PR:2;
      uint64_t DTS22PR:2;
      uint64_t DTS23PR:2;
      uint64_t DTS24PR:2;
      uint64_t DTS25PR:2;
      uint64_t DTS26PR:2;
      uint64_t DTS27PR:2;
      uint64_t DTS28PR:2;
      uint64_t DTS29PR:2;
      uint64_t DTS30PR:2;
      uint64_t DTS31PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS32PR:2;
      uint64_t DTS33PR:2;
      uint64_t DTS34PR:2;
      uint64_t DTS35PR:2;
      uint64_t DTS36PR:2;
      uint64_t DTS37PR:2;
      uint64_t DTS38PR:2;
      uint64_t DTS39PR:2;
      uint64_t DTS40PR:2;
      uint64_t DTS41PR:2;
      uint64_t DTS42PR:2;
      uint64_t DTS43PR:2;
      uint64_t DTS44PR:2;
      uint64_t DTS45PR:2;
      uint64_t DTS46PR:2;
      uint64_t DTS47PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS48PR:2;
      uint64_t DTS49PR:2;
      uint64_t DTS50PR:2;
      uint64_t DTS51PR:2;
      uint64_t DTS52PR:2;
      uint64_t DTS53PR:2;
      uint64_t DTS54PR:2;
      uint64_t DTS55PR:2;
      uint64_t DTS56PR:2;
      uint64_t DTS57PR:2;
      uint64_t DTS58PR:2;
      uint64_t DTS59PR:2;
      uint64_t DTS60PR:2;
      uint64_t DTS61PR:2;
      uint64_t DTS62PR:2;
      uint64_t DTS63PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS64PR:2;
      uint64_t DTS65PR:2;
      uint64_t DTS66PR:2;
      uint64_t DTS67PR:2;
      uint64_t DTS68PR:2;
      uint64_t DTS69PR:2;
      uint64_t DTS70PR:2;
      uint64_t DTS71PR:2;
      uint64_t DTS72PR:2;
      uint64_t DTS73PR:2;
      uint64_t DTS74PR:2;
      uint64_t DTS75PR:2;
      uint64_t DTS76PR:2;
      uint64_t DTS77PR:2;
      uint64_t DTS78PR:2;
      uint64_t DTS79PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS80PR:2;
      uint64_t DTS81PR:2;
      uint64_t DTS82PR:2;
      uint64_t DTS83PR:2;
      uint64_t DTS84PR:2;
      uint64_t DTS85PR:2;
      uint64_t DTS86PR:2;
      uint64_t DTS87PR:2;
      uint64_t DTS88PR:2;
      uint64_t DTS89PR:2;
      uint64_t DTS90PR:2;
      uint64_t DTS91PR:2;
      uint64_t DTS92PR:2;
      uint64_t DTS93PR:2;
      uint64_t DTS94PR:2;
      uint64_t DTS95PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS96PR:2;
      uint64_t DTS97PR:2;
      uint64_t DTS98PR:2;
      uint64_t DTS99PR:2;
      uint64_t DTS100PR:2;
      uint64_t DTS101PR:2;
      uint64_t DTS102PR:2;
      uint64_t DTS103PR:2;
      uint64_t DTS104PR:2;
      uint64_t DTS105PR:2;
      uint64_t DTS106PR:2;
      uint64_t DTS107PR:2;
      uint64_t DTS108PR:2;
      uint64_t DTS109PR:2;
      uint64_t DTS110PR:2;
      uint64_t DTS111PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS112PR:2;
      uint64_t DTS113PR:2;
      uint64_t DTS114PR:2;
      uint64_t DTS115PR:2;
      uint64_t DTS116PR:2;
      uint64_t DTS117PR:2;
      uint64_t DTS118PR:2;
      uint64_t DTS119PR:2;
      uint64_t DTS120PR:2;
      uint64_t DTS121PR:2;
      uint64_t DTS122PR:2;
      uint64_t DTS123PR:2;
      uint64_t DTS124PR:2;
      uint64_t reservedSpace0:4;
      uint64_t DTS127PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDIS:1;
      uint64_t SECDIS:1;
      uint64_t reservedSpace0:28;
      uint64_t PROT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRECCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEDIE:1;
      uint64_t DEDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRERINT;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:28;
      uint64_t PROT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWDAT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTWDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRDAT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTRDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWSEL:1;
      uint64_t ECCTST:1;
      uint64_t reservedSpace0:28;
      uint64_t PROT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADECCTCL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCDAT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADECCTDT;

  uint8_t res5[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM00CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM01CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM02CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM03CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM04CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM05CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM06CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM07CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM10CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM11CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM12CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM13CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM14CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM15CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM16CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DM17CM;

  uint8_t res6[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS000CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS001CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS002CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS003CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS004CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS005CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS006CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS007CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS008CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS009CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS010CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS011CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS012CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS013CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS014CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS015CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS016CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS017CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS018CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS019CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS020CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS021CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS022CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS023CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS024CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS025CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS026CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS027CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS028CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS029CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS030CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS031CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS032CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS033CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS034CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS035CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS036CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS037CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS038CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS039CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS040CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS041CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS042CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS043CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS044CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS045CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS046CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS047CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS048CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS049CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS050CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS051CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS052CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS053CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS054CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS055CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS056CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS057CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS058CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS059CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS060CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS061CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS062CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS063CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS064CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS065CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS066CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS067CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS068CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS069CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS070CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS071CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS072CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS073CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS074CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS075CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS076CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS077CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS078CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS079CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS080CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS081CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS082CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS083CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS084CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS085CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS086CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS087CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS088CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS089CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS090CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS091CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS092CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS093CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS094CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS095CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS096CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS097CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS098CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS099CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS100CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS101CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS102CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS103CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS104CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS105CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS106CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS107CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS108CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS109CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS110CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS111CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS112CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS113CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS114CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS115CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS116CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS117CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS118CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS119CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS120CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS121CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS122CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS123CM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
      uint64_t reservedSpace0:1;
      uint64_t UM:1;
      uint64_t SPID:5;
      uint64_t reservedSpace1:6;
      uint64_t PEID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS124CM;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC1;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC2;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC3;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC4;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC5;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC6;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC7;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC8;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC9;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC10;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC11;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC12;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC13;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC14;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTC15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t MLE:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t DRS:1;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRSA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRDA15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRTC15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCC15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCEN15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t DR:1;
      uint64_t reservedSpace0:2;
      uint64_t TC:1;
      uint64_t CC:1;
      uint64_t reservedSpace1:1;
      uint64_t ER:1;
      uint64_t CY:1;
      uint64_t reservedSpace2:2;
      uint64_t ERWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCST15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTS15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
      uint64_t reservedSpace0:3;
      uint64_t TCC:1;
      uint64_t CCC:1;
      uint64_t reservedSpace1:1;
      uint64_t ERC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCSTC15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
      uint64_t REQSEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQ15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFRRQC15;

  uint8_t res23[2052];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS000;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC000;

  uint8_t res24[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS001;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC001;

  uint8_t res25[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS002;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC002;

  uint8_t res26[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS003;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC003;

  uint8_t res27[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS004;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC004;

  uint8_t res28[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS005;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC005;

  uint8_t res29[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS006;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC006;

  uint8_t res30[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS007;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC007;

  uint8_t res31[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS008;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC008;

  uint8_t res32[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS009;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC009;

  uint8_t res33[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC010;

  uint8_t res34[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC011;

  uint8_t res35[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC012;

  uint8_t res36[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC013;

  uint8_t res37[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC014;

  uint8_t res38[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC015;

  uint8_t res39[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS016;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC016;

  uint8_t res40[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS017;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC017;

  uint8_t res41[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS018;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC018;

  uint8_t res42[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS019;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC019;

  uint8_t res43[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS020;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC020;

  uint8_t res44[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS021;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC021;

  uint8_t res45[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS022;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC022;

  uint8_t res46[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS023;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC023;

  uint8_t res47[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC024;

  uint8_t res48[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS025;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC025;

  uint8_t res49[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS026;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC026;

  uint8_t res50[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS027;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC027;

  uint8_t res51[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS028;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC028;

  uint8_t res52[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS029;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC029;

  uint8_t res53[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS030;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC030;

  uint8_t res54[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS031;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC031;

  uint8_t res55[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS032;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC032;

  uint8_t res56[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS033;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC033;

  uint8_t res57[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS034;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC034;

  uint8_t res58[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS035;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC035;

  uint8_t res59[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS036;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC036;

  uint8_t res60[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS037;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC037;

  uint8_t res61[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS038;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC038;

  uint8_t res62[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS039;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC039;

  uint8_t res63[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS040;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC040;

  uint8_t res64[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS041;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC041;

  uint8_t res65[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS042;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC042;

  uint8_t res66[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS043;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC043;

  uint8_t res67[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS044;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC044;

  uint8_t res68[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS045;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC045;

  uint8_t res69[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS046;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC046;

  uint8_t res70[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS047;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC047;

  uint8_t res71[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS048;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC048;

  uint8_t res72[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS049;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC049;

  uint8_t res73[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS050;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC050;

  uint8_t res74[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS051;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC051;

  uint8_t res75[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS052;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC052;

  uint8_t res76[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS053;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC053;

  uint8_t res77[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS054;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC054;

  uint8_t res78[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS055;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC055;

  uint8_t res79[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS056;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC056;

  uint8_t res80[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS057;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC057;

  uint8_t res81[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS058;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC058;

  uint8_t res82[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS059;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC059;

  uint8_t res83[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS060;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC060;

  uint8_t res84[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS061;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC061;

  uint8_t res85[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS062;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC062;

  uint8_t res86[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS063;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC063;

  uint8_t res87[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS064;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC064;

  uint8_t res88[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS065;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC065;

  uint8_t res89[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS066;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC066;

  uint8_t res90[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS067;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC067;

  uint8_t res91[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS068;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC068;

  uint8_t res92[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS069;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC069;

  uint8_t res93[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCT070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRSA070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRDA070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTRC:16;
      uint64_t RARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTRTC070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTCC070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSL070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQ:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFST070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSS070;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRQC:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFSC070;

  uint8_t res94[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTSA071;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTDA071;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:16;
      uint64_t ARC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTC071;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRM:2;
      uint64_t DS:3;
      uint64_t SACM:2;
      uint64_t DACM:2;
      uint64_t RLD1M:2;
      uint64_t RLD2M:2;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
      uint64_t CCE:1;
      uint64_t CHNE:2;
      uint64_t CHNSEL:7;
      uint64_t reservedSpace1:2;
      uint64_t ESE:1;