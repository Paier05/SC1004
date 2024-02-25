/*
Write a function that accepts a string s as its parameter. The string contains a sequence of
words separated by spaces. The function then displays the number of words in the string.

Sample input
How old are you
Sample output
4
*/

#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
   char str[80], *p;
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';
   printf("countWords(): %d", countWords(str));
   return 0;
}
int countWords(char *s)
{
    int counter = 1;
    for(int i = 0; i < strlen(s); i++){
        //printf("%c ", s[i]);
        if(s[i] == ' '){
            //printf("checker");
            counter++;
        }
    }

    return counter;
}
