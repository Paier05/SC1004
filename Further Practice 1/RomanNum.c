#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
int romanNum(char *str);
int main()
{
 int num;
 char roman[10];
 printf("Enter a Roman number: \n");
 scanf("%s",roman);
 num = romanNum(roman);
 printf("romanNum(): %d\n", num);
 return 0;
}
int romanNum(char *str)
{
    int ans = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'I'){
            ans += 1;
            if(str[i + 1] == 'I'){
                int counter = 0, holder  = i + 1;
                while(str[holder] == 'I'){
                    counter++;
                    holder++;
                }
                ans += counter;
                i = holder;
            }else if(str[i + 1] == 'V'){
                ans += 3;
                i++;
            }else if(str[i + 1] == 'X'){
                ans += 8;
                i++;
            }
        }else if(str[i] == 'V'){
            ans += 5;
        }else if(str[i] == 'X'){
            ans += 10;
        }
    }

    return ans;
}
