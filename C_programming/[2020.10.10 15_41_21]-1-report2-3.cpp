#include <math.h>
#include <stdio.h>
#define PI 3.14159265
int main(void)
{
	double x, y, z, pow1, pow2, pow3, cos1, cos2, cos3, ang1, ang2, ang3;

	printf("세변의 길이 입력 : ");
	scanf_s("%lf %lf %lf", &x, &y, &z);

	pow1 = (pow(y, 2.0) + pow(z, 2.0) - pow(x, 2.0));
	pow2 = (pow(x, 2.0) + pow(z, 2.0) - pow(y, 2.0));
	pow3 = (pow(x, 2.0) + pow(y, 2.0) - pow(z, 2.0));

	cos1 = (pow1) / (2 * y*z);
	cos2 = (pow2) / (2 * x*z);
	cos3 = (pow3) / (2 * x*y);

	ang1 = acos(cos1);
	ang2 = acos(cos2);
	ang3 = acos(cos3);

	printf("삼각형의 세 변의 길이 :%lf, %lf, %lf \n", x, y, z);
	
	printf("삼각형의 세 각의 크기 :%lf, %lf, %lf\n", ang1 * 180 / PI, ang2 * 180 / PI, ang3 * 180 / PI);

	return 0;
}