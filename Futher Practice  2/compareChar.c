#include <stdio.h>
#include <string.h>
void compareChar(char *str1, char *str2, char *str3);
int main()
{
 char str1[80],str2[80],str3[80];

 printf("Enter the first string: \n");
 scanf("%s",str1);
 printf("Enter the second string: \n");
 scanf("%s",str2);
 compareChar(str1, str2, str3);
 printf("compareChar(): %s\n", str3);
 return 0;
}
void compareChar(char *str1, char *str2, char *str3)
{
    int i, j, holder = (strlen(str1) < strlen(str2))?strlen(str1):strlen(str2);
   char *p;

   if(strlen(str1) > strlen(str2)){
       strcpy(p, str1);
   }else{
       strcpy(p, str2);
   }

   for(i = 0; i < holder; i++){
       printf("checker\n");
       *(str3 + i) = ((int)str1[i] > (int)str2[i])?str1[i]:str2[i];
       puts(str3);
   }

   //printf("%d\n", holder);
   //puts(p);

   for(j = holder; j < strlen(p); j++){
       //printf("checker\n");
       *(str3 + j) = p[j];
       //puts(str3);
   }

   *(str3 + strlen(str3) - 1) = '\0';
}
