/**
 *Chuong trinh bat tat theo thu tu 3  LED
 */
#include<stdint.h>
#include<stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

//Chuong trinh chinh
int main(void){

    // Khai bao chuong trinh voi bien shift co nhiem vu dich bit

    uint8_t shift = GPIO_PIN_1;
    // Khoi tao clock he thong
	SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
	// Kich hoat ngoai vi
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);  //Cau hinh port
	// Cau hinh output xuat LED
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE,GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3);  // Cau hinh su dung Pin 1 cua port F, chan nay noi voi led do co san treb led
	while(1)
	{
	    // Bat LED do
	    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3, shift); //bat den LED
	    SysCtlDelay(5000000); // Delay
	    // Dich bit voi y nghia bat lED xanh
	    shift <<= 1;
	    // Kiem tra neu LED xanh la sang thi quay tro lai LED do
	    if (shift > GPIO_PIN_3)
	        shift = GPIO_PIN_1;
	    // GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0);//Tat den LED
	    // SysCtlDelay(5000000);
	}
}
