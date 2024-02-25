#include <stdio.h>

int main(){
	int num;
	printf("Enter a number (between 1 and 9):\n");
	scanf("%d", &num);
	
	printf("Multiplication Table:\n");
	printf("  ");
	
	for(int k = 1; k <= num; k++)
		printf("%d ", k);
		
	printf("\n");
	
	for(int i = 1; i <= num; i++){
		printf("%d ", i);
		for(int j = 1; j <= i; j++){
			printf("%d ", i*j);
		}
		printf("\n");
	}
	
	return 0;
}