#include<stdio.h>

int main(void){
	float e = 1, x;
	printf("Enter x:\n");
	scanf("%f", &x);
	for(int i = 1; i < 11; ++i){
		float holder = 1;
		for(int j = 0; j < i; j++){
			holder = holder * x / (j+1);
		}
		
		e += holder;
		
	}
	
	printf("Result = %.2f", e);
	
	return 0;
	
}