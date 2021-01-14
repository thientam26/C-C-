/**
 *Chuong trinh bat tat theo thu tu 3  LED
 */
#include<stdint.h>
#include<stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

//Chuong trinh dung nut bat ta 1 LED
int main(void){

    // Khai bao chuong trinh voi bien shift co nhiem vu dich bit

    // uint8_t shift = GPIO_PIN_1;
    // Khoi tao clock he thong
	SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
	// Kich hoat ngoai vi
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);  //Cau hinh port
	// Cau hinh output xuat LED
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3);  // Cau hinh su dung Pin 1 cua port F, chan nay noi voi led do co san treb led

	// Cau hinh input la mot nut bam tren kit
	GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_4); // O day pin 4 cua port F noi voi nut nhan SW1 tren kit
	// cau hinh phim bam
	GPIOPadConfigSet(GPIO_PORTF_BASE, GPIO_PIN_4, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
	while(1)
	{
	    // Kiem tra
	    if (!GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_4))
	        // Bat LED do
	        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3, GPIO_PIN_1);
	    else
	        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3, 0); //Tat LED do

//	    SysCtlDelay(10000000); // Delay
//	    // Dich bit voi y nghia bat lED xanh
//	    shift <<= 1;
//	    // Kiem tra neu LED xanh la sang thi quay tro lai LED do
//	    if (shift > GPIO_PIN_3)
//	        shift = GPIO_PIN_1;
//	    // GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0);//Tat den LED
//	    // SysCtlDelay(5000000);
	}
}
