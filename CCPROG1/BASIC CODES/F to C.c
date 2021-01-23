#include <stdio.h>
#include <math.h>
int main()
{
	/* Define Variables*/
	double dF,dC;
	
	/* Enter value for farenheight*/
	printf ("Enter temperature in Farenheight: ");
	scanf("%lf",&dF);
	

	
	/* Calculate Celcius*/

	dC = (dF-32)*5/9;
	
	/* Display Celcius*/
	printf ("\nTemperature in Celcius: %lf", dC);
	return 0;
}

