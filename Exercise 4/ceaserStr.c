/*
Cipher text is a popular encryption technique. What we do in cipher text is that we can encrypt
each apha ('a' .. 'z', 'A' .. 'Z') character with +1. For example, "Hello" can be encrypted with +1
cipher to "Ifmmp". If a character is 'z' or 'Z', the corresponding encrypted character will be 'a' or
'A' respectively. For other characters, no encryption is performed. We use call by reference in
the implementation.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cipher(char *s);
void decipher(char *s);
int main()
{
   char str[80], dummychar, *p;
   int choice;

   printf("Select one of the following options: \n");
   printf("1: cipher() \n");
   printf("2: decipher() \n");
   printf("3: exit() \n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            scanf("%c",&dummychar);
            printf("Enter the string: \n");
            fgets(str, 80, stdin);
            if (p=strchr(str,'\n')) *p = '\0';
            printf("To cipher: %s ‐> ", str);
            cipher(str);
            printf("%s\n", str);
            break;
         case 2:
            scanf("%c",&dummychar);
            printf("Enter the string: \n");
            fgets(str, 80, stdin);
            if (p=strchr(str,'\n')) *p = '\0';
            printf("To decipher: %s -> ", str);
            decipher(str);
            printf("%s\n", str);
            break;
         default:break;
      }
   } while (choice < 3);
   return 0;
}
void cipher(char *s)
{
    int adding;
    for(int i = 0; i < strlen(s); i++){
        if(isalpha(*(s + i))){
            //printf("%d ", (int)*(s + i));
            if((int)(*(s + i)) > 64 && (int)(*(s + i)) < 91){
                if((int)*(s + i) + 1 > 90){
                    adding =  ((int)*(s + i) + 1) % 90 + 63;
                }else{
                   adding =  (int)*(s + i) + 1;
                }
                //printf("%d ", *(s + i));
                //printf("%c " , adding);
                *(s + i) = (char)adding;
            }else{
                if((int)*(s + i) + 1 > 122){
                    adding =  ((int)*(s + i) + 1) % 122 + 96;
                }else{
                   adding =  (int)*(s + i) + 1;
                }
                //printf("%d ", *(s + i));
                //printf("%c " , adding);
                *(s + i) = (char)adding;
            }
        }
    }
}
void decipher(char *s)
{
    int adding;
    for(int i = 0; i < strlen(s); i++){
        if(isalpha(*(s + i))){
            //printf("%d ", (int)*(s + i));
            if((int)(*(s + i)) > 64 && (int)(*(s + i)) < 91){
                if((int)*(s + i) - 1 < 65){
                    adding =  ((int)*(s + i) - 1) + 26;
                }else{
                   adding =  (int)*(s + i) - 1;
                }
                //printf("%d ", *(s + i));
                //printf("%c " , adding);
                *(s + i) = (char)adding;
            }else{
                if((int)*(s + i) - 1 < 97){
                    adding =  ((int)*(s + i) - 1) + 26;
                }else{
                   adding =  (int)*(s + i) - 1;
                }
                //printf("%d ", *(s + i));
                //printf("%c " , adding);
                *(s + i) = (char)adding;
            }
        }
    }
}
