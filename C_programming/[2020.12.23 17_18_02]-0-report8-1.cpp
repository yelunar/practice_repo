#include <stdio.h>

#define equation 3

#define row_A 3
#define column_A 3

#define row_B 3


int relavite(int num1, int num2);


int main()

{

	int a[column_A][row_A] = { 0 };

	int b[row_B] = { 0 };

	

	int i, j, k, l; 

	int count = 1;



	for (i = 0; i < column_A; i++)

		for (j = 0; j < row_A; j++)

		{

			printf("a[%d][%d] : ", i, j);

			scanf_s("%d", &a[i][j]);

		}


	for (i = 0; i < row_B; i++)

	{

		printf("b[%d] : ", i);

		scanf_s("%d", &b[i]);

	}


	printf("\n");

	for (l = 0; l < column_A; l++)

		printf("%dx + %dy + %dz = %d\n", a[l][0], a[l][1], a[l][2], b[l]);

	printf("\n");


	int temp;

	

	for (i = equation - 1; i >= 0; i--)

		for (j = column_A - 1; j >= 0; j--)

		{

			if (a[i][i] != 0)

			{

				break;

			}

			else if (a[j][i] != 0)

			{

				for (k = 0; k < 3; k++)

				{

					temp = a[j][k];

					a[j][k] = a[i][k];

					a[i][k] = temp;

				}

				temp = b[j];

				b[j] = b[i];

				b[i] = temp;

			}

		}

	

	double sol[column_A] = { 0 };

	

	int base1, base2, M;

	

	while (equation - count)

	{

		for (k = 0; k < equation - count + 1; k++)

		{

			

			for (i = 0; i < column_A - count - k; i++)

			{

				M = relavite(a[i][row_A - count - k], a[i + 1][row_A - count - k]);

				

				base1 = a[i][row_A - count - k] / M;

				base2 = a[i + 1][row_A - count - k] / M;

				


				for (j = 0; j < column_A - count + 1; j++)

				{

					

					a[i][j] = base2 * a[i][j] - base1 * a[i + 1][j]; 

				}

				

			}

			
		}

		count++;

	}


	printf("----------------------------\n");


	

	if (a[0][0] == 0) printf("\n\nx는 무수히 많다\n");

	else

	{

		sol[0] = b[0] / (double)a[0][0];

		printf("\n\nx = %.3lf\n", sol[0]);

	}


	

	if (a[1][1] == 0) printf("y는 무수히 많다\n");

	else

	{

		sol[1] = (b[1] - a[1][0] * sol[0]) / (double)a[1][1];

		printf("y = %.3lf\n", sol[1]);

	}


	

	if (a[2][2] == 0) printf("z는 무수히 많다\n");

	else

	{

		sol[2] = (b[2] - a[2][0] * sol[0] - a[2][1] * sol[1]) / (double)a[2][2];

		printf("z = %.3lf\n", sol[2]);

	}

	return 0;

}



int relavite(int num1, int num2)

{

	int Q = 1;  

	int k;


	if (num1 < 0) num1 *= -1;

	if (num2 < 0) num2 *= -1;


	for (k = 2; k <= num1; k++)

		if (num1%k == 0 && num2%k == 0)

			Q = k;


	

	return Q;

}

