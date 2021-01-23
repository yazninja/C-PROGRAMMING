#include <stdio.h>
#include <math.h> /* for the acos() function */

#define PI 2*acos(0.0) /* Constant PI declared for you */

double coneArea(double radius, double slant)
{
	return (PI*radius*slant);
}
double baseArea(double radius)
{
	return (PI*radius*radius);
}
double surfaceArea(double cone, double base)
{
	return (cone+base);
}

int main()
{
// call variables
	double dRadius, dHeight, dSlant, dConeArea, dBaseArea, dSurfaceArea;
	
//reads the necessary inputs from the user

	printf("Cone Program \n\nEnter Radius: ");
	scanf("%lf",&dRadius);
	
	printf("\nEnter Height: ");
	scanf("%lf",&dHeight);
	
	printf("\nEnter Slant Height: ");
	scanf("%lf",&dSlant);
	
//calls the function Area Of Cone

dConeArea = coneArea(dRadius, dSlant);

//calls the function Area of Base

dBaseArea = baseArea(dRadius);

//calls the function to get the Surface Area
dSurfaceArea = surfaceArea(dConeArea, dBaseArea);

//displays the Surface Area
printf("\n\nCone Area is: %lf\nBase Area is: %lf\nSurface Area is: %lf", dConeArea, dBaseArea, dSurfaceArea);

return 0;
}

