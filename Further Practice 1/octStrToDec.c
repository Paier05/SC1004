#include <stdio.h>
#include <math.h>
#include <string.h>
int octStrTodec(char *str);
int main()
{
 char str[20],*sp;
 int num;

 printf("Enter an octal number: \n");
 scanf("%s",str);
 num=octStrTodec(str);
 printf("octStrTodec(): %d\n",num);
 return 0;
}
int octStrTodec(char *str)
{
    int ans = 0, oct = 0;
    for(int i = strlen(str) - 1, counter = 1; i >= 0; i--, counter *= 10){
        switch(str[i]){
            case '0':
                oct += 0 * counter;
                break;
            case '1':
                oct += 1 * counter;
                break;
            case '2':
                oct += 2 * counter;
                break;
            case '3':
                oct += 3 * counter;
                break;
            case '4':
                oct += 4 * counter;
                break;
            case '5':
                oct += 5 * counter;
                break;
            case '6':
                oct += 6 * counter;
                break;
            case '7':
                oct += 7 * counter;
                break;
            case '8':
                oct += 8 * counter;
                break;
            case '9':
                oct += 9 * counter;
                break;
        }
    }

    for(int j = oct, counter = 0; j > 0; j /= 10, counter++){
        ans += (j % 10) * pow(8, counter);
    }

    return ans;
}
