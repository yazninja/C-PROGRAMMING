#include <stdio.h>
int main()
{
	/* Define Variables*/
	double dRate, dTime, dDistance;
	
	/* Enter value for Rate*/
	printf ("Enter rate: ");
	scanf("%lf",&dRate);
	
	/* Enter value for Time*/
	printf ("Enter time: ");
	scanf("%lf",&dTime);
	
	/* Calculate Distance*/
	dDistance = dRate * dTime;
	/* Display Distance*/
	printf ("\nDistance Calculated: %lf", dDistance);
	return 0;
}

