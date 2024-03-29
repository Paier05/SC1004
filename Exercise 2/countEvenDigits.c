// count the number of the even digits

#include <stdio.h>
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
int main()
{
   int number, result;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
   countEvenDigits2(number, &result);
   printf("countEvenDigits2(): %d\n", result);
   return 0;
}
int countEvenDigits1(int number)  
{   
	int counter = 0;
	for(int i = number; i > 0; i /= 10){
		if(i % 10 % 2 == 0){
			counter++;
		}
	}
	
	return counter;
}
void countEvenDigits2(int number, int *count)  
{   
	*count = 0;
   for(int i = number; i > 0; i /= 10){
		if(i % 10 % 2 == 0){
			(*count)++;
		}
	}
}