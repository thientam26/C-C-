#include<stdio.h>
#include<stdint.h>
#define _CRT_SECURE_NO_DEPRECATE
int main()
{
	FILE*f = fopen("New_File.txt","r"); //error debug
	int c = getc(f);
	while (c!=EOF)
	{
		putchar(c);
		c = getc(f);
	}
	fclose(f);
	getchar();
	return 0;
}

