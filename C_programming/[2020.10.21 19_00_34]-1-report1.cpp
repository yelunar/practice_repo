#include <stdio.h>
#include <math.h>

int main()

{
	int a, b, c;
	double x1, x2;


	printf("2차항의 계수를 입력하시오 :");
	scanf_s("%d", &a);

	printf("1차항의 계수를 입력하시오 :");
	scanf_s("%d", &b);

	printf("상수항의 계수를 입력하시오 :");
	scanf_s("%d", &c);

	printf("입력한 2차함수는 \n  y = %dx^2 + %dx + %d\n", a, b, c);


	x1 = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
	x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;

	printf("근은 %f %f", x1, x2);


	return 0;

}