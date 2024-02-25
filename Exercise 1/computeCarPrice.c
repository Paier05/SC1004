#include <stdio.h>

int main(){
	int price, category;
	float total = 0;
	printf("Please enter the list price:\n");
	scanf("%d", &price);
	printf("Please enter the category:\n");
	scanf("%d", &category);
	
	total += (float)price * 0.9 * 1.03;
	
	switch(category){
		case 1:
			total += 70000.0;
			break;
		case 2:
			total += 80000.0;
			break;
		case 3:
			total += 23000.0;
			break;
		case 4:
			total += 600.0;
			break;
	}
	
	
	if(total > 100000.0)
		total *= 1.1;
		
	printf("Total price is $%.2f", total);
		
	
	return 0;
}