/**
  * Exer: Matrix Multiplication
  *
  * Name: Answer Key
  * Section:
  *
  */
  
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
	/* Target is:
  i	 j      i            j      i            j      i            j          i            j
C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0] + ... A[0][4] * B[4][0]
C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] + A[0][2] * B[2][1] + ... A[0][4] * B[4][1]	
C[0][2] = A[0][0] * B[0][2] + A[0][1] * B[1][2] + A[0][2] * B[2][2] + ... A[0][4] * B[4][2]	

C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] + A[1][2] * B[2][0] + ... A[1][4] * B[4][0]
C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] + A[1][2] * B[2][1] + ... A[1][4] * B[4][1]	
C[1][2] = A[1][0] * B[0][2] + A[1][1] * B[1][2] + A[1][2] * B[2][2] + ... A[1][4] * B[4][2]	

C[2][0] = A[2][0] * B[0][0] + A[2][1] * B[1][0] + A[2][2] * B[2][0] + ... A[2][4] * B[4][0]
C[2][1] = A[2][0] * B[0][1] + A[2][1] * B[1][1] + A[2][2] * B[2][1] + ... A[2][4] * B[4][1]	

  i  j      i  k      k  j
C[2][2] = A[2][0] * B[0][2] + 
          A[2][1] * B[1][2] + 
		  A[2][2] * B[2][2] + ... 
		  A[2][4] * B[4][2]	
    */
	
	int i, j, k;
	
	for (i = 0; i < NROWS; i++)
		for (j = 0; j < NROWS; j++)
	    { 
	       C[i][j] = 0;
		   for (k = 0; k < NCOLS; k++)
			   C[i][j] += A[i][k] * B[k][j];
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
