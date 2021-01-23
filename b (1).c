/* Assignment #2:

Item #2:
Take in 3 numbers as an input.

Output the average of the 3 numbers.
*/

#include <stdio.h>

int main()
{
	double dA, dB, dC; /* Variables have been declared for you */
	
	double dMean;
	
	printf ("Enter 3 numbers: ");
	
	scanf("%lf",&dA);
	scanf("%lf",&dB);
	scanf("%lf",&dC);
	
	
	
	
	/*************
	MODIFY THIS LINE
	
	Modify this line such that dMean will be the average
	of dA, dB, and dC.
	*************/
	
	dMean = (dA+dB+dC)/3;
	
	/*Output*/
	printf ("The average of the 3 numbers is %lf\n",dMean);
	
	return 0;
}
