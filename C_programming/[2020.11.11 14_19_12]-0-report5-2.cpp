#include <stdio.h>

int main()
{
	int a;
	int b, c;
	int i;


	printf("합을 입력하시오:");
	scanf_s("%d", &a);
	printf("합이 %d인 조합은 다음과 같습니다.\n", a);
		
		for (b = 1; b <= 6; b++)
		{
			for (c = 1; c <= 6; c++)
			{
				if (b + c == a)
				{
					
						
						printf("(%d %d)\n", b, c);

									}
			}
		}

				
	return 0;

}