#include<stdio.h>

int main(void){
	int times;
	float average, counter, number, sum;
	printf("Enter number of lines:\n");
	scanf("%d", &times);
	for(int i = 0; i < times; ++i){
		sum = 0;
		average = 0;
		number = 0;
		counter = 0;
		printf("Enter line %d (end with -1):\n", i + 1);
		while(number != -1){
			scanf("%f", &number);
			if(number != -1){
				sum += number;
				counter++;
			}
		}
		
		average = sum / counter;
		printf("Average = %.2f \n", average);
	}
	
	return 0;
}