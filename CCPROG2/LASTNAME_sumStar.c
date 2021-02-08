#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define SIZE 49

/* This function generates random values for a 
   nLimit x nLimit matrix.
   @param aMatrix is the 2D array of integers
   @param nLimit is the number of rows and columns 
                 that will be initialized in the aMatrix   
                     
*/
void 
initRandom(int aMatrix[][SIZE], int nLimit)
{
    int nRow, nCol;
	
	for (nRow = 0; nRow < nLimit; nRow++)
       for (nCol = 0; nCol < nLimit; nCol++)
		  aMatrix[nRow][nCol] = rand() % 10000;
		
}

/* This function displays the 2D array of initialized
   elements only
*/
void
display(int aMatrix[][SIZE], int nLimit)
{
    int nRow, nCol;
	
	for (nRow = 0; nRow < nLimit; nRow++)
	{   printf("Row %d: ", nRow +1);
	    for (nCol = 0; nCol < nLimit; nCol++)
		   printf("%d   ", aMatrix[nRow][nCol]);
		printf("\n");
	}
}



/* TO DO: Implement function sumStar().  Note that your
          solution should not use more than 3 loop statements.
*/
int 
sumStar(int aMatrix[][SIZE], int nLimit)
{	
    /* write your implementation here */

}

