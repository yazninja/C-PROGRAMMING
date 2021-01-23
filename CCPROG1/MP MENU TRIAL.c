#include <stdio.h>
#include<windows.h> 
int intro() /* Player starts here: Includes options (new game, quit game, background info)*/
{
	char menuChoice,quit;
	int n = 0;
	while (n == 0||n == 1) // For repeating the screen if player input is invalid
	{
		printf("*************************************************************************************************\n");
		printf("                                            MAIN MENU                                            \n");
		printf("*************************************************************************************************\n\n\n");
		if(n == 1)
		{
			printf("*****INPUT INVALID*****\n\n");	
		}
		printf("          Options:\n");
		printf("[N] New Game\n");
		printf("[Q] Quit Game\n");
		printf("[T] Tutorial/Background Info\n\n");
		printf("Player Choice: ");
		scanf("%c",&menuChoice);
		fflush(stdin);
		
		/* Checks which choice is placed*/
		if (menuChoice == 'n'||menuChoice == 'N')
		{
			system("CLS");
			return 1;
		}
		else if (menuChoice == 't'||menuChoice == 'T')
		{
			return 2;
		}
		else if (menuChoice == 'q'||menuChoice == 'Q')
		{
			system("CLS");
			printf("Are you sure you want to exit the game [Y/N]: ");
			scanf("%c",&quit);
			fflush(stdin);
			if (quit =='y' || quit == 'Y')
			{
				system("CLS");
				printf("You may now exit ");
			}
			else
			{
				system("CLS");
			}
		}
		else
		{
			system("CLS");
			n = 1;
		}
	}
		
}
int rift()
{
	int nDay,nGil,nDebt,riftChoice;
	printf("*************************************************************************************************\n");
	printf("                                   WELCOME TO THE MAIN RIFT                                      \n");
	printf("*************************************************************************************************\n\n\n");
	
	printf("Gilgamesh: Where should my travels take me to?\n\n");
	printf("           [1] Tycoon Meteor's Minerals                                     Day #%d\n",nDay);
	printf("           [2] Pulsian Restoratives                                         Gil: %d\n",nGil);
	printf("           [3] Archadian Luxuries                                           Debt: %d\n",nDebt);
	printf("           [4] Cid's Magical Escapades\n");
	printf("           [5] Archadian Luxuries                                           [Q]uit Game\n");
	printf("           [6] Riches and Minerals of Spira\n");
    printf("           [7] Go see the Merchant of the Rift\n\n");
	printf("Player Choice: ");
	scanf("%d",&riftChoice);
	fflush(stdin);	
	
}
int main()
{
	int program;
   program=intro();
   if (program == 1)
   {
   	program=rift();
   }
   else if (program == 2)
   {
   	
   }
   return 0;
}


