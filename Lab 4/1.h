#include <stdio.h>
#include <string.h>
char *sweepSpace(char *str);
int main()
{
 char str[80], *p;

 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("sweepSpace(): %s\n", sweepSpace(str));
 return 0;
}
char *sweepSpace(char *str)
{
    int holder = strlen(str);
    char *ans;
    for(int i = 0, j = 0; j < holder; i++, j++){
        if(*(s + j) != ' '){
            *(ans + i) = *(s + j)
        }else{
            j++;
        }
    }

    return ans;
}
