#include<stdio.h>

int main(void){
	int studentid, mark, condition;
	printf("Enter Student ID: \n");
	scanf("%d", &studentid);
	while(studentid != -1){
		printf("Enter Mark:\n");
		scanf("%d", &mark);
		printf("Grade = ");
		if(mark <= 100 && mark > 74){
			condition = 1;
		}else if(mark > 64){
			condition = 2;
		}else if(mark > 54){
			condition = 3;
		}else if(mark > 44){
			condition = 4;
		}else if(mark > 0){
			condition = 5;
		}
		
		switch(condition){
			case 1:
				printf("A\n");
				break;
			case 2:
				printf("B\n");
				break;
			case 3:
				printf("C\n");
				break;
			case 4:
				printf("D\n");
				break;
			case 5:
				printf("F\n");
				break;
		}
		
		printf("Enter Student ID:\n");
		scanf("%d", &studentid);
	}
	
	return 0;
}