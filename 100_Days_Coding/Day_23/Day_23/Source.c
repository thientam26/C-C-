#include<stdint.h>
#include<stdio.h>
#include<math.h>

//Chuong trinh con
void Giaiptbac2(int a, int b, int c);
void main()
{
	Giaiptbac2(1, 2, 3);
}

void Giaiptbac2(int a, int b, int c)
{
	// a, int b, int c;
	float delta = 0, x1 = 0, x2 = 0;
	printf("Giai phuong trinh bac 2 a^2 + bx + c =0\r\n")  ;
	printf("nhap a,b,c\r\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("a = %d, b = %d, c = %c\r\n", a, b, c);
	if (a == 0)
		printf("phuong trinh khong phai dang bac 2");
	else
		delta = b * b - 4 * a * c;
	if (delta < 0)
		printf("phuong trinh vo nghiem\r\n");
	else if (delta == 0)
		printf("phuong trinh co hai nghiem kep la x1 = x2 = %.3f\r\n",-b/(2*a));
	else
	{
		printf("phuong trinh co hai nghiem x1, x2\r\n");
		printf("x1=%.3f\r\n", -b -(sqrt(delta)/ (2*a)));
		printf("x2=%.3f\r\n", -b + (sqrt(delta) / (2*a)));
	}
}
