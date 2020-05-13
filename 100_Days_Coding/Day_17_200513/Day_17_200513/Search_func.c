#include<stdio.h>
#include<stdint.h>

int search_func(char array[], int number, char* str);
void main()
{
	char*array = "hella"; 
	char*str = "a";
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

//int search_func(int array[], int number, char str)
//{
//	int i = 0;
//	for (i = 0; i < number; i++)
//	{
//		if (array[i] == str)
//		{
//			printf("vi tri ki tu co trong mang la: %p", &(array[i]));
//		}
//		else
//			return -1;
//	}
//}