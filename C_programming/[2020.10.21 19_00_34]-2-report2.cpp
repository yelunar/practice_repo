#include <stdio.h>
#include <math.h>

int main()

{
	int a, b, c, e, d;
	double function1, function2;

	

	printf("2차항의 계수를 입력하시오 :");
	scanf_s("%d", &a);

	printf("1차항의 계수를 입력하시오 :");
	scanf_s("%d", &b);

	printf("상수항의 계수를 입력하시오 :");
	scanf_s("%d", &c);

	printf("적분시작점을 입력하시오 :");
	scanf_s("%d", &d);

	printf("적분끝점을 입력하시오 : ");
	scanf_s("%d", &e);

	function1 =  a*e*e*e / 3 + b * e*e / 2 + c * e;
	function2 =  a*d*d*d / 3 + b * d*d / 2 + c * d;

	printf("입력한 2차함수는 \n  y = %dx^2 + %dx + %d\n", a, b, c);

	printf("%d에서 %d까지의 적분값은", e, d);
	printf("%f", function1 - function2);

	

	return 0;

}