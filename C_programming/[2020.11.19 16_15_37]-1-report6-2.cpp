#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>

int main()
{
	int now_money = 0;
	int bet_money = 0;
	int money = 0;
	int number1, number2;

	srand(time(NULL));

	
	for (int bet_money=0; bet_money < 50; bet_money++);
	{
		printf("----\n");


		printf("보유한 돈은 : ");
		scanf_s("%d", &money);
		
		printf("배팅한 돈은:");
		scanf_s("%d", &bet_money);
		

		printf("본인이 선택한 숫자는: ");
		scanf_s("%d", &number1);


		number2 = rand() % 50 + 1;

		printf("컴퓨터가 선택한 숫자는:%d\n", number2);

		if (number1 % 2 == 0 && number2 % 2 == 0)
		{
			printf("남은 돈은:%d\n", now_money, now_money = money + bet_money * 4);
		}

		else if (number1 % 2 == 0 && number2 % 2 == 1)
		{
			printf("남은 돈은:%d\n", now_money, now_money = money - bet_money * 2);
		}
		else if (number1 % 2 == 1 && number2 % 2 == 1)
		{
			printf("남은 돈은:%d\n", now_money, now_money = money + bet_money * 2);
		}
		else if (number1 % 2 == 1 && number2 % 2 == 0)
		{
			printf("남은 돈은:%d\n", now_money, now_money = money - bet_money);
		}

		if (money = 0)
			return 0;
		if (bet_money * 5 < money)
			return 0;

		while (money > 0);

		{

			printf("----\n");


			printf("보유한 돈은 :");
			scanf_s("%d", &money);
			

			printf("배팅한 돈은:");
			scanf_s("%d", &bet_money);
			

			printf("본인이 선택한 숫자는: ");
			scanf_s("%d", &number1);


			number2 = rand() % 50 + 1;

			printf("컴퓨터가 선택한 숫자는:%d\n", number2);

			if (number1 % 2 == 0 && number2 % 2 == 0)
			{
				printf("남은 돈은:%d\n", now_money, now_money = money + bet_money * 4);
			}

			else if (number1 % 2 == 0 && number2 % 2 == 1)
			{
				printf("남은 돈은:%d\n", now_money, now_money = money - bet_money * 2);
			}
			else if (number1 % 2 == 1 && number2 % 2 == 1)
			{
				printf("남은 돈은:%d\n", now_money, now_money = money + bet_money * 2);
			}
			else if (number1 % 2 == 1 && number2 % 2 == 0)
			{
				printf("남은 돈은:%d\n", now_money, now_money = money - bet_money);
			}

			if (money = 0)
				return 0;
			if (bet_money * 5 < money)
				return 0;



		}
	}

	


	return 0;
	}
	
	
