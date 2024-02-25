#include <stdio.h>

int main()
{
	char tester;
	int checker;
	printf("Enter a character:\n");
	scanf(" %c", &tester);
	checker = (int)tester;
	if(checker > 47 && checker < 57){
		printf("Digit");
	}else if(checker > 64 && checker < 91){
		printf("Upper case letter");
	}else if(checker > 96 && checker < 123){
		printf("Lower case letter");
	}else{
		printf("Other character");
	}
	
	
	return 0;
}