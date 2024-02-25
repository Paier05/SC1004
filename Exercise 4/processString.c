/*
Write a C function that accepts a string str and returns the total number of vowels
totVowels and digits totDigits in that string to the caller via call by reference.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
   char str[50], *p;
   int totVowels, totDigits;
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';
   processString(str, &totVowels, &totDigits);
   printf("Total vowels = %d\n", totVowels);
   printf("Total digits = %d\n", totDigits);
   return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    *totDigits = *totVowels = 0;
    for(int i = 0; i < strlen(str); i++){
        if(isdigit(str[i])){
            (*totDigits)++;
            //printf("checker\n");
        }else if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' ||tolower(str[i]) == 'i' ||tolower(str[i]) == 'o' ||tolower(str[i]) == 'u'){
            (*totVowels)++;
            //printf("checker\n");
        }
    }
}
