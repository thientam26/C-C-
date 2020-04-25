#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdint.h>
//day la mot chuong trinh nhap va in dia chi cua bien va gia tri bien

void main()
{
	
	int x;
	int y;
	printf("moi ban nhap hai so nguyen\r\n");
	scanf_s("%d%d", &x, &y);
	printf("Dia chi bien x la %p\r\n", &x); /*chu y voi gia tri dia chi dung %p de khong bi loi*/
	printf("Dia chi bien y la %p\r\n", &y); /*gia tri cua dia chi la &bien*/
	printf("Chuoi dieu khien %3d,%3d", x, y);
}