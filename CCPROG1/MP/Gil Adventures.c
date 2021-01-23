#include <stdio.h>
#include<windows.h>
#include <stdlib.h> 
#include <time.h> 

/* Variable Catalog 

1. nTitle: holds the value of the page the the player is on.
2. skipStart: Value holds if Welcome Message should be skipped or not. 
3. isInvalid : or the while loop and if.
4. choice: holds players choice (for main menu and main rift only)

*/
/* PageHead: prints out the approriate heading for each page*/
void pageHead(int nTitle) 
{
		printf("*************************************************************************************************\n");
		if (nTitle == 1)
			printf("                                            MAIN MENU                                            \n");
		else if (nTitle == 2)
			printf("                                   WELCOME TO THE MAIN RIFT                                      \n");
		else if (nTitle == 3)
			printf("                                   Tycoon Meteor's Minerals                                      \n");
		else if (nTitle == 4)
			printf("                                      Pulsian Restoratives                                       \n");
		else if (nTitle == 5)
			printf("                                       Archadian Luxuries                                        \n");
		else if (nTitle == 6)
			printf("                                    Cid's Magical Escapades                                      \n");
		else if (nTitle == 7)
			printf("                                        Gaian Gratitudes                                         \n");
		else if (nTitle == 8)
			printf("                                  Riches and Minerals of Spira                                   \n");
		else if (nTitle == 9)
			printf("                                      MERCHANT OF THE RIFT                                       \n");
		else if (nTitle == 10)
			printf("                                           INVENTORY                                             \n");
		else
			printf("                                    ERROR: HEADING NOT FOUND                                     \n");
		printf("*************************************************************************************************\n\n\n");
}
/* prices: sets random prices based on the ranNum function and the store specials*/
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
	
	int i;
	for (i = 1; i < 8; i++) // repeat 8 times
	{
		int nRandom = ranNum(1,10);
		if (nRandom == 3||nRandom == 6||nRandom == 9)
		{
			if (i == 1)
			{
				*pPhoenix = 0;
			}
			else if (i == 2)
			{
				*pElixir = 0;
			}
			else if (i == 3)
			{
				*pPlat = 0;
			}
			else if (i == 4)
			{
				*pGolden = 0;
			}
			else if (i == 5)
			{
				*pScarlet = 0;
			}
			else if (i == 6)
			{
				*pAdam = 0;
			}
			else if (i == 7)
			{
				*pDark = 0;
			}
			else if (i == 8)
			{
				*pTrap = 0;
			}
		}
	
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
/* inventory: Prints inventory details*/
void inventory (int nPhoenix,int nElixir,int nPlat,int nGolden,int nScarlet,int nAdam,int nDark, int nTrap)
{
	char temp;
	pageHead(10);
	printf("Phoenix Down: %d\n", nPhoenix);
	printf("Elixir Essence: %d\n", nElixir);
	printf("Platinum Ingot: %d\n",nPlat);
	printf("Golden Materia: %d\n", nGolden);
	printf("Scarletite: %d\n", nScarlet);
	printf("Adamentite: %d\n", nAdam);
	printf("Dark Matter: %d\n", nDark);
	printf("Trapezohedron: %d\n", nTrap);
	printf("Press Enter to go back ");
	scanf("%c",&temp);
	system("CLS");
	
}
/* addToInventory: add items your inventory*/
void addToInventory (int itemNumber, int itemQuantity, int *nPhoenix,int *nElixir,int *nPlat,int *nGolden,int *nScarlet,int *nAdam,int *nDark, int *nTrap)
{
	if (itemNumber == 1)
	{
		*nPhoenix = *nPhoenix + itemNumber;
	}
	else if (itemNumber == 2)
	{
		*nElixir = *nElixir + itemNumber;
	}
	else if (itemNumber == 3)
	{
		*nPlat = *nPlat + itemNumber;	
	}
	else if (itemNumber == 4)
	{
		*nGolden = *nGolden + itemNumber;	
	}
	else if (itemNumber == 5)
	{
		*nScarlet = *nScarlet + itemNumber;	
	}
	else if (itemNumber == 6)
	{
		*nAdam = *nAdam + itemNumber;	
	}
	else if (itemNumber == 7)
	{
		*nDark = *nDark + itemNumber;
	}
	else if (itemNumber == 8)
	{
		*nTrap = *nTrap + itemNumber;	
	}
}
/* removeFromInventory: add items your inventory*/
void removeFromInventory (int itemNumber, int itemQuantity, int *nPhoenix,int *nElixir,int *nPlat,int *nGolden,int *nScarlet,int *nAdam,int *nDark, int *nTrap)
{
	if (itemNumber == 1)
	{
		*nPhoenix = *nPhoenix - itemNumber;
	}
	else if (itemNumber == 2)
	{
		*nElixir = *nElixir - itemNumber;
	}
	else if (itemNumber == 3)
	{
		*nPlat = *nPlat - itemNumber;	
	}
	else if (itemNumber == 4)
	{
		*nGolden = *nGolden - itemNumber;	
	}
	else if (itemNumber == 5)
	{
		*nScarlet = *nScarlet - itemNumber;	
	}
	else if (itemNumber == 6)
	{
		*nAdam = *nAdam - itemNumber;	
	}
	else if (itemNumber == 7)
	{
		*nDark = *nDark - itemNumber;
	}
	else if (itemNumber == 8)
	{
		*nTrap = *nTrap - itemNumber;	
	}
}

/* newday: adds specific parts to start the day */
void newDay(int *nDay, int *nDebt)
{
	*nDay = *nDay + 1;
	*nDebt = *nDebt + (*nDebt * 0.15);
}

/* intro: this include a short welcome message followed by the Main Menu screen, returns choice variable*/
char intro(int includeStart, int isInvalid)
{
	char cChoice;
	if (includeStart == 1)
	{
		
	}
	while (isInvalid == 0||isInvalid == 1) // A.K.A Always True
	{
		pageHead(1);
		
		if(isInvalid == 1)
		{
			printf("*****INPUT INVALID*****\n\n");	// only if player input is not on list
		}
		
		printf("          Options:\n");
		printf("[N] New Game\n");
		printf("[Q] Quit Game\n");
		printf("[T] Tutorial/Background Info\n\n");
		printf("Player Choice: ");
		scanf("%c",&cChoice);
		fflush(stdin);
		return cChoice;
		
		
		
	} //While
	
}
char rift (int *nDay, int *nGil, int *nDebt, int isInvalid)
{
	pageHead(2);
	char cChoice;
	if(isInvalid == 1)
		{
			printf("*****INPUT INVALID*****\n\n");	// only if player input is not on list
		}
	printf("Gilgamesh: Where should my travels take me to?\n\n");
	printf("           [1] Tycoon Meteor's Minerals                                     Day   #%d\n",*nDay);
	printf("           [2] Pulsian Restoratives                                         Gil:  %d\n",*nGil);
	printf("           [3] Archadian Luxuries                                           Debt: %d\n",*nDebt);
	printf("           [4] Cid's Magical Escapades\n");
	printf("           [5] Gaian Gratitudes                                             [I]nventory\n");
	printf("           [6] Riches and Minerals of Spira                                 [Q]uit Game\n");
    printf("           [7] Go see the Merchant of the Rift\n\n");
	printf("Player Choice: ");
	scanf("%c",&cChoice);
	fflush(stdin);
	return cChoice;
}

char store (char riftChoice, int nDay, int nGil, int nDebt, int isReturn, int isInvalid, int *pPhoenix,int *pElixir,int *pPlat,int *pGolden,int *pScarlet,int *pAdam,int *pDark, int *pTrap)
{
	system("CLS");
	char storeChoice;
	int n=0;
	pageHead(riftChoice - 46);
	
	while (n == 0|| n == 1)
	{
		if(n == 1)
		{
			printf("*****INPUT INVALID*****\n\n");	// only if player input is not on list
		}	
		printf("Shopkeeper: Welcome! How may I be of service?\n\n");
		printf("Item                             On hand                      Price\n");
		if (*pPhoenix == 0)
		printf("Phoenix Down                     ***********NOT AVAILABLE**********\n");
		else
		printf("Phoenix Down                        %d                         %d G\n",0,*pPhoenix);
		if (*pElixir == 0)
		printf("Elixir Essence                   ***********NOT AVAILABLE**********           Day   #%d\n",nDay);
		else
		printf("Elixir Essence	                    %d                         %d G          Day   #%d\n",0,*pElixir,nDay);
		if (*pPlat == 0)
		printf("Platinum Ingot                   ***********NOT AVAILABLE**********           Gil:  %d\n",nGil);
		else
		printf("Platinum Ingot                      %d                         %d G          Gil:  %d\n",0,*pPlat,nGil);
		if (*pGolden == 0)
		printf("Golden Materia                   ***********NOT AVAILABLE**********           Debt: %d\n",nDebt);
		else
		printf("Golden Materia                      %d                         %d G          Debt: %d\n",0,*pGolden,nDebt);
		if (*pScarlet == 0)
		printf("Scarletite                       ***********NOT AVAILABLE**********\n");
		else
		printf("Scarletite                          %d                         %d G\n",0,*pScarlet);
		if (*pAdam == 0)
		printf("Adamantite                       ***********NOT AVAILABLE**********\n");
		else
		printf("Adamantite                          %d                         %d G\n",0,*pAdam);
		if (*pDark == 0)
		printf("Dark Matter                      ***********NOT AVAILABLE**********\n");
		else
		printf("Dark Matter                         %d                         %d G\n",0,*pDark);
		if (*pTrap == 0)
		printf("Trapezohedron                    ***********NOT AVAILABLE**********\n");
		else
		printf("Trapezohedron                       %d                         %d G\n\n",0,*pTrap);
		printf("[B]uy       [S]ell       [L]eave\n");
		printf("Choice: ");
		scanf("%c",&storeChoice);
		fflush(stdin);
		return storeChoice;
	}
}




int main()
{
	int n = 0;
	char choice = intro(1,0);
	int nDay = 1;
	int nGil = 35000;
	int nDebt = 50000;
	while(n == 0)
	{
		int quit;
		/* Checks which choice is placed*/
		if (choice == 'n'||choice == 'N')
		{
			system("CLS");
			
			
			int nPhoenix=0, nElixir=0, nPlat=0, nGolden=0, nScarlet=0, nAdam=0, nDark=0, nTrap =0;
			int pPhoenix=0, pElixir=0, pPlat=0, pGolden=0, pScarlet=0, pAdam=0, pDark=0, pTrap =0;
			char riftChoice = rift(&nDay,&nGil,&nDebt,0);
			printf("OutWhile!");
			if (riftChoice < 'A')
			prices(riftChoice, &pPhoenix, &pElixir, &pPlat, &pGolden, &pScarlet, &pAdam, &pDark, &pTrap);
			while (n == 0)
			{	
			printf("In while!");
			if (riftChoice == 'q'||riftChoice == 'Q')
			{
				system("CLS");
				printf("All the items you have will be lost [Y/N]: ");
				scanf("%c",&quit);
				fflush(stdin);
					if (quit =='y' || quit == 'Y')
					{
						system("CLS");
						choice = intro(0,1);
					}
			
			}
			else if (riftChoice == 'i'||riftChoice == 'I')
			{
				system("CLS");
				inventory(nPhoenix, nElixir, nPlat, nGolden, nScarlet, nAdam, nDark, nTrap);
				riftChoice = rift(&nDay,&nGil,&nDebt,0);
			}
			else if (riftChoice >= '1' && riftChoice <= '7')
			{
				
				char storeChoice = store(riftChoice,nDay, nGil, nDebt, 0,0, &pPhoenix, &pElixir, &pPlat, &pGolden, &pScarlet, &pAdam, &pDark, &pTrap);
				
				if (storeChoice ==  'B'||storeChoice == 'b')
				{
					
				}
				else if (storeChoice == 'S'||storeChoice == 's')
				{
					
				}
				else if (storeChoice == 'L'||storeChoice == 'l')
				{
					nDay = nDay + 1;
					nDebt = nDebt + (nDebt * 0.35);
					break;
				}
			}
			else
			{
			riftChoice = rift(&nDay,&nGil,&nDebt,1);
			}
			
		}//While
		}
		else if (choice == 't'||choice == 'T')
		{
			return 2;
		}
		else if (choice == 'q'||choice == 'Q')
		{
			system("CLS");
			printf("Are you sure you want to exit the game [Y/N]: ");
			scanf("%c",&quit);
			fflush(stdin);
			
			if (quit =='y' || quit == 'Y')
			{
			system("CLS");
			printf("You may now exit ");
			exit (0);
			}
			else
			{
				system("CLS");
			}
		}
		else
		{
			system("CLS");
			choice = intro(1,1);
		}
	}
	
	
   return 0;
}
