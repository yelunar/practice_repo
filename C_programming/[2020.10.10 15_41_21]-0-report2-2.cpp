#include <stdio.h>
#include <math.h>

int main()

{
	int x1, x2, y1, y2;
	float dis;

	printf("첫 번째 점(x1, y1)을 입력하시오 :");
	scanf_s("%d,%d", &x1, &y1);

	printf("두 번째 점(x2, y2)을 입력하시오 : ");
	scanf_s("%d,%d", &x2, &y2);

	dis = pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)),0.5);

	printf("거리 :%.4f",dis);
	
	return 0;

}