#include <stdio.h>
#include <math.h>

int main()

{	
	
	int x1 = 0, x2 = 0, x3 = 0;
	int y1 = 0, y2 = 0, y3 = 0;
	double distance1, distance2, distance3;

	printf("첫 번째 점(x1, y1)을 입력하시오 :");
	scanf_s("%d %d", &x1, &y1);

	printf("두 번째 점(x2, y2)을 입력하시오 :");
	scanf_s("%d %d", &x2, &y2);

	printf("세 번째 점(x3, y3)을 입력하시오 :");
	scanf_s("%d %d", &x3, &y3);

	distance1 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	distance2 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	distance3 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));

	
	if (distance1 < distance2 < distance3)
		printf("거리가 가장 짧은 두 점은 (%d, %d), (%d, %d)이며, 거리는 %.3lf입니다.", x1, y1, x2, y2, distance1);

	else if (distance1 < distance3 < distance2)
		printf("거리가 가장 짧은 두 점은 (%d, %d), (%d, %d)이며, 거리는 %.3lf입니다.", x1, y1, x2, y2, distance1);

	else if (distance2 < distance3 < distance1)
		printf("거리가 가장 짧은 두 점은 (%d, %d), (%d, %d)이며, 거리는 %.3lf입니다.", x2, y2, x3, y3, distance2);

	else if (distance2 < distance1 < distance3)
		printf("거리가 가장 짧은 두 점은 (%d, %d), (%d, %d)이며, 거리는 %.3lf입니다.", x2, y2, x3, y3, distance2);

	else if (distance3 < distance1 < distance1)
		printf("거리가 가장 짧은 두 점은 (%d, %d), (%d, %d)이며, 거리는 %.3lf입니다.", x3, y3, x1, y1, distance3);

		else 
			printf("거리가 가장 짧은 두 점은 (%d, %d), (%d, %d)이며, 거리는 %.3lf입니다.", x3, y3, x1, y1, distance3);
	

	return 0;
}