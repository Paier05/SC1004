#include<stdio.h>

int main(void){
	int studentid, mark;
	printf("Please enter student id:\n");
	scanf("%d", &studentid);
	while(studentid != -1){
		printf("Please enter the mark:\n");
		scanf("%d", &mark);
		printf("Grade = ");
		if(mark <= 100 && mark > 74){
			printf("A\n");
		}else if(mark > 64){
			printf("B\n");
		}else if(mark > 54){
			printf("C\n");
		}else if(mark > 44){
			printf("D\n");
		}else if(mark > 0){
			printf("F\n");
		}
		printf("Please enter student id:\n");
		scanf("%d", &studentid);
	}
	
	return 0;
}