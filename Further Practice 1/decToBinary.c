#include <stdio.h>
#include <math.h>

int main()
{
    int num, ans = 0, counter = 0;
    printf("Enter a decimal number:\n");
    scanf("%d", &num);

    for(int i = num; i >= 2; i /= 2){
        ans += (i % 2) * pow(10, counter);
        num /= 2;
        counter++;
    }

    ans += num * pow(10, counter);

    printf("The equivalent binary number: %d", ans);

    return 0;
}
