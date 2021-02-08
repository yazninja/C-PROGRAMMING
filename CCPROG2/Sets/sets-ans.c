/**
  * Exer: Sets
  *
  * Name: Answer Key
  * Section:
  *
  */
  
#include <stdio.h>
#define MAX 15

// added function: linear search.
int
Search(int key, int A[], int nElem)
{
	int i = 0;
	
	while (i < nElem && A[i] != key)
		i++;
	
	if (i < nElem)
		return i;
	else return -1;
}

/* Task 1: Implement the function setUnion() that will produce the
           union of unique values from the array A and array B.
           In math, union of sets will be the elements from both
		   sets. Do not assume that the arrays have same number 
		   of elements. 
		   
		   Use array indexing notation for this function.

   @param A first array of integers
   @param B second array of integers
   @param C resulting array to contain the union of A and B
   @param nElemA number of elements in array A
   @param nElemB number of elements in array B
   @param pElemC address pointing to the total number of elements in array C
*/

void setUnion(int A[], int B[], int C[], int nElemA, int nElemB, int *pElemC)
{
	int i;
	
	*pElemC = 0;
	
	//for each element in array A not yet in C, copy to C
	for (i = 0; i < nElemA; i++)
		if (Search(A[i], C, *pElemC) == -1)
	    {    C[*pElemC] = A[i];
	         (*pElemC)++;
		}

	//for each element in array B not yet in C, copy to C
	for (i = 0; i < nElemB; i++)
		if (Search(B[i], C, *pElemC) == -1)
	    {    C[*pElemC] = B[i];
	         (*pElemC)++;
		}
}

/* Task 2: Implement the function intersect() that will produce the
           intersection of unique values from the array A and array B.
           In math, intersection of sets will be the common elements only
		   from both sets. Do not assume that the arrays have same number 
		   of elements.

		   Use pointer dereferencing notation for this function.

   @param A first array of integers
   @param B second array of integers
   @param C resulting array to contain the intersection of A and B
   @param nElemA number of elements in array A
   @param nElemB number of elements in array B
   @param pElemC address pointing to the total number of elements in array C
*/
void intersect(int *A, int *B, int *C, int nElemA, int nElemB, int *pElemC)
{
	int i;
	
	*pElemC = 0;
		
	/* for each element in array A that is also in B, 
	   but not yet in C, copy to C */
	for (i = 0; i < nElemA; i++)
		if (Search(*(A+i), B, nElemB) != -1 &&
	        Search(*(A+i), C, *pElemC) == -1)
	    {    *(C + *pElemC) = *(A+i);
	         (*pElemC)++;
		}
}

// You are NOT allowed to modify this function.
void
GetInputs(int A[], int *pElem)
{
	int num;
	
	*pElem = 0;

	do
	{
		 scanf("%d", &num);
		 if (num != -999) // -999 is the sentinel values
		 {
			 A[*pElem] = num;
			 (*pElem)++;
		 }
	} while (*pElem < MAX && num != -999);
}

// You are NOT allowed to modify this function.
void
Display(int A[], int nElem)
{
	int i;
	for (i = 0; i < nElem; i++)
		 printf("%d  ", A[i]);
	printf("\n");
}

int
main()
{
   int A[MAX], B[MAX], U[MAX * 2], I[MAX];
   int nElemA, nElemB, nElemU, nElemI;

   GetInputs(A, &nElemA);
   GetInputs(B, &nElemB);
   
   setUnion(/* Task 3: place your parameter/s here */
             A, B, U, nElemA, nElemB, &nElemU);
   intersect(/* Task 4: place your parameter/s here */
             A, B, I, nElemA, nElemB, &nElemI);
   
   printf("Union: ");
   Display(U, nElemU);
   printf("Intersection: ");
   Display(I, nElemI);

   return 0;
}

/* Study the function GetInputs() to understand how you are supposed 
   to get the set of inputs. 
   
   It is suggested you create your own sample data and place in a text filelength
   for input redirection. 
*/