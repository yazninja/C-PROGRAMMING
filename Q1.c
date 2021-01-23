#include <stdio.h>
divByThree (int nStart, int nEnd)
{
	int nDisplay;
	for (nDisplay = nStart; nDisplay <= nEnd; nDisplay++)
	{
		if (nDisplay % 3 == 0)
		{
			printf(" %d",nDisplay);
			
		
			if (nDisplay + 3 <= nEnd)
			{
				printf(",");
			}
			else
			{	
				printf(".");
			}
		}
		
		
	}
}

int main ()
{
	int nStart, nEnd;
	printf("nStart: ");
	scanf("%d",&nStart);
	printf("nStart: ");
	scanf("%d",&nEnd);
	printf("display:");
	divByThree(nStart,nEnd);
   return 0;
}
