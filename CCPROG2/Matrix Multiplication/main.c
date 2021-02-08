#include <stdio.h>
#define NROWS 3
#define NCOLS 5

void PrintRowMajor(int A[][NROWS]);


/* Task: Implement the function MatrixMultiply()
         as indicated in problem 1.12 in the 
		 Powerpoint slide on Arrays, 
		 except that do not assume that you have 
		 equal number of rows and columns
*/
void
MatrixMultiply(int C[][NROWS], int A[][NCOLS], int B[][NROWS])
{
  int i,j,product;
  for (i=0; i < NROWS; i++)
  {
    product = 0;
    for (j=0; j< NCOLS; j++)
    {
      product = A[j][i] + B[i][j];
    }
    C[0][i] = product;
  }
}

//You are not allowed to modify this function
void
InitializeMatrix(int A[][NCOLS]) 
{
    int i, j;
	
	for (i = 0; i < NROWS; i++)
	   for (j = 0; j < NCOLS; j++)
	      scanf("%d", &A[i][j]);
}

//You are not allowed to modify this function
void
InitializeMatrix2(int A[][NROWS]) 
{
    int i, j;
	
	for (i = 0; i < NCOLS; i++)
	   for (j = 0; j < NROWS; j++)
	      scanf("%d", &A[i][j]);
}

int
main()
{
    int A[NROWS][NCOLS],
	    B[NCOLS][NROWS],
		C[NROWS][NROWS];
	
	InitializeMatrix(A);
	InitializeMatrix2(B);

    MatrixMultiply(C, A, B);	
	
	PrintRowMajor(C);
	
	return 0;
}

//You are not allowed to modify this function
void
PrintRowMajor(int A[][NROWS])
{
    int i, j;
	
	for (i = 0; i < NROWS; i++)
	{
	   for (j = 0; j < NROWS; j++)
	      printf("%d  ", A[i][j]);
	   printf("\n");
	}
}