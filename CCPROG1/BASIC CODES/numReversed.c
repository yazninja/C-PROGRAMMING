#include <stdio.h>
#include <math.h>
int main()
{
	/* Define Variables*/
	int n, n1, n2, n3, n4, reverse;
	
	/* Enter Integer*/
	printf("Enter number: ");
    scanf("%d", &n);

	
	/* Calculate Reversed*/
	n1 = n %10;
	n2 = (n %100)/10;
	n3 = (n %1000)/100;
	n4 = n/1000;
    reverse = n1*1000+n2*100+n3*10+n4;
	
	/* Display Reversed*/
	printf("Reversed: %d",reverse);	
	
	

    

    
	return 0;
}

