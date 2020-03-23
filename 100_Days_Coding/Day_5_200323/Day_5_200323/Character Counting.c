#include<stdio.h>
#include<stdint.h>

/* count characters in input; 1st version */

//void main()
//{
//	long nc;
//	nc = 0;
//	while(getchar() != EOF)
//		++nc;
//	printf("%ld\r\n", nc);
//
//}

/* count characters in input; 2nd version */

void main()
{
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\r\n", nc);
}