#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include"Socket.h"
#include"Socket.c"
//struct point
//{
//	int x;
//	int y;
//};
//
//struct hcn
//{
//	point A;
//	point A;
//	point A;
//	point A;
//};

//void fputs_test(char* string, FILE* fileName)
//{
//	for (int i = 0; i < strlen(string); i++)
//	{
//		fputc(string[i], fileName);
//	}
//}
//
//void main()
//{
//	FILE* file; //tra ve 1 con tro kieu file
//	file = fopen("hello.txt", "a+b"); //
//	fputs_test("XIn chao", file);
//	fclose(file);
//}

void main()
{
	char* array = "hella";
	char* str = "a";
	int number = 5;
	int* pointer;
	//search_func(array, 5, "a");
	int i = 0;

	for (i = 0; i < number; i++)
	{
		printf("%s\r\n", array[i]);

		if (array[i] == str)
		{
			pointer = &(array[i]);
			printf("Vi tri ki tru : %p", pointer);
		}
		else
			printf("-1\r\n");
	}

}