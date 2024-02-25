/*
Write a C function maxCharToFront() that accepts a character string str as parameter, finds the
largest character from the string (based on ASCII value), and moves it to the beginning of the
string. E.g., if the string is "adecb", then the string will be "eadcb" after executing the function.
The string will be passed to the caller via call by reference. If more than one largest character is
in the string, then the  first appearance of the largest character will be moved to the beginning
of the string. For example, if the string is "adecbe", then the resultant string will be "eadcbe".
*/

#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
   char str[80], *p;

   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';
   printf("maxCharToFront(): ");
   maxCharToFront(str);
   puts(str);
   return 0;
}
void maxCharToFront(char *str)
{
    int max = 0, holder = strlen(str);
    char *ans, hold;
    for(int i = 1; i < holder; i++){
        max = ((int)str[i] > (int)str[max])?i:max;
    }

    hold = *(str + max);
    for(int j = max; j > 0; j--){
        *(str + j) = *(str + j - 1);
    }

    *str = hold;
}
