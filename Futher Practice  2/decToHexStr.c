#include <stdio.h>
#include <string.h>
void decTohexStr(char *str, int num);
int main()
{
 int num,i;
 char str[20];
 printf("Enter a decimal number: \n");
 scanf("%d",&num);
 decTohexStr(str,num);
 printf("decTohexStr(): %s\n",str);
 return 0;
}
void decTohexStr(char *str, int num)
{
    int arr[50], k = 0;

    for(int j = num; j > 0; j /= 16){
        arr[k] = j % 16;
        k++;
    }

    for(int i = 0; i < k; i++){
        switch(arr[k - i - 1]){
            case 0:
                str[i] = '0';
                break;
            case 1:
                str[i] = '1';
                break;
            case 2:
                str[i] = '2';
                break;
            case 3:
                str[i] = '3';
                break;
            case 4:
                str[i] = '4';
                break;
            case 5:
                str[i] = '5';
                break;
            case 6:
                str[i] = '6';
                break;
            case 7:
                str[i] = '7';
                break;
            case 8:
                str[i] = '8';
                break;
            case 9:
                str[i] = '9';
                break;
            case 10:
                str[i] = 'A';
                break;
            case 11:
                str[i] = 'B';
                break;
            case 12:
                str[i] = 'C';
                break;
            case 13:
                str[i] = 'D';
                break;
            case 14:
                str[i] = 'E';
                break;
        }
    }

}
