#include<stdio.h>

int main(){
	double x, ans = 1, holder;
	printf("Enter a number:\n");
	scanf("%lf", &x);

	for(int i = 0; i < 20; i++){
		holder = ((i + 1) % 2 == 0)? 1 : -1;
		for(int j = 0; j < i + 1; j++){
			holder *= (x/(float)(j + 1));
		}
		
		ans += holder;
	}
	
	printf("Result = %.2f", ans);
	
	return 0;
}