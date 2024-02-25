#include <stdio.h>
#include <string.h>
int countSubstring(char str[], char substr[]);
int main()
{
 char str[80], substr[80];
 int result;

 printf("Enter the string: \n");
 scanf("%s",str);
 printf("Enter the substring: \n");
 scanf("%s",substr);
 result = countSubstring(str, substr);
 printf("countSubstring(): %d\n", result);
 return 0;
}
int countSubstring(char str[], char substr[])
{
    int ans = 0, i, j;
	char p[80];
	for(i = 0; i < strlen(str); i++){
	    if(str[i] == substr[0]){
	        for(j = 0; j < strlen(substr); j++){
	            p[j] = str[i + j];
	        }

	        if(strcmp(p, substr) == 0){
	            ans++;
	        }
	    }
	}

	return ans;
}
