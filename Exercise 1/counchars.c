#include <stdio.h>

int main()
{
	char enter;
	int checker, counterdigit = 0, counteralpha = 0;
	printf("Enter your characters (# to end):\n");
	while(enter != '#'){
		scanf(" %c", &enter);
		checker = (int)enter;
		if(checker > 47 && checker < 57){
			counterdigit++;
		}else if(checker > 64 && checker < 91){
			counteralpha++;
		}else if(checker > 96 && checker < 123){
			counteralpha++;
		}
	}
	
	printf("The number of digits: %d\n", counterdigit);
	printf("The number of letters: %d", counteralpha);
	
	
	return 0;
}