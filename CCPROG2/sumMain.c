#include <LASTNAME_sumStar.c> //replace with the filename of your sumStar solution

/* This main program can be used to test your sumStar solution. 
   You may choose to modify the initialization or the calls here.
   
   A different set of values will be used in testing and grading 
   your work.
*/

int 
main()
{
   int aMatrix[SIZE][SIZE];  
   int nLimit;
   
   srand(time(NULL));

/* you can modify the value of nLimit and aMatrix by assigning instead */   
   nLimit = rand() % 47 + 3; //generates a random value from 3 to 49
   if (nLimit % 2 == 0)
      nLimit++;
   initRandom(aMatrix, nLimit);

   display(aMatrix, nLimit);
   
   printf("Sum of Star = %d\n", sumStar(aMatrix, nLimit));

   return 0;
}

