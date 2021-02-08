/**
  * Exer: Time Worked
  *
  * Name: Answer Key
  * Section:
  *
  */
  
#include <stdio.h>
#define MAX 31

/* Task 1: Implement the function computeMinutes() that computes 
           for the total amount of time (in minutes) worked per day
		   in the month (given the arrays timeIn and timeOut) and 
		   stores this in the minutesWorked array. 
		   
		   All accessing in this function should use 
		   array indexing notation.
*/
void
computeMinutes(int timeIn[], int timeOut[], int minutesWorked[],
               int nElem)
{
    int i, hour, min;
    for (i = 0; i < nElem; i++)
    { 	
         hour = timeOut[i] / 100 - timeIn[i] / 100;
		 min = timeOut[i] % 100 - timeIn[i] % 100;
		 minutesWorked[i] = hour * 60 + min;
	}
}


/* Task 2: Implement the function display() to show the given 
           minutes as hours and minutes. 
		   Refer to the following examples and expected displays:
		   minutes = 114, display "1 hours and 54 minutes"
		   minutes = 240, display "4 hours and 0 minutes"
		   minutes = 22, display  "0 hours and 22 minutes" 
	Note that this function receives only 1 parameter.
*/
void
display(int minutes)
{
	printf("%d hours and %d minutes\n", minutes / 60 , 
	                                  minutes % 60);
}

/* Task 3: Implement the function displayAll() to show each value
           stored in the array given nElem initialized elements. 
           Include the converted minutes (to hours and minutes)
		   in the display by calling function display().
		   
           All access to arrays in this function should use 
		   pointer dereferencing notation.

   You are provided with sampleTime.txt, which you can use
   for input redirection. If I use input and output redirection, 
   the result of your program should produce the exact contents
   (form and text) as in lines 1 to 10 of expected.txt, 
   given sampleTime.txt.
*/
void
displayAll(int * A, int nElem)
{
	int i;
	for (i = 0; i < nElem; i++)
	{
		printf("Day %d worked %d minutes = ", i+1, *(A+i));
		display(*(A+i));
	}	
}

/* Task 4: Implement the function summary() that will 
           compute for the total amount of time (in minutes) 
		   worked by the employee for the month.  
		   The result is also displayed in hours and
		   minutes, thus function display() should
		   also be called in this function as part of the solution.
		   
	Given the sampleTime.txt, this function produces line 11 in
	expected.txt.
*/
void
summary(int * A, int nElem)  
//      (int A[], int nElem)
{
	int sum = 0;
	int i;
	
	for (i = 0; i < nElem; i++)
		sum += *(A+i);    // sum += A[i];
	
	printf("%d total minutes worked this month = ", sum);
	display(sum);
}

// You are NOT allowed to modify this function.
void
GetInputs(int *A, int nElem)
{
	int i;
	for (i = 0; i < nElem; i++)
		 scanf("%d", A + i);
}

int
main()
{

   int timeIn[MAX], timeOut[MAX], nElem;
   int minutesWorked[MAX];

   printf("Enter number of days worked this month: ");
   scanf("%d", &nElem);

   if (nElem > 0 && nElem <= MAX)
   {  //Assume all time in entered first, before all time out
      GetInputs(timeIn, nElem);
	  GetInputs(timeOut, nElem);
	  
      computeMinutes(/* Task 5: place your parameter/s here */
	                 timeIn, timeOut, minutesWorked, nElem);
      displayAll(/* Task 6: place your parameter/s here */
	             minutesWorked, nElem);
	  summary(/* Task 7: place your parameter/s here */
	          minutesWorked, nElem);
   }
   else printf("Invalid number of elements\n");
	

   return 0;
}
