#include <stdio.h>
#include<stdint.h>
#include <stdlib.h>

void printSizeOf(int intArray[]);
void printLenght(int intArray[]);

void main()
{
	int array[] = { 0,1,2,3,4,5,6 };
	printf("size of array: %d\r\n", (int)sizeof(array));
	printSizeOf(array);

	printf("Length of array: %d\r\n", (int)(sizeof(array) / sizeof(array[0])));
	printLenght(array);
}


void printSizeOf(int intArray[])
{
	printf("size of parameter: %d\r\n", (int)sizeof(intArray));
}


void printLenght(int intArray[])
{
	printf("lenght of parameter: %d\r\n", (int)(sizeof(intArray) / sizeof(intArray[0])));
}