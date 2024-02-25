
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
    //printf("%d ", holder);
    char ans[100];
    for(int i = 0, j = 0; j < holder; j++){
        if(str[j] != ' '){
            //printf("%d %d\n", i, j);
            ans[i++] = *(str + j);
        }
    }
    //puts(ans);
    char *fine = ans;
    return fine;

}
