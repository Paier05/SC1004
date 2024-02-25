/*
Write a C function that reads in words separated by space, finds the first and last words
according to ascending alphabetical order (based on ASCII values), and returns them to the
calling function through the string parameters first and last

Sample input
2
Peter Mary
Sample output
Mary Peter
*/

#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size);
int main()
{
   char word[SIZE][40];
   char first[40], last[40];
   int i, size;

   printf("Enter size: \n");
   scanf("%d", &size);
   printf("Enter %d words: \n", size);
   for (i=0; i<size; i++)
      scanf("%s", word[i]);
   findMinMaxStr(word, first, last, size);
   printf("First word = %s, Last word = %s\n", first, last);
   return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int size)
{
    int holdermax = 0, holdermin = 0;
    for(int i = 1; i < size; i++){
        holdermax = ((int)word[i][0] > (int)word[holdermax][0])?i:holdermax;
        holdermin = ((int)word[i][0] < (int)word[holdermin][0])?i:holdermin;
    }

    strcpy(first, word[holdermin]);
    strcpy(last, word[holdermax]);
}
