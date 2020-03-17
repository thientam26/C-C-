#include<stdint.h>
#include<stdio.h>

main()
{
	/*print Fahrenheit-Celsius table for fahr = 0, 20, .., 300*/
	int fahr, celsius;
	int	lower, upper, step;
	lower = 0; /*lower limit of temperature*/
	upper = 300; /*upper limit*/
	step = 20; /*step size*/
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\%t\r\n", fahr, celsius);
		fahr = fahr + step;
	}
}