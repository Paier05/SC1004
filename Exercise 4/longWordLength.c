/*
Write a C function that accepts an English sentence as parameter, and returns the length of the
longest word in the sentence. For example, if the sentence is "I am happy.", then the length of
the longest word "happy" in the sentence 5 will be returned. Assume that each word is a
sequence of English letters

Sample input
I am happy.
Sample output
5
*/

#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
   char str[80], *p;

   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';
   printf("longWordLength(): %d\n", longWordLength(str));
   return 0;
}
int longWordLength(char *s)
{
    int max = 0, counter = 0;
    for(int i = 0; i < strlen(s); i++){
        if(isalpha(s[i])){
            counter++;
        }else{
            max = (counter > max)?counter:max;
            counter = 0;
        }
    }

    if(max == 0){
        max = strlen(s);
    }


    return max;
}
