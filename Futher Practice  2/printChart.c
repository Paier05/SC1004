#include <stdio.h>
void printChart(int x, int y, int z);
int main()
{
 int x,y,z;
 printf("Enter 3 inputs: \n");
 scanf("%d %d %d", &x, &y, &z);
 printf("The bar chart is: \n");
 printChart(x,y,z);
 return 0;
}
void printChart(int x, int y, int z)
{
    int holder;
   if(x > y && x > z){
       holder = x;
   }else if(y > x && y > z){
       holder = y;
   }else{
       holder = z;
   }

   for(int i = holder; i > 0; i--){
       if(x - i >= 0){
           printf("*");
       }else{
           printf(" ");
       }

       if(y - i >= 0){
           printf("*");
       }else{
           printf(" ");
       }

       if(z - i >= 0){
           printf("*");
       }else{
           printf(" ");
       }
       printf("\n");
   }
}
