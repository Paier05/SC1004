#include <stdio.h>
#include <math.h>

int main(){
	int a1, b1, c1, a2, b2, c2;
	float x, y;
	printf("Enter a1,b1,c1,a2,b2,c2:\n");
	scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
	if((a1*b2-a2*b1) == 0){
		printf("Denominator is zero!");
	}else{
		printf("x=%.2f,y=%.2f", (float)(b2*c1-b1*c2)/(float)(a1*b2-a2*b1), (float)(a1*c2-a2*c1)/(float)(a1*b2-a2*b1));
	}
	
	
	return 0;
}