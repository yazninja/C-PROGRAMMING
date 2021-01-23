#include <stdio.h>
double convertInchesToMeters(double height)
{
	double heightM;
	heightM = height*0.0254;
	return heightM;
}
double convertPoundsToKg(double weight)
{
	double weightKg;
	weightKg = weight*0.453592;
	return weightKg;
}
double getBMI(double height, double weight)
{
	double calculate;
	height = height*height;
	calculate = (weight/height);
	return calculate;
}


int main()
{
// call variables
	double dHeight, dWeight, BMI;
	
//reads the necessary inputs from the user

	printf("BMI Program \n\nEnter Height(in): ");
	scanf("%lf",&dHeight);
	
	printf("\nEnter Weight(lb): ");
	scanf("%lf",&dWeight);
	
//calls the function to convert the height input to its equivalent value in meters

dHeight = convertInchesToMeters(dHeight);

//calls the function to convert the weight input to its equivalent value in kilograms

dWeight = convertPoundsToKg(dWeight);

//calls the function to compute for the BMI in kg/m2
BMI = getBMI(dHeight,dWeight);
//displays the BMI value
printf("Your BMI is: %lf", BMI);

return 0;
}

