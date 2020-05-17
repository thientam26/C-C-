#include<stdio.h>
#include<stdint.h>

//int Secret(int a[], int n)
//{
//	int idx = -1;
//	for (int i =0;i<n;i++)
//		if (a[i] % 2 != 0)
//		{
//			idx = i;
//			break;
//		}
//	return idx;
//
//}


// ham dem so le
int Secret(int a[], int n)
{
	int idx = -1;
	int i = 0;
	do
	{
		if (a[i] % 2 != 2)
			idx = i;
		i++;
	} while (i < n && a[i] % 2 == 0);
	return idx;
}

int main()
{
	int a[] = { 1,2,3,4,,5,6,7,8 };

}