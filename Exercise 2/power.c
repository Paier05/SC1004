#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
   int power;
   float number, result=-1;
    
   printf("Enter the number and power: \n");
   scanf("%f %d", &number, &power);
   printf("power1(): %.2f\n", power1(number, power));                           
   power2(number,power,&result);
   printf("power2(): %.2f\n", result);               
   return 0;
}
float power1(float num, int p)
{
	float ans = 1;
	if(p == 0){
		return ans;
	}else if(p > 0){
		for(int i = 0; i < p; ++i){
			ans *= num;
		}
		return ans;
	}else if(p < 0){
		for(int i = 0; i > p; --i){
			ans *= 1.0/num;
		}
		return ans;
	}
}
void power2(float num, int p, float *result)
{
   *result = 1;
	if(p == 0){
		(*result) = 1;
	}else if(p > 0){
		for(int i = 0; i < p; ++i){
			(*result) *= num;
		}
	}else if(p < 0){
		for(int i = 0; i > p; --i){
			(*result) *= 1.0/num;
		}
	}
}