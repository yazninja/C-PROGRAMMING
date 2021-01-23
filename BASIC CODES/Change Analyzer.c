#include <stdio.h>
#include <math.h>
int main()
{
	/* Define Variables*/
	int nAmount,nNow , n1000, n500, n200, n100, n50, n20, n10, n5;
	
	/* Enter Amount*/
	printf("Enter amount: ");
    scanf("%d", &nAmount);

	
	/* Calculate Money*/
	n1000 = nAmount/1000;
	nNow = nAmount - (n1000*1000);
	n500 = nNow /500;
	nNow = nNow - (n500*500);
	n200 = nNow /200;
	nNow = nNow - (n200*200);
	n100 = nNow /100;
	nNow = nNow - (n100*100);
	n50 = nNow /50;
	nNow = nNow - (n50*50);
	n20 = nNow /20;
	nNow = nNow - (n20*20);
	n10 = nNow /10;
	nNow = nNow - (n10*10);
	n5 = nNow /5;
	nNow = nNow - (n10*5);
	/* Display Reversed*/
	printf("\nBreaking down: \n\n");
	printf("1000 Peso Bills: %d\n",n1000);
	printf("500 Peso Bills: %d\n",n500);
	printf("200 Peso Bills: %d\n",n200);
	printf("100 Peso Bills: %d\n",n100);
	printf("Fifty Peso Bills: %d\n",n500);
	printf("Twenty Peso Bills: %d\n",n20);
	printf("Ten Peso Coins: %d\n",n10);
	printf("Five Peso Coins: %d\n",n5);
	printf("One Peso Coins: %d",nNow);
	
	

    

    
	return 0;
}

