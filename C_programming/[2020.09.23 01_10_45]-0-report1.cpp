#include<stdio.h>
#include<math.h> 

int main(void)

{

	float x, y, z, p, q;

	float sum, avg, var;

	printf("ù  ��° ������ �Է��Ͻÿ� :");
	scanf("%f", &x);

	printf("��  ��° ������ �Է��Ͻÿ� :");
	scanf("%f", &y);

	printf("��  ��° ������ �Է��Ͻÿ� :");
	scanf("%f", &z);
	
	printf("��  ��° ������ �Է��Ͻÿ� :");
	scanf("%f", &p);
	
	printf("�ټ���° ������ �Է��Ͻÿ� :");
	scanf("%f", &q);

	sum = x + y + z + p + q;
	avg = sum / 5.0;
	var =(pow(x-avg,2.0)+pow(y-avg,2.0)+pow(z-avg,2.0)+pow(z-avg,2.0)+pow(p-avg,2.0)+pow(q-avg,2.0))/5.0;

	

	printf("�հ��  %.0f�Դϴ�.\n" , sum);
	printf("��մ� %.3f�Դϴ�.\n" , avg);
	printf("�л��� %.3f�Դϴ�.\n", var);

	return 0;

}
