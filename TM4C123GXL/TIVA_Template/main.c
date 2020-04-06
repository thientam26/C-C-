/**
 *Chuong trinh bat tat LED
 */
#include<stdint.h>
#include<stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

//Chuong trinh chinh
int main(void){

	SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);  //Cau hinh port
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1);  // Cau hinh su dung Pin 1 cua port F, chan nay noi voi led do co san treb led
	while(1)
	{
	    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1); //bat den LED
	    SysCtlDelay(5000000); // Delay
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0);//Tat den LED
	    SysCtlDelay(5000000);
	}
}
