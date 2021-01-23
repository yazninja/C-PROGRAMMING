#include <stdio.h>

/* Complete this function. Take note as to what the function should return */

double calculateAverage(double a,double b,double c)
{
	/* modify this line so that it returns the average of a, b, and c */
	return (a+b+c)/3;
}

int main()
{
	double dA, dB, dC;
	
	double dMean;
	
	printf ("Enter 3 numbers: ");
	
	scanf ("%lf%lf%lf",&dA,&dB,&dC);
	
	/* Modify this line so that dMean CALLS calculateAverage and passes the values of dA, dB, and dC as parameters */
	dMean = calculateAverage(dA,dB,dC);
	
	printf ("Average of 3 numbers: %lf\n",dMean);
	
	return 0;
}
