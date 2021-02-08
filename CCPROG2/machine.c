#include <stdio.h>
#include <string.h>
#define MAX 30
typedef char str30 [MAX +1];
typedef char str15[16];

int main()
{
	int option;
	char filename [16];
	char productName[MAX+1];
	FILE *fp;
	
	printf ("Input filename (nic.txt): ");
	scanf ( "%s" , filename );
	 
	if (filename != NULL)
	{
		fp = fopen ("nic.txt","w");
		
		printf ("(1)Add New Product\n");
		printf ("(2)Edit Product\n");
		printf ("(3)Show Products\n");
		printf ("(4)Show Low Stock Products\n");
		printf ("(5)Load Sales Report\n");
		printf ("(6)Generate Reports\n");
		
		printf ("Enter chosen option: ");
		scanf ("%d", &option);
		
		if (option ==1)
		{
			printf ("Product Name: ");
			fflush(stdin);
			fgets (productName, MAX+1, stdin);
			fprintf (fp, "%s,", productName);
		}
		fclose (fp);
	}	
	else
	printf ("Cannot find the inventory file.");
	
	return 0;
}
