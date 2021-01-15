/**
 * Chuong tring doc nhiet do ADC
 */
#include <stdin.h>
#include <stdbool.h>
#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <driverlib/sysctl.h>
#include <driverlib/adc.h>

int main(void)
{
    uint32_t ui32ADC0Value[4]; //Khai bao mang 4 phan tu chua gia tri doc duoc tu ADC
    volatile uint32_t ui32TemAvg;
    volatile uint32_t ui32TemValueC;
    volatile uint32_t ui32TemValueF;

    SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ ); // Cau hinh he thong
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0) ;
    ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0); //Cau hinh bat trigger ACD
    ADCSequenceStepConfigure(ADC0_BASE,1,0, ADC_CTL_TS); // bat du lieu adc luu lan luot vao cac gia tri cua mang adc0value
    ADCSequenceStepConfigure(ADC0_BASE,1,1, ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC0_BASE,1,2, ADC_CTL_TS);
    ADCSequenceStepConfigure(ADC0_BASE,1,3, ADC_CTL_TS | ADC_CTL_IE | ADC_CTL_END );
    ADCSequenceEnable(ADC0_BASE, 1); //kich hoat cac du lieu

    while (1)
    {
        ADCIntClear(ADC0_BASE, 1); // Xoa cac gia tri adc co tu truoc
        ADCProcessorTrigger(ADC0_BASE,1);
        while(!ADCIntStatus(ADC0_BASE,1,false)) //Neu trang thai khoi tao cua ADC ok thi thuc hien buoc tiep theo
    }
}
