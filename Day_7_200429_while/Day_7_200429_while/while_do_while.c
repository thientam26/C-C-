#include<stdio.h>
#include<stdint.h>

void main()
{
	int i = 0;
	while (i <= 10)
	{
		printf("So %d\r\n", i++);
		//i++;
	}
	int j = 0;
	do
	{
		printf("do while %d\r\n", ++j); // thuc hien thao tac cong truoc khi in ra
		
	} while (j <= 10);
	int k = 0;
	for (k = 0; k <= 10; k++)
	{
		printf("For %d\r\n", k);
	}
}