#include <stdio.h>
#include <string.h>
void PigLatin(char *eword, char *PLword);
int main()
{
 char eword[80];
 char PLword[80];
 printf("Enter your English word: \n");
 scanf("%s", eword);
 PigLatin(eword, PLword);
 printf("PigLatin(): %s\n", PLword);
 return 0;
}
void PigLatin(char *eword, char *PLword)
{
    if(eword[0] == 'a' || eword[0] == 'e' || eword[0] == 'i' || eword[0] == 'o' || eword[0] == 'u' || eword[0] == 'y'){
        strcpy(PLword, eword);
        strcat(PLword, "ay");
    }else{
        char p[80];
        int counter = 0, i, k;
        while(eword[counter] != 'a' && eword[counter] != 'e' && eword[counter] != 'i' && eword[counter] != 'o' && eword[counter] != 'u'){
            p[counter] = eword[counter];
            counter++;
        }

        p[counter] = '\0';


        for(i = 0, k = counter; i < strlen(eword) - counter; i++, k++){
            PLword[i] = eword[k];
        }

        PLword[strlen(PLword) - 1] = '\0';

        strcat(PLword, p);
        strcat(PLword, "ay");
    }
}
