#include<stdint.h>
#include<stdio.h>
#include<math.h>
// Chuong tirnh con
void GiaiptBac2(int a, int b, int c);

void main()
{
	GiaiptBac2(1, 2, 3);
}

void GiaiptBac2(int a, int b, int c)
{
	/*int a = 0, b =0, c = 0;*/
	float delta = 0, x1 = 0, x2 = 0;
	printf("Giai phuong trinh bac 2 a^2+bx+c =0\r\n");
	printf("nhap a,c,b\r\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("a = %d, b = %d,c = %d\r\n", a, b, c);
	if (a == 0)
		printf("phuong trinh khong phai dang bac 2");
	else
		delta = b * b - 4 * a * c;
	if (delta < 0)
		printf("phuong trinh vo nghiem");
	else if (delta == 0)
		printf("phuong trinh co nghiem kep x1 = x2 = %.3f\r\n", -b / (2 * a));
	else
	{
		printf("Phuong trinh co 2 nghiem x1,x2\r\n");
		printf("x1=%.3f\r\n", (-b - sqrt(delta)) / (2 * a));
		printf("x2=%.3f\r\n", (-b + sqrt(delta)) / (2 * a));
	}

}
