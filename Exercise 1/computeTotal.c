#include <stdio.h>

int main(){
	int lines, ele, num, total = 0;
	printf("Enter number of lines:\n");
	scanf("%d", &lines);
	for(int i = 0; i < lines; ++i){
		total = 0;
		printf("Enter line %d:\n", i+1);
		scanf("%d", &ele);
		for(int j = 0; j < ele; j++){
			scanf("%d", &num);
			total += num;
		}
		printf("Total: %d\n", total);
	}
	
	return 0;
}