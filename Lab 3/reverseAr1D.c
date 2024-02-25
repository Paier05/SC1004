/*
Write a C function reverseAr1D() that takes in an array of integers ar and an integer size
as parameters. The parameter size indicates the size of the array to be processed. The
function converts the content in the array in reverse order and passes the array to the
calling function via call by reference.
*/

#include <stdio.h>
void reverseAr1D(int ar[], int size);
int main()
{
 int ar[10];
 int size, i;

 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i <= size-1; i++)
 scanf("%d", &ar[i]);
 reverseAr1D(ar, size);
 printf("reverseAr1D(): ");
 if (size > 0) {
 for (i=0; i<size; i++)
 printf("%d ", ar[i]);
 }
 return 0;
}
void reverseAr1D(int ar[], int size)
{
	int holder;
	for(int i = 0; i < size/2; ++i){
		holder = ar[i];
		ar[i] = ar[size - 1 - i];
		ar[size - 1 - i] = holder;
	}
} 