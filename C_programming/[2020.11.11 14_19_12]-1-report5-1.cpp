#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()


{
	int i, n, r;
	int min = 100;

	srand((long)time(NULL)); 

	printf("���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	printf("������ %d���� ���� : ", n);

	for (i = 0; i < n; i++)  

	{
		r = rand() % 100; 

		printf("%d ", r);

			if (r < min)min = r;	
	}

	printf("\n���� ���� ����: %d\n", min); 

	return 0;
}