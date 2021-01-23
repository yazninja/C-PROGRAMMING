#include <stdio.h>
int main() 
{
   int i, space, size, k = 0;
   printf("nSize = ");
   scanf("%d", &size);
   for (i = 1; i <= size; i++) 
   {
   		k = 0;
    	
		for (space = 1; space <= size - i; space++) 
		{
    		printf(" ");
      	}
      while (k != 2 * i - 1) {
         printf(" * ");
         k++;
      }
      printf("\n");
   }
   return 0;
}
