#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
   char a[80],b[80];
   char ch, *p;

   printf("Enter a string: \n");
   fgets(a, 80, stdin);
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter a character to be inserted: \n");
   ch = getchar();
   insertChar(a,b,ch);
   printf("insertChar(): ");
   puts(b);
   return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
    int holder = strlen(str1);
    if(holder < 3){
        strcpy(str2, str1);
    }else if(holder == 3){
        strcpy(str2, str1);
        //puts(str2);
        *(str2 + holder) = ch;
        //printf("%c\n", *(str2 + holder + 1));
    }else{
        for(int i = 1; i <= holder; i++){
            *str2++ = *str1++;
            if(i % 3 == 0){
                *str2++ = ch;
            }
        }
    }

}
