/**
 * Chuong tring su dung ket hop timer voi ngat de chop tat LED BLUE voi tan so cao
 **/
#include <stdint.h>
#include <stdbool.h>
#include <inc/tm4c123gh6pm.h>
#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <driverlib/sysctl.h>
#include <driverlib/interrupt.h>
#include <driverlib/gpio.h>
#include <driverlib/timer.h>

int main(void)
{
    uint32_t ui32Period ;
    SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL| SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    // Kich hoat port F
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIO);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3); // Cau hinh 3 LED la output, o day chi su dung LED 2 thoi
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);




}
