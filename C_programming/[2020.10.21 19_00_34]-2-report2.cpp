#include <stdio.h>
#include <math.h>

int main()

{
	int a, b, c, e, d;
	double function1, function2;

	

	printf("2������ ����� �Է��Ͻÿ� :");
	scanf_s("%d", &a);

	printf("1������ ����� �Է��Ͻÿ� :");
	scanf_s("%d", &b);

	printf("������� ����� �Է��Ͻÿ� :");
	scanf_s("%d", &c);

	printf("���н������� �Է��Ͻÿ� :");
	scanf_s("%d", &d);

	printf("���г����� �Է��Ͻÿ� : ");
	scanf_s("%d", &e);

	function1 =  a*e*e*e / 3 + b * e*e / 2 + c * e;
	function2 =  a*d*d*d / 3 + b * d*d / 2 + c * d;

	printf("�Է��� 2���Լ��� \n  y = %dx^2 + %dx + %d\n", a, b, c);

	printf("%d���� %d������ ���а���", e, d);
	printf("%f", function1 - function2);

	

	return 0;

}