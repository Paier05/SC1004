#include <stdio.h>

int main(){
	int height, counter = 0;
	printf("Enter the height:\n");
	scanf("%d", &height);
	printf("The pattern is:\n");
	
	for(int i = 0; i < height; i++){
		for(int j = 0; j < i + 1; j++){
			printf("%c", (counter%2==0)?'A':'B');
			counter++;
		}
		
		printf("\n");
		
		if(i % 2 != 0)
			counter++;
	}
	
	return 0;
}