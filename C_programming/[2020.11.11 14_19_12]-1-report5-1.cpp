#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()


{
	int i, n, r;
	int min = 100;

	srand((long)time(NULL)); 

	printf("숫자 개수를 입력하시오 : ");
	scanf_s("%d", &n);

	printf("생성된 %d개의 정수 : ", n);

	for (i = 0; i < n; i++)  

	{
		r = rand() % 100; 

		printf("%d ", r);

			if (r < min)min = r;	
	}

	printf("\n가장 작은 숫자: %d\n", min); 

	return 0;
}