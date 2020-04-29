#include<stdio.h>
#include<stdint.h>
void main()
{
	//char mang[10] = { 1,5,4,3,2,7,8,7,9,0 };
	//int max = mang[0] , temp = 0; // gia tri khoi tao cho
	//for (int i = 0; i < 10; i++)
	//{
	//	temp = mang[i++];
	//	if (temp > max)
	//	{
	//		max = temp;
	//	}
	//	//printf("mang[%d] = %d\r\n", i, mang[i]); // version 1
	//	printf("mang[%d] = %p\r\n", i, &(mang[i])); //memory alignment of array

	//}
	//printf("SO lon nhat la %d\r\n", max);
	//printf("dia chi cua mang la %p\r\n", mang);

	char mang[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mang[i][j] = 10 * i + j + 1;
			printf(" %d ",mang[i][j]);
		}
		printf("\r\n");
	}
	printf("dia chi cua mang %p\r\n", mang);
}