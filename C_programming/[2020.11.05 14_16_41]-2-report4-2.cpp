#include <stdio.h>
#include <iostream>

int main()

{
	double height, weight, bmi;
	double heights;


	printf("Ű�� ü���� �Է��Ͻÿ� :");
	scanf_s("%lf %lf", &height, &weight);

	
	printf("Ű: %.f cm \n",height);
	printf("ü��: %.f kg \n",weight);

	heights = height / 100;
	bmi = weight / (heights * heights);


	printf("BMI: %.2f\n", bmi);
	
	if (bmi >= 35) {
		printf("�񸸵�: ����\n");
	}
	else if (bmi >= 30)
	{
		printf("�񸸵�: ������\n");
	}

	else if (bmi >= 25)
	{
		printf("�񸸵�: ��\n");
	}

	else if (bmi >= 23)
	{
		printf("�񸸵�: ��ü��\n");
	}

	else if (bmi >= 18.5) {
		printf("�񸸵�: ���ü��\n");
	}
	else {
		printf("�񸸵�: ��ü��\n");


	}
	


	return 0;




}