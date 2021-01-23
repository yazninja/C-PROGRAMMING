#include <stdio.h>
#include<windows.h>
#include <stdlib.h> 
#include <time.h> 
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
			printf("*****INPUT INVALID*****\n\n");	// only if player input is not on list
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
void rift(int nDay, int nGil, int nDebt)
{
	char riftChoice,quit;
	int n=0;
	int pPhoenix, pElixir, pPlat, pGolden, pScarlet, pAdam, pDark, pTrap;
	while (n == 0 || n==1)
	{
	printf("*************************************************************************************************\n");
	printf("                                   WELCOME TO THE MAIN RIFT                                      \n");
	printf("*************************************************************************************************\n\n\n");
	if(n == 1)
		{
			printf("*****INPUT INVALID*****\n\n");	// only if player input is not on list
		}
	printf("Gilgamesh: Where should my travels take me to?\n\n");
	printf("           [1] Tycoon Meteor's Minerals                                     Day   #%d\n",nDay);
	printf("           [2] Pulsian Restoratives                                         Gil:  %d\n",nGil);
	printf("           [3] Archadian Luxuries                                           Debt: %d\n",nDebt);
	printf("           [4] Cid's Magical Escapades\n");
	printf("           [5] Gaian Gratitudes                                             [Q]uit Game\n");
	printf("           [6] Riches and Minerals of Spira\n");
    printf("           [7] Go see the Merchant of the Rift\n\n");
	printf("Player Choice: ");
	scanf("%c",&riftChoice);
	fflush(stdin);
	
	if (riftChoice == 'q'||riftChoice == 'Q')
	{
		system("CLS");
			printf("All the items you have will be lost [Y/N]: ");
			scanf("%c",&quit);
			fflush(stdin);
			if (quit =='y' || quit == 'Y')
			{
				exit(0);
			}
			
	}
	else if (riftChoice == '1')
	{
		pPhoenix = 0; pElixir= 0; pPlat= 0; pGolden= 0; pScarlet= 0; pAdam= 0; pDark= 0; pTrap= 0;
		prices(riftStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark, &pTrap);
		system("CLS");
		store(nDay, nGil, nDebt);
	}
	else if (riftChoice == '2')
	{
		pPhoenix = 0; pElixir= 0; pPlat= 0; pGolden= 0; pScarlet= 0; pAdam= 0; pDark= 0; pTrap= 0;
		prices(riftStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark, &pTrap);
		system("CLS");
		store(nDay, nGil, nDebt);
	}
	else if (riftChoice == '3')
	{
		pPhoenix = 0; pElixir= 0; pPlat= 0; pGolden= 0; pScarlet= 0; pAdam= 0; pDark= 0; pTrap= 0;
		prices(riftStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark, &pTrap);
		system("CLS");
		store(nDay, nGil, nDebt);
	}
	else if (riftChoice == '4')
	{
		pPhoenix = 0; pElixir= 0; pPlat= 0; pGolden= 0; pScarlet= 0; pAdam= 0; pDark= 0; pTrap= 0;
		prices(riftStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark, &pTrap);
		system("CLS");
		store(nDay, nGil, nDebt);
	}
	else if (riftChoice == '5')
	{
		pPhoenix = 0; pElixir= 0; pPlat= 0; pGolden= 0; pScarlet= 0; pAdam= 0; pDark= 0; pTrap= 0;
		prices(riftStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark, &pTrap);
		system("CLS");
		store(nDay, nGil, nDebt);
	}
	else if (riftChoice == '6')
	{
		pPhoenix = 0; pElixir= 0; pPlat= 0; pGolden= 0; pScarlet= 0; pAdam= 0; pDark= 0; pTrap= 0;
		prices(riftStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark, &pTrap);
		system("CLS");
		store(nDay, nGil, nDebt);
	}
	else if (riftChoice == '7')
	{
		system("CLS");
		
		pPhoenix = 0; pElixir= 0; pPlat= 0; pGolden= 0; pScarlet= 0; pAdam= 0; pDark= 0; pTrap= 0;
		prices(riftStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark, &pTrap);
		store(nDay, nGil, nDebt);
	}
	else
	{
	system("CLS");
	n = 1;
	}
}
	
}
void store(int nDay, int nGil, int nDebt)
{
	char storeChoice;
	int n=0;
	
	while (n == 0|| n == 1)
	{
		printf("*************************************************************************************************\n");
		if (cStore == '1')
		printf("                                      Tycoon Meteor's Minerals                                   ");
		else if (cStore == '2')
		printf("                                        Pulsian Restoratives                                     ");
		else if (cStore == '3')
		printf("                                         Archadian Luxuries                                      ");
		else if (cStore == '4')
		printf("                                       Cid's Magical Escapades                                   ");
		else if (cStore == '5')
		printf("                                           Gaian Gratitudes                                      ");
		else if (cStore == '6')
		printf("                                    Riches and Minerals of Spira                                 ");
		else
		printf("                                       ERROR: STORE NOT FOUND                                    ");
		printf("\n*************************************************************************************************\n\n\n");
		if(n == 1)
		{
			printf("*****INPUT INVALID*****\n\n");	// only if player input is not on list
		}	
		printf("Shopkeeper: Welcome! How may I be of service?\n\n");
		printf("Item                             On hand                      Price\n");
		printf("Phoenix Down                        %d                         %d G\n",0,pPhoenix);
		printf("Elixir Essence	                    %d                         %d G          Day   #%d\n",0,pElixir,nDay);
		printf("Platinum Ingot                      %d                         %d G          Gil:  %d\n",0,pPlat,nGil);
		printf("Golden Materia                      %d                         %d G          Debt: %d\n",0,pGolden,nDebt);
		printf("Scarletite                          %d                         %d G\n",0,pScarlet);
		printf("Adamantite                          %d                         %d G\n",0,pAdam);
		printf("Dark Matter                         %d                         %d G\n",0,pDark);
		printf("Trapezohedron                       %d                         %d G\n",0,pTrap);
		printf("\n[B]uy       [S]ell       [L]eave\n");
		printf("Choice: ");
		scanf("%c",&storeChoice);
		fflush(stdin);
	
		if (storeChoice == 'b'||storeChoice == 'B')
		{
			system("CLS");
			buysell(1,nDay,nGil,nDebt,cStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark,&pTrap);
		}
		else if (storeChoice == 's'||storeChoice == 'S')
		{
			system("CLS");
			buysell(2,nDay,nGil,nDebt,cStore,&pPhoenix,&pElixir,&pPlat,&pGolden,&pScarlet,&pAdam,&pDark,&pTrap);
		}
		else if (storeChoice == 'l'||storeChoice == 'L')
		{
			system("CLS");
			nDay = nDay+1;				 // Advance One day
			nDebt = nDebt +(nDebt*0.15); // Debt increased by 15%
			rift(nDay, nGil, nDebt);	 // Return to Main Rift 
		}
		else 
		{
		system("CLS");
		n = 1;
		}
		
	}
}
void buysell(int bsChoice, int nDay, int nGil, int nDebt, char cStore,int *pPhoenix,int *pElixir,int *pPlat,int *pGolden,int *pScarlet,int *pAdam,int *pDark, int *pTrap)
{

	char cItem, enter;
	int itemQuantity, netPrice, n = 0;
	printf("*************************************************************************************************\n");
		if (cStore == '1')
		printf("                                      Tycoon Meteor's Minerals                                   ");
		else if (cStore == '2')
		printf("                                        Pulsian Restoratives                                     ");
		else if (cStore == '3')
		printf("                                         Archadian Luxuries                                      ");
		else if (cStore == '4')
		printf("                                       Cid's Magical Escapades                                   ");
		else if (cStore == '5')
		printf("                                           Gaian Gratitudes                                      ");
		else if (cStore == '6')
		printf("                                    Riches and Minerals of Spira                                 ");
		else
		printf("                                       ERROR: STORE NOT FOUND                                    ");
		printf("\n*************************************************************************************************\n\n\n");
		printf("Shopkeeper: Buying an Item? Which One?\n\n");
		printf("Item                             On hand                      Price\n");
		printf("[1]Phoenix Down                     %d                         %d G\n",0,*pPhoenix);
		printf("[2]Elixir Essence                   %d                         %d G          Day   #%d\n",0,*pElixir,nDay);
		printf("[3]Platinum Ingot                   %d                         %d G          Gil:  %d\n",0,*pPlat,nGil);
		printf("[4]Golden Materia                   %d                         %d G          Debt: %d\n",0,*pGolden,nDebt);
		printf("[5]Scarletite                       %d                         %d G\n",0,*pScarlet);
		printf("[6]Adamantite                       %d                         %d G\n",0,*pAdam);
		printf("[7]Dark Matter                      %d                         %d G\n",0,*pDark);
		printf("[8]Trapezohedron                    %d                         %d G\n",0,*pTrap);
		printf("\nChoice: ");
		scanf("%c",&cItem);
		fflush(stdin);
		
	if (cItem < '9' || cItem > '0')
	{
		while (n == 0)
		{	
			system("CLS");
		
			printf("*************************************************************************************************\n");
			if (cStore == '1')
				printf("                                      Tycoon Meteor's Minerals                                   ");
			else if (cStore == '2')
				printf("                                        Pulsian Restoratives                                     ");
			else if (cStore == '3')
				printf("                                         Archadian Luxuries                                      ");
			else if (cStore == '4')
				printf("                                       Cid's Magical Escapades                                   ");
			else if (cStore == '5')
				printf("                                           Gaian Gratitudes                                      ");
			else if (cStore == '6')
				printf("                                    Riches and Minerals of Spira                                 ");
			else
				printf("                                       ERROR: STORE NOT FOUND                                    ");
			printf("\n*************************************************************************************************\n\n\n");
			printf("Shopkeeper: How many of ");
			
			if (cItem == '1')
			{
				printf("Phoenix Down");	
			}
			else if (cItem == '2')
			{
				printf("Elixir Essence");	
			}
			else if (cItem == '3')
			{
				printf("Platinum Ingot");	
			}
			else if (cItem == '4')
			{
				printf("Golden Materia");	
			}
			else if (cItem == '5')
			{
				printf("Scarletite");	
			}
			else if (cItem == '6')
			{
				printf("Adamentite");	
			}
			else if (cItem == '7')
			{
				printf("Dark Matter");	
			}
			else if (cItem == '8')
			{
				printf("Trapezohedron");	
			}
			printf ("(s) do you want to purchace\n\n");
			printf("Choice: ");
			scanf("%d",&itemQuantity);

			if (cItem == '1')
			{
				netPrice = *pPhoenix * itemQuantity;
			}
			else if (cItem == '2')
			{
				netPrice = *pElixir * itemQuantity;	
			}
			else if (cItem == '3')
			{
				netPrice = *pPlat * itemQuantity;	
			}
			else if (cItem == '4')
			{
				netPrice = *pGolden* itemQuantity;	
			}
			else if (cItem == '5')
			{
				netPrice = *pScarlet * itemQuantity;
			}
			else if (cItem == '6')
			{
				netPrice = *pAdam * itemQuantity;	
			}
			else if (cItem == '7')
			{
				netPrice = *pTrap * itemQuantity;	
			}
		
			if (nGil - netPrice > 0)
			{
				nGil = nGil - netPrice;
				store(nDay, nGil, nDebt, cStore,1);
			}
			else
			{
				system("CLS");
				netPrice = 0;
				printf("*************************************************************************************************\n");
				if (cStore == '1')
					printf("                                      Tycoon Meteor's Minerals                                   ");
				else if (cStore == '2')
					printf("                                        Pulsian Restoratives                                     ");
				else if (cStore == '3')
					printf("                                         Archadian Luxuries                                      ");
				else if (cStore == '4')
					printf("                                       Cid's Magical Escapades                                   ");
				else if (cStore == '5')
					printf("                                           Gaian Gratitudes                                      ");
				else if (cStore == '6')
					printf("                                    Riches and Minerals of Spira                                 ");
				else
					printf("                                       ERROR: STORE NOT FOUND                                    ");
				printf("\n*************************************************************************************************\n\n\n");
				printf("Shopkeeper: Your funds are insufficient!\n\nPress any key to continue");
				store(nDay,nGil,nDebt,cStore,1);
			}
	
		}	
	}
		
}

