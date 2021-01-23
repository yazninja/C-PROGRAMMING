#include <stdio.h>
#include <math.h>
int main()
{
	/* Define Variables*/
	double dx, dy, dx1, dy1, dx2, dy2, dDistance;
	
	/* Enter value for P1*/
	printf ("Enter point 1 (x1,y1): ");
	scanf("%lf%lf",&dx1,&dy1);
	
	/* Enter value for P2*/
	printf ("\nEnter point 2 (x2,y2): ");
	scanf("%lf%lf",&dx2,&dy2);
	
	/* Calculate Distance*/
	dx = (dx2 - dx1)*(dx2 - dx1);
	dy = (dy2 - dy1)*(dy2 - dy1);
	dDistance = dx + dy;
	dDistance = sqrt(dDistance);
	/* Display Distance*/
	printf ("\nDistance Calculated: %lf", dDistance);
	return 0;
}

