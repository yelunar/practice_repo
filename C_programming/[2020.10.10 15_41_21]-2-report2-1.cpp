﻿#include <stdio.h>
#include <math.h> 

int main(void)
{
	float x, y, z, p, q;

	float sum, avg, var, dev;

	printf("첫  번째 정수를 입력하시오 :");
	scanf_s("%f", &x);

	printf("두  번째 정수를 입력하시오 :");
	scanf_s("%f", &y);

	printf("세  번째 정수를 입력하시오 :");
	scanf_s("%f", &z);

	printf("네  번째 정수를 입력하시오 :");
	scanf_s("%f", &p);

	printf("다섯번째 정수를 입력하시오 :");
	scanf_s("%f", &q);

	sum = x + y + z + p + q;
	avg = sum / 5.0;
	var = (pow(x - avg, 2.0) + pow(y - avg, 2.0) + pow(z - avg, 2.0) + pow(z - avg, 2.0) + pow(p - avg, 2.0) + pow(q - avg, 2.0)) / 5.0;
	dev = pow(var, 0.5);

	printf("합계는  %.0f입니다.\n", sum);
	printf("평균는 %.3f입니다.\n", avg);
	printf("분산은 %.3f입니다.\n", var);
	printf("표준편차는 %.4f입니다.\n", dev);

	return 0;


}