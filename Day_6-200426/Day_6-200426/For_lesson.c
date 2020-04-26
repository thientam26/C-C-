#include<stdio.h>
#include<stdint.h>
int count_str(char*msg); //khai bao chung trinh con
void main()
{
	//int i;
	//int a;
	/*printf("so thu %d\r\n",1);
	printf("so thu %d\r\n", 2);
	printf("so thu %d\r\n", 3);
	printf("so thu %d\r\n", 4);
	printf("so thu %d\r\n", 5);
	printf("so thu %d\r\n", 6);
	printf("so thu %d\r\n", 7);
	printf("so thu %d\r\n", 8);
	printf("so thu %d\r\n", 9);
	printf("so thu %d\r\n", 10);
	printf("so thu %d\r\n", 11);
	printf("so thu %d\r\n", 12);*/
	//int i;
	//int y;
	//printf("i =%d\r\n", i++);
	//printf("y =%d\r\n", ++y);
	//printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10\r\n");
	/*char* msg = "hello world";

	printf(&msg);*/
	/*char str[123];
	printf("moi ban nhap mot chuoi:\r\n");
	scanf_s("%s", str);
	printf("Do dai chuoi la %d\r\n", count_str(str));*/
	
	int x = 10;
	printf("dia chi x: 0x%02x\r\n",&x);
	printf("gia tri x: 0x%02x\r\n", x);

	int* px = &x;
	*px = 17;
	printf("dia chi px: 0x%02p\r\n", &px);
	printf("gia tri px: 0x%2p\r\n", *px);
	
	printf("gia tri x:0x%02x\r\n", x);
}
int count_str(char*msg)
{
	int i=0;
	for (i = 0; *(msg + i) != 0; i++);
	return i;
	/*printf("%p\r\n", msg);
	printf("%c\r\n", *(msg + 1));*/
	
}