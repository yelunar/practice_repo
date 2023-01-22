#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
#include <conio.h>

int main() 
{
	srand(time(NULL));

	int coin, random;

	int front = 0, back = 0;

	printf("동전의 어느 면이 많이 나왔나요? (0:앞면 1:뒷면) :");
	scanf_s("%d", &coin);
	
	printf("결과\n");
	
	for (int i = 0; i < 100; i++) 
	
	{
		random = rand() % 2;

		if (random == 0)
			front++;
		else
			back++;
	}

	printf("동전의 앞면: %d\n", front);

	printf("동전의 뒷면: %d\n", back);

	if (front > back && coin == 0)

		printf("당신은 맞추었습니다.\n");

	else if (front > back && coin == 1)

		printf("당신은 틀렸습니다.\n");

	else if (front < back && coin == 0)

		printf("당신은 틀렸습니다.\n");

	else

		printf("당신은 맞추었습니다.\n");

	


	return 0;

}

