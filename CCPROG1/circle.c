/* Assignment #2:

Item #3
Enter a circle's radius as input.

Output the circle's circumference and
diameter.
*/

#include <stdio.h>
#include <math.h> /* for the acos() function */

#define PI 2*acos(0.0) /* Constant PI declared for you */

int main()
{
	double dRadius; /* Input variable declared for you. This is the circle's radius */
	
	double dCircumference, dArea;
	
	printf ("Enter the circle's radius: ");
	
	scanf("%lf",&dRadius);
	dRadius = dRadius;
	
	
	
	/*************
	MODIFY THIS LINE
	
	Modify this line such that dCircumference will be the
	circumference given PI and dRadius
	*************/	
	dCircumference = 2*PI* dRadius;
	
	
	/*************
	MODIFY THIS LINE
	
	Modify this line such that dArea will be the
	Area given PI and dRadius
	*************/
	dArea = PI* (dRadius*dRadius);
	
	
	/*************
	MODIFY THIS LINE
	
	Modify this line such that this printf will display
	the following:
	
	The circumference is <dCircumference>
	*************/
	
	printf ("The circumference is %lf \n", dCircumference);
	
	/*************
	MODIFY THIS LINE
	
	Modify this line such that this printf will display
	the following:
	
	The area is <dArea>
	*************/
	
	printf ("The area is %lf \n",dArea);
	
	return 0;
}
