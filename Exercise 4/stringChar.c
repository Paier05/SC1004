/*
Write a C function that locates the last occurrence of ch in the string pointed to by s. The
function returns a pointer to the character, or a null pointer if ch does not occur in the string.
#case 0
Sample input
something
z
Sample output
null string

#case 1
Sample input
something
t
Sample output
thing

#case 2
Sample input
i have ten dollars
a
Sample output
ars
*/


#include <stdio.h>
#include <string.h>
char *stringrChr(char *s, char ch);
int main()
{
   char s[80], c, *p;
   char *temp=NULL;

   printf("Enter a string: \n");
   fgets(s, 80, stdin);
   if (p=strchr(s,'\n')) *p = '\0';
   printf("Enter a char: \n");
   scanf("%c", &c);
   temp = stringrChr(s, c);
   if (temp!=NULL)
      printf("stringrChr(): %s\n", temp);
   else
      printf("stringrChr(): null string\n");
   return 0;
}
char *stringrChr(char *s, char ch)
{
    char ans[100];
    int times = strlen(s), holder = -1;
    for(int i = 0; i < times; i++){
        //printf("%c ", s[i]);
        if(s[i] == ch){
            holder = i;
        }
    }

    if(holder != -1){
        for(int j = holder, k = 0; j < times; ++j, ++k){
            ans[k] = s[j];
        }

        char *finans = ans;
        return finans;
    }else{
        return NULL;
    }
}
