// check if all digits are even

#include  <stdio.h>
int allEvenDigits1(int num);  
void allEvenDigits2(int num, int *result);     
int main()
{
   int number, p=999, result=999;
   printf("Enter a number: \n");
   scanf("%d", &number);
   p = allEvenDigits1(number);
   if (p == 1)
      printf("allEvenDigits1(): yes\n");
   else if (p == 0)
      printf("allEvenDigits1(): no\n");
   else  
      printf("allEvenDigits1(): error\n");
	   	allEvenDigits2(number, &result);
	   if (result == 1)
	      printf("allEvenDigits2(): yes\n");
	   else if (result == 0)
	      printf("allEvenDigits2(): no\n");
	   else  
	      printf("allEvenDigits2(): error\n");
   return 0;
}
int allEvenDigits1(int num)  
{	
	int ans = 1;
	for(int i = num; i > 0; i /= 10){
		if(i % 10 % 2 != 0){
			ans = 0;
		}
	}
	
	return ans;
}
void allEvenDigits2(int num, int *result)  
{
	*result = 1;
	for(int i = num; i > 0; i /= 10){
		if(i % 10 % 2 != 0){
			(*result) = 0;
		}
	}
}