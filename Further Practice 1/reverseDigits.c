#include <stdio.h>
int reverseDigits(int num);
int main()
{
   int num, result=999;
   printf("Enter a number: \n");
   scanf("%d", &num);
   printf("reverseDigits(): %d\n", reverseDigits(num));
   return 0;
}
int reverseDigits(int num)
{
    int counter = 1, ans = 0;
    for(int i = num; i > 10; i /= 10)
        counter *= 10;

    for(int j = counter; j > 0; j /= 10){
        ans += (num % 10) * j;
        num /= 10;
    }

    return ans;
}
