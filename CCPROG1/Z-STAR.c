#include <stdio.h>

int main ()
{
	int n,i,j,k;
	printf("Enter N: ");
	scanf("%d",&n);
	for (i = 0; i < n;i++)
	{
		for (j = 0; j < n;j++)
		{
			if (i == 0||i == n-1)
			printf("*");
			else
			{
			for(k = i; k < n-1;k++)
			{
			printf(" ");	
			}
			printf("*");
			break;
			}
			
			
		}
		printf("\n");
	}	

	return 0;
}
