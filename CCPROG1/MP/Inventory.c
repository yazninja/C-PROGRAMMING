#include <stdio.h>
void inventory (int nPhoenix,int nElixir,int nPlat,int nGolden,int nScarlet,int nAdam,int nDark, int nTrap)
{
	printf("Phoenix Down: %d\n", nPhoenix);
	printf("Elixir Essence: %d\n", nElixir);
	printf("Platinum Ingot: %d\n",nPlat);
	printf("Golden Materia: %d\n", nGolden);
	printf("Scarletite: %d\n", nScarlet);
	printf("Adamentite: %d\n", nAdam);
	printf("Dark Matter: %d\n", nDark);
	printf("Trapezohedron: %d\n", nTrap);
}
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
int main ()
{
	int n=0;
	int addorremove;
	int nPhoenix=0, nElixir=0, nPlat=0, nGolden=0, nScarlet=0, nAdam=0, nDark=0, nTrap =0;
	while (n == 0)
	{
		inventory(nPhoenix, nElixir, nPlat, nGolden, nScarlet, nAdam, nDark, nTrap);
		printf("\n[1]ADD    [2]REMOVE");
		scanf("%d",&addorremove);
		if (addorremove == 1)
		{
			addToInventory(1,1,&nPhoenix, &nElixir, &nPlat, &nGolden, &nScarlet, &nAdam, &nDark, &nTrap);
		}
		else if (addorremove == 2)
		{
			removeFromInventory(1,1,&nPhoenix, &nElixir, &nPlat, &nGolden, &nScarlet, &nAdam, &nDark, &nTrap);
		}
		system("CLS");
	}
	
	
	
	return 0;
}
