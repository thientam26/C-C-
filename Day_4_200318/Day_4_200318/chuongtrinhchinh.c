#include<stdint.h>
#include"chuongtrinhcon.h"
#include<stdio.h>
#include<memory.h>

void tachbit()

void main()
{
	//chuongtrinhcon(1);

	//int x = 10000;
	//printf("dia chi cua X:%d\r\n", &x);//dung &x de in dia chi
	//printf("gia tri cua X:%d\r\n",x);
	//int y = 0;
	//int* px = malloc(2);
	//*px = 0x1234; //4660 he 10
	//printf("dia chi cua px: %d\r\n", px);
	//printf("gia tri cua px: %d\r\n", *px);

	// Tach bit cao va thap cua dia chi
	tachbit()
}


void tachbit()
{
	int16_t x = 0x1234;

	int8_t* x_low = &x;
	int8_t* x_high = x_low + 1;
	printf("dia chi bit thap : %2x\r\n", x_low); // in ra gia tri he 16
	printf("dia chi bit cao: %2x\r\n", x_high);
	printf("gia tri bit thap : %2x\r\n", *x_low); // in ra gia tri he 16
	printf("gia tri bit cao: %2x\r\n", *x_high);

}