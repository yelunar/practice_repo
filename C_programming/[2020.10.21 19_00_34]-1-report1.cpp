#include <stdio.h>
#include <math.h>

int main()

{
	int a, b, c;
	double x1, x2;


	printf("2������ ����� �Է��Ͻÿ� :");
	scanf_s("%d", &a);

	printf("1������ ����� �Է��Ͻÿ� :");
	scanf_s("%d", &b);

	printf("������� ����� �Է��Ͻÿ� :");
	scanf_s("%d", &c);

	printf("�Է��� 2���Լ��� \n  y = %dx^2 + %dx + %d\n", a, b, c);


	x1 = (-b + sqrt(b*b - 4 * a*c)) / 2 * a;
	x2 = (-b - sqrt(b*b - 4 * a*c)) / 2 * a;

	printf("���� %f %f", x1, x2);


	return 0;

}