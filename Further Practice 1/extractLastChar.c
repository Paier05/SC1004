#include <stdio.h>
#include <string.h>
void extractLastChar(char *str1, char *str2);
int main()
{
 char str1[80], str2[80], *p;

 printf("Enter a string: \n");
 fgets(str1, 80, stdin);
 if (p=strchr(str1,'\n')) *p = '\0';
 extractLastChar(str1, str2);
 printf("extractLastChar(): %s\n", str2);
 return 0;
}
void extractLastChar(char *str1, char *str2)
{
    char ans[80];
    for(int i = 0, j = 0; i < strlen(str1); i++){
        if(str1[i] == ' '){
            *str2++ = str1[i - 1];
        }
    }

    *str2++ = str1[strlen(str1) - 1];
    *str2 = '\0';


}
