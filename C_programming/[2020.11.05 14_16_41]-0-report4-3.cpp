#include <stdio.h>
#include <math.h>

int main()

{	
	
	int x1 = 0, x2 = 0, x3 = 0;
	int y1 = 0, y2 = 0, y3 = 0;
	double distance1, distance2, distance3;

	printf("ù ��° ��(x1, y1)�� �Է��Ͻÿ� :");
	scanf_s("%d %d", &x1, &y1);

	printf("�� ��° ��(x2, y2)�� �Է��Ͻÿ� :");
	scanf_s("%d %d", &x2, &y2);

	printf("�� ��° ��(x3, y3)�� �Է��Ͻÿ� :");
	scanf_s("%d %d", &x3, &y3);

	distance1 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	distance2 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	distance3 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));

	
	if (distance1 < distance2 < distance3)
		printf("�Ÿ��� ���� ª�� �� ���� (%d, %d), (%d, %d)�̸�, �Ÿ��� %.3lf�Դϴ�.", x1, y1, x2, y2, distance1);

	else if (distance1 < distance3 < distance2)
		printf("�Ÿ��� ���� ª�� �� ���� (%d, %d), (%d, %d)�̸�, �Ÿ��� %.3lf�Դϴ�.", x1, y1, x2, y2, distance1);

	else if (distance2 < distance3 < distance1)
		printf("�Ÿ��� ���� ª�� �� ���� (%d, %d), (%d, %d)�̸�, �Ÿ��� %.3lf�Դϴ�.", x2, y2, x3, y3, distance2);

	else if (distance2 < distance1 < distance3)
		printf("�Ÿ��� ���� ª�� �� ���� (%d, %d), (%d, %d)�̸�, �Ÿ��� %.3lf�Դϴ�.", x2, y2, x3, y3, distance2);

	else if (distance3 < distance1 < distance1)
		printf("�Ÿ��� ���� ª�� �� ���� (%d, %d), (%d, %d)�̸�, �Ÿ��� %.3lf�Դϴ�.", x3, y3, x1, y1, distance3);

		else 
			printf("�Ÿ��� ���� ª�� �� ���� (%d, %d), (%d, %d)�̸�, �Ÿ��� %.3lf�Դϴ�.", x3, y3, x1, y1, distance3);
	

	return 0;
}