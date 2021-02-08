/**
  * Exer: Sets
  *
  * Name: Yazle Sean Ligot
  * Section: S16A
  *
  */
  
#include <stdio.h>
#define MAX 15
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
void setUnion (int A[], int B[], int C[], int nA, int nB, int * nC)
{
  int i, j, temp, min;
  *nC = 0;
  i=0;
  while (i < nA) // copy all elements of A[] to C[] if A[] is not in C[]
  {
  	temp = 0;
  	 for (j = 0; j < nA; j++)
  	 {
	   if (A[*nC] == A[j])
	   {
	   	 temp++;	
       }   
	 }
	 if (temp <= 1)
       {
       	 C[*nC] = A[*nC];
         (*nC)++; // *nC = *nC +1;
	   }  
	   i++;
  }
  for (i = 0; i < nB; i++) // check if B[] has an element in C[], if NOT add to C[]
  {
    temp = 0;
    for (j = 0; j < nA; j++)
    {
      if (B[i] == C[j])
      temp++;
    }
    if (temp == 0)
      {
        C[*nC] = B[i];
        (*nC)++;
      }
  }
  for (i = 0; i < *nC - 1; i++) 
  {
	min = i; 
	for (j = i + 1; j < *nC; j++) 
	if (C[min] > C[j])
	min = j;
	temp = C[i];
	C[i] = C[min];
	C[min] = temp;
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
void intersect (int *A, int *B, int *C, int nA, int nB, int * nC)
{
  int i, j, k,min,temp;
  *nC=0;
  for (i = 0; i < nA; i++) 
  {
    for (j = 0; j < nB; j++)
    {
      if (*(A + i) == *(B + j) )
      {
        *(C + *nC) = *(A + i);
        (*nC)++; 
      }
    }
  }
  for (i = 0; i < *nC - 1; i++) // sort array C[] in acending order
  {
	min = i; 
	for (j = i + 1; j < *nC; j++) 
	if (*(C + min) > *(C + j))
	min = j;
	temp = *C + i);
	*(C + i) = *(C + min);
	*(C + min) = temp;
  }

  for (i = 0; i< *nC; i++) // delete duplicate in array C[]
    for (j = i + 1;j < *nC; j++)
      if (*(C + i) == *(C +j))
      {
      	for (k = j;k < *nC; k++)
      	  *(C + k) = *(C + k + 1);
      	(*nC)--;
      	j--;
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
   
   setUnion(A, B, U, nElemA, nElemB, &nElemU);
   intersect(A, B, I, nElemA, nElemB, &nElemI);
   
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