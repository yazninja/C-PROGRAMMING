#include "pig.h"

/* Additional functions created to solve the problem */
/*
void
copy( char * source, int nElem, char * dest)
*/
void
copy(char source[], int nElem, char dest[])
{
    int i;
  
    for (i = 0; i < nElem; i++)
      dest[i] = source[i];
      // *(dest + i) = *(source + i);
}

int
indexOfFirstVowel(char source[], int nElem)
{
	int i;
		
    i = 0;
	while (i < nElem &&
	       source[i] != 'a' && source[i] != 'A' &&
		   source[i] != 'e' && source[i] != 'E' &&
		   source[i] != 'i' && source[i] != 'I' &&
		   source[i] != 'o' && source[i] != 'O' &&
		   source[i] != 'u' && source[i] != 'U')
		i++;
	
	return i;  /*Note that if source does not contain
	             vowels (eg. "fly"), returned value is
				 the number of elements in source */
}	


void 
split(string aWords[], int *pElem, longString sentence)
{
	int i, j = 0;
	
	*pElem = 0;
	
	//included the index where the '\0' is to include the last word
	for (i = 0; i <= strlen(sentence); i++)
	   if (sentence[i] != ' ' && sentence[i] != '\0')
	   {
	      aWords[*pElem][j] = sentence[i];
		  j++;
	   }
	   else 
	   {
		   aWords[*pElem][j] = '\0';
		   j = 0;
		   (*pElem)++;
	   }
}

/* Note that the original word should not be modified.  
   Apart from placing the pig latin equivalent in result, 
   the function also returns the starting address to result.
*/
char * 
toPigLatin(char * result, char * word)
{
	int i,
	    nElem = strlen(word),
	    vowelInd;

    vowelInd = indexOfFirstVowel(word, nElem);   
	
	if (vowelInd == nElem) //no vowels in word
	{
	   strcpy(result, word);
	   strcat(result, "ay");
	}
	else if (vowelInd == 0) //first letter is vowel
	{
		//just add "way"
	   strcpy(result, word);
	   strcat(result, "way");
	}
	else //first letter/s is/are consonants
	{
        i = vowelInd;
		
		//copy all letters starting from vowels
		copy(word + i, nElem - i, result);
		
		//copy all consonants in front to the end
		copy(word, i , result + (nElem - i));

		result[nElem] = '\0';
		//add "ay" at the end
       strcat(result, "ay");	   
	}
	
	return result;
}

/* This function displays the contents of aWords, separating each entry 
   in the display with one space.
*/
void 
display(string aWords[], int nElem)
{
	int i;
	for (i = 0; i < nElem; i++)
		printf("%s ", aWords[i])
}

/* This function concatenates the contents of aWords into the
   result (thereby forming a new sentence).  Concatenation of
   words is separated by one space after each element of aWords.
*/
void 
concatenate(longString result, string aWords[], int nElem)
{
	int i;
	
	result[0] = '\0'; // to properly initialize the string
	//strcpy(result, "\0");
	
	for (i = 0; i < nElem; i++)
	{
	   strcat(result, aWords[i]);
	   if (i < nElem - 1) // if not last word
	      strcat(result, " ");
	}
}
