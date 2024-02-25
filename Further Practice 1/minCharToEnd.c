#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
 char str[80];

 printf("Enter a string: \n");
 scanf("%s",str);
 minCharToEnd(str);
 printf("minCharToEnd(): %s",str);
 return 0;
}
void minCharToEnd(char *str)
{
	int holder = 0;
	char hold;
	for(int i = 1; i < strlen(str); i++){
		holder = ((int)(*str + i) < (int)(*str))?i:holder;
	}
	
	hold = *(str + holder);
	
	for(int j = holder; j < strlen(str) - 1; j++){
		*(str + j) = *(str + j + 1);
	}
	
	*(str + strlen(str) - 1) = hold;
}