void prices(char cStore,int *pPhoenix,int *pElixir,int *pPlat,int *pGolden,int *pScarlet,int *pAdam,int *pDark, int *pTrap)
{
	srand(time(0));
	*pPhoenix=ranNum(800, 1200);
	*pElixir=ranNum(1500, 2100);
	*pPlat=ranNum(5000, 7000);
	*pGolden=ranNum(3500, 5500);
	*pScarlet=ranNum(8000, 12000);
	*pAdam=ranNum(15000, 30000);
	*pDark=ranNum(40000, 70000);
	*pTrap=ranNum(60000, 90000);
	
	if (cStore == '1')
	{
		*pTrap=ranNum(35000, 65000);	
	}
	else if (cStore == '2')
	{
		*pPhoenix=ranNum(300, 800);
		*pElixir=ranNum(1000, 1700);
	}
	else if (cStore == '3')
	{
		*pPlat=ranNum(4000, 6000);	
	}
	else if (cStore == '4')
	{
		*pGolden=ranNum(3000, 5000);	
	}
	else if (cStore == '5')
	{
		*pScarlet=ranNum(5000, 10000);
	}
	else if (cStore == '6')
	{
		*pAdam=ranNum(9500, 20000);
		*pDark=ranNum(22000, 50000);
	}
	
	
	 
}
int ranNum(int lower, int upper) 
{ 
    int i; 
    for (i = 0; i < 1; i++) { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
           return num;
    } 
} 
int main()
{
	int program;
   program=intro();
   if (program == 1)
   {
   rift(1,20000,50000); // Start Game with amount Specified
   }
   else if (program == 2)
   {
   	
   }
   return 0;
}


