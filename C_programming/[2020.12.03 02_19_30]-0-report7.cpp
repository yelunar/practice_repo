#include <stdio.h>

#define SIZE 3 

int main()
{
	int A[SIZE][SIZE]; 
	int B[SIZE][SIZE]; 
	int C[SIZE][SIZE]; 

	int row, col, i, sum;
	float determinant = 0;

	
	printf("A =\n");
	for (row = 0; row < SIZE; row++)
	{
		for (col = 0; col < SIZE; col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	
	printf("\nB =\n");
	for (row = 0; row < SIZE; row++)
	{
		for (col = 0; col < SIZE; col++)
		{
			scanf_s("%d", &B[row][col]);
		}
	}

	
	for (row = 0; row < SIZE; row++)
	{
		for (col = 0; col < SIZE; col++)
		{
			
			C[row][col] = A[row][col] + B[row][col];
		}
	}


	
	printf("\n-----------------------\n");
	printf("\nA+B = \n");
	
	for (row = 0; row < SIZE; row++)
	{
		for (col = 0; col < SIZE; col++)
		{
			printf("%d ", C[row][col]);
		}
		printf("\n");
		
	}

	for (row = 0; row < SIZE; row++)
	{
		for (col = 0; col < SIZE; col++)
		{
			sum = 0;
			
			for (i = 0; i < SIZE; i++)
			{
				sum += A[row][i] * B[i][col];
			}

			C[row][col] = sum;
		}
	}

	
	printf("\n-----------------------\n");
	printf("\nA * B = \n");
		for (row = 0; row < SIZE; row++)
	{
		for (col = 0; col < SIZE; col++)
		{
			printf("%d ", C[row][col]);
		}
		printf("\n");
	}
		
		
	
		
			
		for (row = 0; row < SIZE; row++)
			determinant = determinant + (A[0][row] * (A[1][(row + 1) % 3] * A[2][(row + 2) % 3] - A[1][(row + 2) % 3] * A[2][(row + 1) % 3]));
		
		printf("\n-----------------------\n");
		printf("\nA-1= \n\n");
		
		for (row = 0; row < SIZE; row++) 
		
		{
		
			for (col = 0; col < SIZE; col++)
			
			printf("%.2f\t", ((A[(row + 1) % 3][(col + 1) % 3] * A[(row + 2) % 3][(col + 2) % 3]) - (A[(row + 1) % 3][(col + 2) % 3] * A[(row + 2) % 3][(col + 1) % 3])) / determinant);
			
			printf("\n");
		}


	return 0;
}