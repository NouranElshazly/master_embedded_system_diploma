// startup.c
//made with Eng : Nouran 

#include "Platform_Types.h"
extern int main(void);

void Reset_Handler();

void Default_Handler()
{
	Reset_Handler();
}

void NMI_Handler()__attribute__((weak,alias("Default_Handler"))) ;
void H_Fault_Handler()__attribute__((weak,alias("Default_Handler")));
//reserve stack size
static uint64_t stack_top [256];
void (*  const g_p_fn_vectors[])() __attribute__ ((section(".vectors")))=
{(void (*)())   ((uint64_t )stack_top +sizeof (stack_top)),
&Reset_Handler,
&NMI_Handler,
&H_Fault_Handler,

};

extern  uint32_t _E_text ;
extern  uint32_t _S_DATA ;
extern  uint32_t _E_DATA ;
extern  uint32_t _S_bss ;
extern  uint32_t _E_bss ;
void Reset_Handler()
{ 
	int i ;
	//copy data section from flash to sram 
	 uint32_t DATA_size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA;
	uint8_t* P_src =(uint8_t*)& _E_text;
	uint8_t* P_dst =(uint8_t*)& _S_DATA;

	for( i =0 ; i < DATA_size ; i++)
	{
	*(uint8_t*)(P_dst++) = *(uint8_t*)P_src++;
	}

	//init .bss section in SRAM = 0; 
	 uint32_t bss_size = (uint8_t*)&_E_bss - (uint8_t*)&_S_bss;
	P_dst=(uint8_t*)& _S_bss;
	for(i =0 ; i < bss_size ; i++)
	{
	*(uint8_t*)(P_dst++) = (uint8_t) 0;
	}

	//jump main()
	main();
}