#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>


int main(void)

{
	
	float height, radius;

	printf("���̸� �Է��Ͻÿ�   :");

	scanf("%f", &height);

	printf("�������� �Է��Ͻÿ� :");
	scanf("%f", &radius);

	
	float sphere, cone, cylinder;

	sphere = 4 / 3 * pow(radius, 3) * M_PI;
	
	cone = (float)1 / 3 * height * pow(radius, 2) * M_PI;
	
	cylinder = height * pow(radius, 2) * M_PI;

	
	printf("���� ���Ǵ�  %.3f�Դϴ�.\n", sphere);
	
	printf("������ ���Ǵ� %.3f�Դϴ�.\n", cone);
	
	printf("������� ���Ǵ�  %.3f�Դϴ�.\n", cylinder);

	return 0;
}

