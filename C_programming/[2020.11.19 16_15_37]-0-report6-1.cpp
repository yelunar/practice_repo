#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
#include <conio.h>

int main() 
{
	srand(time(NULL));

	int coin, random;

	int front = 0, back = 0;

	printf("������ ��� ���� ���� ���Գ���? (0:�ո� 1:�޸�) :");
	scanf_s("%d", &coin);
	
	printf("���\n");
	
	for (int i = 0; i < 100; i++) 
	
	{
		random = rand() % 2;

		if (random == 0)
			front++;
		else
			back++;
	}

	printf("������ �ո�: %d\n", front);

	printf("������ �޸�: %d\n", back);

	if (front > back && coin == 0)

		printf("����� ���߾����ϴ�.\n");

	else if (front > back && coin == 1)

		printf("����� Ʋ�Ƚ��ϴ�.\n");

	else if (front < back && coin == 0)

		printf("����� Ʋ�Ƚ��ϴ�.\n");

	else

		printf("����� ���߾����ϴ�.\n");

	


	return 0;

}

