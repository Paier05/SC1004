#include <stdio.h>
#include <math.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));         
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);
   return 0;
}
int extEvenDigits1(int num)  
{   
	int ans = 0;
	
	for(int i = num, counter = 0; i > 0; i /= 10){
		if(i % 10 % 2 == 0){
			ans += i % 10 * pow(10, counter);
			counter++;
		}
	}
	
	if(ans == 0){
		ans = -1;	
	}
	
	return ans;
}
void extEvenDigits2(int num, int *result)  
{   
	*result = 0;
	for(int i = num, counter = 0; i > 0; i /= 10){
		if(i % 10 % 2 == 0){
			(*result) += i % 10 * pow(10, counter);
			counter++;
		}
	}
	
	if((*result) == 0){
		(*result) = -1;	
	}
}