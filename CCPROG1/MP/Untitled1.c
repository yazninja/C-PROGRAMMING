#include <stdio.h>
int ranNum(int lower, int upper) 
{ 
    int i;
	srand(time(0));
    for (i = 0; i < 3; i++) { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
           return num;
    } 
} 
int newDay (int *nDay, int *nDebt)
{
	*nDay = *nDay + 1;
	*nDebt = *nDebt + (*nDebt * 0.15);
	printf("Random Number 1-5: %d\n",ranNum(1,5));
}
int main ()
{
	int nDay = 1;
	int nGil = 35000;
	int nDebt = 50000;
	int n=0;
	while (n == 0||n == 1)
	{
		printf("Day   #%d\n",nDay);
		printf("Gil:  %d\n",nGil);
		printf("Debt: %d\n\n[1]NewDay",nDebt);
		scanf("%d",&n);
		if (n==1)
		{
			newDay(&nDay,&nDebt);
		}
	}
	
	
	
	return 0;
}
