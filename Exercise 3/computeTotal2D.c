/*
Write a C function that takes a 4x4 two-dimensional array matrix of integer numbers as a
parameter. The function computes the total of the first three elements of each row of the array
and stores it at the last element of the row.
*/

#include <stdio.h>
#define SIZE 4
void computeTotal2D(int matrix[SIZE][SIZE]);
int main()
{
   int a[SIZE][SIZE];
   int i,j;           
   printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
   for (i=0; i<SIZE; i++)
      for (j=0; j<SIZE; j++)
         scanf("%d", &a[i][j]);
   printf("computeTotal2D(): \n");       
   computeTotal2D(a);
   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++)
         printf("%d ", a[i][j]);
      printf("\n");
   }      
   return 0;
}
void computeTotal2D(int matrix[SIZE][SIZE])
{
	for(int i = 0; i < SIZE; ++i){
		int total = 0;
		for(int j = 0; j < SIZE - 1; ++j){
			total += matrix[i][j];
		}
		
		matrix[i][SIZE - 1] = total;
	}
}