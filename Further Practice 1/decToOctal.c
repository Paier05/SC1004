#include <stdio.h>
#include <math.h>

int main()
{
    int dec_num, ans = 0, counter = 0;
    printf("Enter a decimal number:\n");
    scanf("%d", &dec_num);

    for(int i = dec_num; i >= 8; i /= 8){
        ans += (i % 8) * pow(10, counter);
        dec_num /= 8;
        counter++;
    }

    ans += dec_num * pow(10, counter);

    printf("The equivalent octal number: %d", ans);

    return 0;
}
