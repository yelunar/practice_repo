#include <stdio.h>

int main()
{
	int a;
	int b, c;
	int i;


	printf("���� �Է��Ͻÿ�:");
	scanf_s("%d", &a);
	printf("���� %d�� ������ ������ �����ϴ�.\n", a);
		
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