#include <stdio.h>

int main()
{
	int x, y, z;
	int min;

	printf("3개의 정수를 입력하시오:");
	scanf_s("%d %d %d", &x, &y, &z);

	min = x < y ? (x < z ? x : z) : (y < z) ? y : z;

	printf("제일 작은 정수는 %d입니다.", min);


	return 0;

}