#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdint.h"
#include "Socket.h"

void main()
{
	char buff[1024];
	char a[5] = "helo";
	char b[7] = " world";
	char c[];
	memcpy(c, a, 5);
	memcpy(c + 5, b + 7);
	Get_Data_AWS(buff, sizeof(buff));
}
