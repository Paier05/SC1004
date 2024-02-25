#include <stdio.h>

int main(){
	int ftemp;
	float ctemp;
	
	printf("Enter the temperature in degree F:\n");
	scanf("%d", &ftemp);
	while(ftemp != -1){
		ctemp = (5.0/9.0)*(ftemp - 32);
		printf("Converted degree in C: %.2f\n", ctemp);
		printf("Enter the temperature in degree F:\n");
		scanf("%d", &ftemp);
	}
	
	
	return 0;
}