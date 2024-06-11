/* MATH.C v2.2 */
/* Compiled 10/1/2024 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()

{
	double x;

	printf("\nHello there!\n");
	printf("You are running v2.2 of MATH.C.\n");
	printf("\nPlease input a number (x) into prompt to get its properties.\n");
	printf("\nBecause of long double usage, x has an accuracy of 0.000001.\n");
	printf("\nThis also allows you to input numbers with a point.\n");
	printf("\nEnter x's value: ");
	scanf("%lf", &x);


	printf("\nValue of x:");
	printf("%lf", x*1);

	printf("\nSquare of x (x^2)=");
	printf("%lf\n", x*x);

	printf("\nCube of x (x^3)=");
	printf("%lf", x*x*x);

	printf("\nSquare root of x=");
	printf("%lf", sqrt(x));

	printf("\nTimes tables of x:\n");
	printf("\nx*1=");
	printf("%lf", x*1);
	printf("\nx*2=");
	printf("%lf", x*2);
	printf("\nx*3=");
	printf("%lf", x*3);
	printf("\nx*4=");
	printf("%lf", x*4);
	printf("\nx*5=");
	printf("%lf", x*5);
	printf("\nx*6=");
	printf("%lf", x*6);
	printf("\nx*7=");
	printf("%lf", x*7);
	printf("\nx*8=");
	printf("%lf", x*8);
	printf("\nx*9=");
	printf("%lf", x*9);
	printf("\nx*10=");
	printf("%lf\n", x*10);

	printf("\nHave a nice day blin\n");

	printf("\nPress any key...\n");

	return 0;

}
