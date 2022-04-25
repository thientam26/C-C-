#include<stdio.h>

void main()
{
	int a = 25;
	int* contro;

	contro = &a;
	printf("dia chi cua bien la: %x\r\n", &a);

	/*dia chi luu tru trong bien con tro la*/
	printf("Dia chi duoc luu trong bien con tro la:%p\r\n", contro);

	/*Gia tri cua dia chi con tro dang luu tru la*/
	printf("gia tri cua bien con tro la: %d\r\n", *contro);

}