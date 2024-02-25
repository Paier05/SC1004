#include<stdio.h>

int main(){
    int h;
    printf("Enter the height:\n");
    scanf("%d", &h);
    printf("The pattern is:\n");

    for(int i = 1; i <= h; i++){

        for(int k = 0; k < h - i; k++){
            printf(" ");
        }

		int counter = 2 * i - 1;
		
		//printf("%d", counter);
		
        for(int j = 0; j < 2*i - 1; j++){
        	//printf("%d", j);
			if(j > i - 1){
				counter--;
				printf("%d", counter % 10);
			}else{
				printf("%d", (i + j) % 10);
			}
        }

        printf("\n");
    }



    return 0;
}
