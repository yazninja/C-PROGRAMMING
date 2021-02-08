/**
  * Exer: Highest Frequency
  *
  * Name: Yazle Sean Ligot
  * Section: S16A
  *
  */

#include <stdio.h>
#define MAX 15

/* Task 1: Implement the function getHighestFrequency() */

int getHighestFrequency(int A[], int n)
{
  int i, j, temp; // i & j are for loops, temp is the counting variable
  int highest = 0;
  int fA [15]; // fA[] is the frequency array of A[]
  for (i = 0; i < n; i++)
  {
    temp =1;
    for(j = i+1; j < n; j++)
    {
      if(A[i] == A[j])
      {  
        temp++;
        //To avoid counting same element again  
        fA[j] = -1;  
      } 
    }
    if(fA[i] != -1)  
    fA[i] = temp;
    printf("FREQ: %d \n", fA[i]);
  }

  int nfrequency = 0;
 
  for (i = 0; i < n; i++)
  {
    if (fA[i] > highest)
    {
    nfrequency = A[i];
    highest = fA[i];
    }
    else if (fA[i] == highest)
    {
      for (j = 0; j < n; j++)
      {
      if (A[i] > nfrequency)
      {
        nfrequency = A[j];
        highest = fA[j];
      }
      }
    }
  }
  return nfrequency;
}

// You are NOT allowed to modify this function.
void
GetInputs(int A[], int nElem)
{
	int i;
	for (i = 0; i < nElem; i++)
		 scanf("%d", &A[i]);
}

int
main()
{
   int A[MAX], nElem;

   printf("Enter number of elements: ");
   scanf("%d", &nElem);

   if (nElem > 0 && nElem <= MAX)
   {
      GetInputs(A, nElem);
   
      printf("Highest Frequency = %d\n", 
	         getHighestFrequency(A, nElem));
   }
   else printf("Invalid number of elements\n");

   return 0;
}

/* You may use sampleFreq.txt for a sample set of values for 
   input redirection. 
   Output expected based on contents of sampleFreq is:
   Highest Frequency = 404
   
   Note that other test values will be used to evaluate your program.
*/

