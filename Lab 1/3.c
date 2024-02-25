#include<stdio.h>

int main(void){
	int height;
	printf("Enter the height:\n");
	scanf("%d", &height);
	printf("Pattern:\n");
	for(int i = 1; i <= height; ++i){
		if(i % 3 != 0){
			for(int j = 0; j < i; ++j)
				printf("%d", i % 3);
		}else{
			for(int j = 0; j < i; ++j)
				printf("%d", 3);
		}
		printf("\n");
	} 
	
	return 0;
}