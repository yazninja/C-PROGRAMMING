#include <LASTNAME_pigLatin.c> 

int
main()
{
   longString sentence, result;   
   string aWords[MAX], aLatin[MAX], temp;
   int nElem = 0;
 
   fgets(sentence, (MAX+2) * MAX, stdin); //capacity is to account for space in between words
   sentence[strlen(sentence) - 1] = '\0';

   split(/* place your parameters here */);
   printf("\nContents of original sentence:\n");
   display(aWords, nElem);
   printf("word count = %d\n\n", nElem);
   
   for (i = 0; i < nElem; i++)
      strcpy(aLatin[i],toPigLatin(temp, aWords[i]));   

   printf("Per word in pig latin:\n");
   display(aLatin, nElem);
   
   concatenate(/* place your parameters here */);
   printf("\n\nConcatenated:\n%s\n", result);
   printf("Number of characters in new sentence: %d\n", strlen(result));
   
   return 0;
}


