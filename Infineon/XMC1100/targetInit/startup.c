#include "XMC1200.h" 

extern int main(void);
extern void SysTickHandler(void);
extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


void Reset(void)
{
  volatile unsigned long* pulSrc = &_etext;
  volatile unsigned long* pulDest = &_data;
   
  while (pulDest < &_edata)
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_bss;
  while (pulDest < &_ebss)
  {
    *pulDest++ = 0;
  }
  
  main();
}

void IntDefaultHandler(void)
{
  while(1)
  {
  }
}

void SCU_1_IRQHandler()
{
  //To Do
  int8_t i = 0;
  i++;
}

typedef void (*pfnISR)(void);

__attribute__ ((section(".isr_vector")))
struct SISRType
{
  union
  {
    pfnISR        m_pfnISR;
    unsigned long m_dword;
  };
}g_ISRTable[] =
{
  (unsigned long)&_estack, // Initial stack pointer                             
  Reset, // Reset handler
  IntDefaultHandler, // NMI handler
  IntDefaultHandler, // Hard fault handler
  IntDefaultHandler, // MPU fault handler
  IntDefaultHandler, // Bus fault handler
  IntDefaultHandler, // Usage fault handler
  0, // Reserved
  0, // Reserved
  0, // Reserved
  0, // Reserved
  IntDefaultHandler, // SVCall handler
  IntDefaultHandler, // Debug monitor handler
  0, // Reserved
  IntDefaultHandler, // PendSV handler
  SysTickHandler, // SysTick handler
};
