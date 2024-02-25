#include <stdio.h>
#include <math.h>

int main(){
    int num, ans = 0;
    printf("Enter an octal number:\n");
    scanf("%d", &num);

    for(int i = num, counter = 0; i > 0; i /= 10, counter++){
        ans += (i % 10) * pow(8, counter);
    }

    printf("The equivalent decimal number: %d", ans);

    return 0;
}
