#include<stdio.h>
#include<stdint.h>

//#include <cstdio>

//File Copying

//given getcharand putchar, you can write a surprising amount of useful code without
//knowing anything more about inputand output.the simplest example is a program that
//copies its input to its output one character at a time :
//read a character
//while (charater is not end - of - file indicator)
//output the character just read
//read a character
//copy input to output; 1st version

//main()
//{
//	int c;
//	c = getchar();
//	while (c != EOF){
//		putchar(c);
//		c = getchar();
//	}
//
//}

/* copy input to output; 2nd version */

//main()
//{
//	int c;
//	while ((c = getchar()) != EOF)
//		putchar(c);
//} 

//int main()
//{
//	int c;
//	printf("Nhap mot gia tri:");
//	c = getchar();
//
//	printf("\nGia tri ban da nhap la: ");
//	putchar(c);
//
//	printf("\n=======================================\n");
//	printf("I won't give up! \n");
//
//	return 0;
//}

// gets & puts function in C
int	main()
{
	char chuoi[100]; // khi khao bao bien can gan gia tri khoi tao. Ex: char string = " "
	
	printf("nhap mot gia tri:");
	gets(chuoi);

	printf("\ngia tri ban da nhap la:\n");
	puts(chuoi);

	printf("\n=======================\n");
	printf("I won't give up!\n");

}