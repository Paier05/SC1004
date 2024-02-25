#include <stdio.h>
#include <math.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
int main()
{
   int num, digit, result=-1;
    
   printf("Enter the number: \n");
   scanf("%d", &num);      
   printf("Enter k position: \n");
   scanf("%d", &digit);    
   printf("digitValue1(): %d\n",  digitValue1(num, digit));
   digitValue2(num, digit, &result);
   printf("digitValue2(): %d\n", result);    
   return 0;
}
int digitValue1(int num, int k)
{
   int answer;
    for(int i = 1; i <= k; i++){
        answer = 0;
        answer = ((num % (int)pow(10, i)) - (num % (int)pow(10, i -1)))/(int)pow(10, i-1);
    }

    return answer;
   
}
void digitValue2(int num, int k, int *result)  
{
   for(int i = 1; i <= k; i++){
        (*result) = 0;
        (*result) = ((num % (int)pow(10, i)) - (num % (int)pow(10, i -1)))/(int)pow(10, i-1);
    }
}