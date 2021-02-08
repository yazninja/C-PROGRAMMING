#include <stdio.h>
#include <string.h>

#define MAX 10
#define ROWS 5

typedef char arrStrings[ROWS][MAX+1];
typedef char str[MAX+1];
typedef str  arrStrings2[ROWS];

int
isPalindrome(char letters[])
{
    int i = 0, 
	nElem = strlen(letters);

/* Approach here is to compare 1st and last character, then
   2nd character with 2nd to the last char, etc.
*/
    while (letters[i] == letters[nElem - i - 1] &&
           i < nElem / 2)
       i++;
   
    if (i >= nElem / 2)
         return 1;
    else return 0; 
}

/* Alternative solution: copy the contents in reverse order */
char *
copyRev(char dest[], char source[])
{
	int i;
	for (i = 0; i < strlen(source); i++)
	   dest[i] = source[strlen(source) - i -1];
	
	dest[i] = '\0'; /* by the end of loop, i is at index equivalent
	                   to length of the source string */

    return dest;
}

int
isPal2(char *letters)
{
	char dest[MAX+1];
	
	if (strcmp(copyRev(dest, letters), letters) == 0)
	    return 1;
	else return 0;
}

int
main()
{
   
   char letters[MAX+1] = { 'm', 'a', 'd', 'a', 'm', '\0'};

   char aText[5][MAX+1];  // char aText[ROWS][MAX+1];
   arrStrings aText2;
   arrStrings2 aText3;
   str aText4[ROWS];
   
   int i;

   //scanf("%s", letters);
   
   /* to get input for more than one word:
   fgets(letters, MAX+1, stdin);
   letters[strlen(letters)-1] = '\0';
   */
   
     if (isPalindrome(letters))  // if (isPal2(letters))
        printf("It's a palindrome\n");
     else printf("Not a palindrome\n");
	 
	 for (i = 0; i < ROWS; i++)
     { 
  //	   scanf("%s", aText[i]);
         fgets(aText[i], MAX+1, stdin);
		 aText[i][strlen(aText[i])-1] = '\0';
		 
		 if (isPal2(aText[i]))
           printf("It's a palindrome\n");
         else printf("Not a palindrome\n");
	 }
   return 0;
}