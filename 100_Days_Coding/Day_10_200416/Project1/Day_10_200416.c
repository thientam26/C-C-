#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int x;
float y;

void main()
{
	scanf ("%d%f", &x, &y);
	printf("Chuoi dieu khien %3d, %2.2f", x, y);
}