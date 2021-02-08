/* You are NOT allowed to modify the contents of this file */

#include <stdio.h>
#include <string.h>

#define MAX 20

typedef char string[MAX+4];
typedef char longString[(MAX+4)*MAX]; 

void split(string aWords[], int *pElem, longString sentence);
char * toPigLatin(char * result, char * word);
void display(string aWords[], int nElem);
void concatenate(longString result, string aWords[], int nElem);
