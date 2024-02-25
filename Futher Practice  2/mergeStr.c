#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main()
{
 char a[80],b[80];
 char c[80];
 printf("Enter the first string a: \n");
 scanf("%s",a);
 printf("Enter the second string b: \n");
 scanf("%s",b);
 mergeStr(a,b,c);
 printf("mergeStr(): %s", c);
 return 0;
}
void mergeStr(char *a, char *b, char *c)
{
    int i, j;
    char holder;
    strcpy(c, a);
    strcat(c, b);
    for(i  = 0; i < strlen(c); i++){
        for(j = 1; j < strlen(c) - i; j++){
            if((int)c[j-1] > (int)c[j]){
                holder = c[j];
                c[j] = c[j - 1];
                c[j - 1] = holder;
            }
        }
    }
}
