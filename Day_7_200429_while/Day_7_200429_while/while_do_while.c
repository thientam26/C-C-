#include<stdio.h>
#include<stdint.h>

void main()
{
	int i = 0;
	while (i <= 10)
	{
		printf("So %d\r\n", i);
		i++;
	}
	int j = 0;
	do
	{
		printf("do while %d\r\n", j);
		j++;
	} while (j <= 10);
}