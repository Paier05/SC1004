#include <stdio.h>

int main(){
	int height;
	printf("Enter the height:\n");
	scanf("%d", &height);
	printf("The pattern is:\n");
	
	for(int i = 0; i < height; i++){
		for(int j = i + 1; j <= i + i + 1; j++){
			printf("%d", j % 10);
		}
		printf("\n");
	}
	
	return 0;
}