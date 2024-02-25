#include <stdio.h>
void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
   int ar[40];
   int i, size;
   int min, max;
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)
      scanf("%d", &ar[i]);
   findMinMax1D(ar, size, &min, &max);
   printf("min = %d; max = %d\n", min, max);    
   return 0;               
}
void findMinMax1D(int ar[], int size, int *min, int *max)
{
	//method 1
	/**min = *max = ar[0];
	//finding minimum
	for(int i = 1; i < size; ++i){
		if(ar[i] < *min){
			(*min) = ar[i];
		}
	}
	
	//finding maximum
	for(int i = 1; i < size; ++i){
		if(ar[i] > *max){
			(*max) = ar[i];
		}
	}*/
	
	//method 2
	int holder;
	
	for(int i = size - 1; i > 0; --i){
		for(int j = 0; j < i; j++){
			if(ar[j] > ar[j +  1]){
				holder = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = holder;
			}
		}
	}
	
	*min = ar[0];
	*max = ar[size - 1];
	
}