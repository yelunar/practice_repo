#include <stdio.h>
#include <math.h>

int main()

{
	int x1, x2, y1, y2;
	float dis;

	printf("ù ��° ��(x1, y1)�� �Է��Ͻÿ� :");
	scanf_s("%d,%d", &x1, &y1);

	printf("�� ��° ��(x2, y2)�� �Է��Ͻÿ� : ");
	scanf_s("%d,%d", &x2, &y2);

	dis = pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)),0.5);

	printf("�Ÿ� :%.4f",dis);
	
	return 0;

}