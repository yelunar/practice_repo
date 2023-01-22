#include <stdio.h>
#include <iostream>

int main()

{
	double height, weight, bmi;
	double heights;


	printf("키와 체중을 입력하시오 :");
	scanf_s("%lf %lf", &height, &weight);

	
	printf("키: %.f cm \n",height);
	printf("체중: %.f kg \n",weight);

	heights = height / 100;
	bmi = weight / (heights * heights);


	printf("BMI: %.2f\n", bmi);
	
	if (bmi >= 35) {
		printf("비만도: 고도비만\n");
	}
	else if (bmi >= 30)
	{
		printf("비만도: 중증비만\n");
	}

	else if (bmi >= 25)
	{
		printf("비만도: 비만\n");
	}

	else if (bmi >= 23)
	{
		printf("비만도: 과체중\n");
	}

	else if (bmi >= 18.5) {
		printf("비만도: 평균체중\n");
	}
	else {
		printf("비만도: 저체중\n");


	}
	


	return 0;




}