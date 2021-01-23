#include <stdio.h>

/* Implement the following function:

Name: celsiusToFahrenheit
Return Type: double
Parameter: dCelsius(double)

*/

double celsiusToFahrenheit(double dCelcius)
{
	return (dCelcius*9/5)+32;
}

/* Do NOT modify main */
int main()
{
	double dCelsius, dFahren;
	
	printf ("Enter temperature in Celsius: ");
	scanf ("%lf",&dCelsius);
	
	dFahren = celsiusToFahrenheit(dCelsius); /* You'll have to implement the function */
	
	printf ("Temperature in Fahrenheit: %lf\n",dFahren);
}
