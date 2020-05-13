#include<stdio.h>
#include<stdint.h>

//Average of a array
float mean_array(int array[], int number);

void main()
{
	// define a array
	int mang[10] = { 1,2,3,4,5,1000,2000,30000,100000,150 };
	printf("Average of array is %.2f\r\n", mean_array(mang, 10));
}

float mean_array(int array[],int number)
{
	int i = 0;
	float mean = 0;
	float sum = 0;
	for (i; i < number; i++)
	{
		sum += array[i];
	}
	mean = sum / number;
	return mean;
} 