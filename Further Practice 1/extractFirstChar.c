#include <stdio.h>
#include <string.h>
void extractFirstChar(char *str1, char *str2);
int main()
{
 char str1[80], str2[80], *p;

 printf("Enter a string: \n");
 fgets(str1, 80, stdin);
 if (p=strchr(str1,'\n')) *p = '\0';
 extractFirstChar(str1, str2);
 printf("extractFirstChar(): %s\n", str2);
 return 0;
}
void extractFirstChar(char *str1, char *str2)
{
    int ok = 1;
    char ans[80];
    for(int i = 0, j = 0; i <  strlen(str1); i++){
        if(ok == 1){
            ans[j]  = str1[i];
            j++;
            ok = 0;
        }

        if(str1[i] == ' '){
            ok = 1;
        }
    }


    strcpy(str2, ans);
}
