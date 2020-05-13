#include <stdio.h>
#include<stdint.h>
#include <stdlib.h>

void printSizeOf(int intArray[]);
void printLenght(int intArray[]);

void main()
{
	char a[] = { 0,100,2,3,12}; 
	int array[] = { 0,1,2,3,4,5,6 };// khi khai bao mot mang, mang se tra ve dia chi o nho dau tien cua mang
	printf("size of array: %d\r\n", (int)sizeof(array)); // voi moi kieu du lieu khoang cach giua cac dia chi o nho cua moi phan tu trong mang la so byte cua kieu du lieu. cau hoi HE bieu dien gia trin trong memory
	printSizeOf(a);

	printf("Length of array: %d\r\n", (int)(sizeof(array) / sizeof(array[0])));
	printLenght(array);
}


void printSizeOf(int intArray[])
{
	printf("size of parameter: %d\r\n", (int)sizeof(intArray));
}


void printLenght(int intArray[])
{
	printf("lenght of parameter 1: %d\r\n", (int)sizeof(intArray)); //kich thuoc đia chi o nho cua con tro
	printf("lenght of parameter 2: %d\r\n", (int)sizeof(intArray[0]));
	printf("lenght of parameter: %d\r\n", (int)(sizeof(intArray) / sizeof(intArray[0])));
}