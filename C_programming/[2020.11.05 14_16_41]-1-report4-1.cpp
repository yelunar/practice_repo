#include <stdio.h>

int main()
{
	int x, y, z;
	int min;

	printf("3���� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &x, &y, &z);

	min = x < y ? (x < z ? x : z) : (y < z) ? y : z;

	printf("���� ���� ������ %d�Դϴ�.", min);


	return 0;

}