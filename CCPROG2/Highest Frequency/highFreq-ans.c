/**
  * Exer: Highest Frequency
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


/* Task 1: Implement the function getHighestFrequency() */
int
getHighestFrequency(int A[], int nElem) //(int *A, int nElem)
{
	int i, count, countHi = 0, freqValue, key;
	int index, res;
	
	//for each value in array, count frequency
	for (i = 0; i < nElem; i++)
	{
		//count is updated, per match found
		count = 1;
		key = A[i];
		index = i +1; 
		do
		{
		  res = Search(key, &A[index], nElem - index);
		  if (res != -1)
		  {
			count++;
			index = index + res + 1;
		  }
		} while (res != -1 && index < nElem);	  
		
        //update highest frequency if there is another higher count
		if (count > countHi)
		{ 
	        countHi = count;
			freqValue = A[i];
		}
		else if (count == countHi && freqValue < A[i])
		{ 
	        countHi = count;
			freqValue = A[i];
		}

	}		
	return freqValue;
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
	         getHighestFrequency(/* Task 2: place your parameter/s here */
			                     A, nElem));
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