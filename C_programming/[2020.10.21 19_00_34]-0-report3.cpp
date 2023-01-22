#include<stdio.h>

int main()

{	
	int a, b, c, d, e, f, g, h, i;
	double A, B, C, D, E, F, G, H, I;
	double Det;


	printf("첫 번째 행을 입력하시오:");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("두 번째 행을 입력하시오:");
	scanf_s("%d %d %d", &d, &e, &f);

	printf("세 번째 행을 입력하시오:");
	scanf_s("%d %d %d", &g, &h, &i);

	printf("입력한 행렬은\n %d %d %d \n %d %d %d \n %d %d %d\n", a, b, c, d, e, f, g, h, i);

	
	Det = (a * e * i) + (b * f * g) + (c * d * h) - (c * e * g) - (b * d * i) - (a * f * h);
	A = (1 / Det) * ((e * i) - (f * h));
	B = (1 / Det) * ((b * i) - (c * h))*(-1);
	C = (1 / Det) * ((b * f) - (c * e));
	D = (1 / Det) * ((d * i) - (f * g))*(-1);
	E = (1 / Det) * ((a * i) - (c * g));
	F = (1 / Det) * ((a * f) - (c * d))*(-1);
	G = (1 / Det) * ((d * h) - (e * g));
	H = (1 / Det) * ((a * h) - (b * g))*(-1);
	I = (1 / Det) * ((e * a) - (b * d));

	printf("역행렬은\n %lf %lf %lf\n %lf %lf %lf\n %lf %lf %lf\n", A, B, C, D, E, F, G, H, I);
	


	return 0;

}