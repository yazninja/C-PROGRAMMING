#include <stdio.h>
primeFactors (int nVal)
{
	printf(".");
	int factor, i, prime;
	for (factor = 2; factor <= nVal; factor++)
	{
		printf("-");
		
		if (nVal % factor == 0)
		{
			prime = 1;
			for (i = 2; i <= factor; i++)
			{
				printf("*");
				if (factor % i == 0)
				{
					printf("+");
					prime = 0;
					break;
				}
			}
			if (prime == 1)
			{
				printf("%d ", factor);
			}
		}
	}
}

int main ()
{
	int nVal;
	printf("Nval: ");
	scanf("%d",&nVal);
	printf("return:");
	primeFactors(nVal);
   return 0;
}
