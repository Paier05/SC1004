#include <stdio.h>
#include <string.h>
void sortCharStr(char *str);
int main()
{
 char str[80];

 printf("Enter a string: \n");
 scanf("%s",str);
 sortCharStr(str);
 printf("sortCharStr(): %s\n", str);
 return 0;
}
void sortCharStr(char *str)
{
    int i, j;
    char holder;
    for(i = 0; i < strlen(str) - 1; i++){
        for(j = 1; j < strlen(str) - i; j++){
            if(str[j - 1] >  str[j]){
                holder = str[j - 1];
                str[j - 1] = str[j];
                str[j] = holder;
            }
        }
    }
}
