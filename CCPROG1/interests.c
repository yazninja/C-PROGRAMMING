#include <stdio.h>

int main()
{
	int nAge, nIncome, nDepend;
	char cResp;
	
	printf("Age >");
	scanf("%d",&nAge);
	if (nAge >= 21)
	{
		printf("Income >");
		scanf("%d",&nIncome);
		if (nIncome >= 15000)
		{
			printf("No. of Dependents >");
			scanf("%d",&nDepend);
			if (nDepend >=2 && nDepend <= 4)
			{
				printf("previous Cardholder >");
				scanf("%c",&cResp);
				if (cResp == 'Y' || cResp == 'y')
				{
					printf("yes! You qualify for the interest rate! \n");
				}
				else
				{
					printf("SORRY NOT QUALIFIED!");
				}
			}
			else
			{
				printf("SORRY NOT QUALIFIED!");
			}
		}
		else
		{
			printf("SORRY NOT QUALIFIED!");
		}
	}
	else
	{
		printf("SORRY NOT QUALIFIED!");
	}

	return 0;
}


