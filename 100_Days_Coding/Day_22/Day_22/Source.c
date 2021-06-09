#include<stdint.h>
#include<stdio.h>

void main()
{
	char chuoi[100];
	int i;
	printf("nhap mot chuoi gia tri:\r\n");
	scanf_s("%s %d", chuoi, &i);

	printf("\nGia tri ban da nhap la:\r\n", chuoi, i);

	return 0;
}