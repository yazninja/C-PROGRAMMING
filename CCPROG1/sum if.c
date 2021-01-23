#include <stdio.h>
sumEven (int nStart, int nEnd)
{
	int nDisplay, nSum=0;
	for (nDisplay = nStart; nDisplay <= nEnd; nDisplay++)
	{
		if (nDisplay %2 == 0)
		{
			printf(" %d",nDisplay);
				
			if (nDisplay + 2 <= nEnd)
			{
				printf(" +");
			}
			else
			{	
				printf(";\n||");
			}
			nSum = nSum + nDisplay;
		}
			
	}
	printf(" %d",nSum);
	return nSum;
}

int main ()
{
	int nStart, nEnd;
	printf("nStart: ");
	scanf("%d",&nStart);
	printf("nStart: ");
	scanf("%d",&nEnd);
	printf("return:");
	sumEven(nStart,nEnd);
   return 0;
}
