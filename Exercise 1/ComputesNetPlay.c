#include <stdio.h>

int main(){
	int hours;
	float gross, tax;
	printf("Enter hours of work:\n");
	scanf("%d", &hours);
	if(hours > 40){
		gross = (((float)hours-40.0)*9.0)+40.0*6.0;
	}else{
		gross = (float)hours*6.0;
	}
	
	printf("Gross pay=%.2f\n", gross);
	
	if((int)gross <= 1000){
		tax = gross/10.0;
	}else if((int)gross <= 1500){
		tax = ((gross-1000.0)/5.0)+1000.0/10.0;
	}else{
		tax = 1000.0/10.0+500.0/5.0+((gross-1500.0)*3.0/10.0);
	}
	
	printf("Tax=%.2f\n", tax);
	
	printf("Net pay=%.2f", gross-tax);
	return 0;
}