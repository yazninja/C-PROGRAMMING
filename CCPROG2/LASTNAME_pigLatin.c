#include <pig.h>

void 
split(string aWords[], int *pElem, longString sentence)
{
}

/* Note that the original word should not be modified.  
   Apart from placing the pig latin equivalent in result, 
   the function also returns the starting address to result.
*/
char * 
toPigLatin(char * result, char * word)
{
}

/* This function displays the contents of aWords, separating each entry 
   in the display with one space.
*/
void 
display(string aWords[], int nElem)
{
}

/* This function concatenates the contents of aWords into the
   result (thereby forming a new sentence).  Concatenation of
   words is separated by one space after each element of aWords.
*/
void 
concatenate(longString result, string aWords[], int nElem)
{
}

int
main()
{
   int nElem1 = 5, nResElem1 = 0;
   char letters1[MAX] = { 'e', 'a', 's', 'e', 'l'};
   int nElem2 = 10, nResElem2 = 0;
   char letters2[MAX] = { 'o', 'r', 't', 'h', 'o', 'g', 'o', 'n', 'a', 'l'};
   int nElem3 = 8, nResElem3 = 0;
   char letters3[MAX] = { 'c', 'l', 'a', 'r', 'i', 'n', 'e', 't'};
   int nElem4 = 5, nResElem4 = 0;
   char letters4[MAX] = { 'n', 'y', 'm', 'p', 'h'};
   int nElem5 = 5, nResElem5 = 0;
   char letters5[MAX] = { 'B', 'A', 'C', 'O', 'N'};

   char dest[MAX + 3];
   
   printf("\n\nTo pig latin:\n");
 
    printf("1. ");
    display(letters1, nElem1);
	printf("-->  ");
	toPigLatin(letters1, nElem1, dest, &nResElem1);
	display(dest, nResElem1);
	printf("\n2.  ");
    display(letters2, nElem2);
	printf("-->  ");
	toPigLatin(letters2, nElem2, dest, &nResElem2);
	display(dest, nResElem2);
	printf("\n3.  ");
    display(letters3, nElem3);
	printf("-->  ");
	toPigLatin(letters3, nElem3, dest, &nResElem3);
	display(dest, nResElem3);
	printf("\n4.  ");
    display(letters4, nElem4);
	printf("-->  ");
	toPigLatin(letters4, nElem4, dest, &nResElem4);
	display(dest, nResElem4);
	printf("\n5.  ");
    display(letters5, nElem5);
	printf("-->  ");
	toPigLatin(letters5, nElem5, dest, &nResElem5);
	display(dest, nResElem5);
	
   return 0;
}





/*    copy(letters, 3, dest);
      copy(letters, 2, dest + 3);
      copy(letters + 2, 2, dest + 5);
*/ 