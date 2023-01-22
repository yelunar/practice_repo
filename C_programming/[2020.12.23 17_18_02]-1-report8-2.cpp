#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define Emax 0.000001

double ValFunc(int*, double);
double BisMtd(int*);

int main() 
{
	int a[3];
	register int i;

	printf("방정식을 입력하시오.\n1 ");
	for (i = 2; i >= 0; i--)
		scanf_s("%d", &a[i]);
	printf("f(x)=(x^3)%+d(x^2)%+dx%+d\n", a[2], a[1], a[0]);
	puts("------------------------");
	printf("x=%g\n", BisMtd(a));

	return 0;
}

double ValFunc(int* coef, double x)
{
	return (x*x*x) + coef[2] * (x*x) + coef[1] * x + coef[0];
}

double BisMtd(int* coef)
{
	register int m = 10000;
	double x_1, x_2, x_c;
	double a, b, c;

	do
	{
		a = -rand(), b = rand();

		x_1 = ValFunc(coef, a);
		x_2 = ValFunc(coef, b);

		m--;
	} while (x_1*x_2 > 0 && m);

	if (x_1*x_2 == 0)
		return x_1 == 0 ? a : b;

	else
	{
		do
		{
			c = (a + b) / 2;
			x_c = ValFunc(coef, c);

			if (x_c == 0)
				return c;

			if (x_1*x_c > 0)
			{
				a = c;
				x_1 = ValFunc(coef, a);
			}

			else if (x_1*c < 0)
			{
				b = c;
				x_2 = ValFunc(coef, b);
			}
		} while (x_2 - x_1 >= Emax);

		return c;
	}
}
