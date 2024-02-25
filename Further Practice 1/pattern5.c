#include<stdio.h>

int main(){
	int h, counter = 0;
	printf("Enter the height:\n");
	scanf("%d", &h);
	printf("The pattern is:\n");
	for(int i = 0; i < h; i++){
		for(int k = 0; k < h - i - 1; k++)
			printf(" ");
			
		for(int j = 0; j < 2 * (i + 1) - 1; j++){
			if(counter % 2 == 0){
				printf("+");
			}else{
				printf("=");
			}
			counter++;
		}
		printf("\n");	
	}
	
	return 0;
}