#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>


int main(void)

{
	
	float height, radius;

	printf("높이를 입력하시오   :");

	scanf("%f", &height);

	printf("반지름을 입력하시오 :");
	scanf("%f", &radius);

	
	float sphere, cone, cylinder;

	sphere = 4 / 3 * pow(radius, 3) * M_PI;
	
	cone = (float)1 / 3 * height * pow(radius, 2) * M_PI;
	
	cylinder = height * pow(radius, 2) * M_PI;

	
	printf("구의 부피는  %.3f입니다.\n", sphere);
	
	printf("원뿔의 부피는 %.3f입니다.\n", cone);
	
	printf("원기둥의 부피는  %.3f입니다.\n", cylinder);

	return 0;
}

