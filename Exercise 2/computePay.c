#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);

int main()
{
   int noOfHours, payRate;
   double grossPay;
            
   printf("Enter number of hours: \n");
   scanf("%d", &noOfHours);
   printf("Enter hourly pay rate: \n");
   scanf("%d", &payRate);
   printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
   computePay2(noOfHours, payRate, &grossPay);
   printf("computePay2(): %.2f\n", grossPay);
   return 0;
}       

double computePay1(int noOfHours, int payRate)
{
   float total = 0;
   
   if(noOfHours < 160){
   		total += (float)noOfHours * (float)payRate;
   }else{
   		total += (160.0*(float)payRate + (float)(noOfHours - 160)*(float)payRate*1.5);
   }
   
   return total;
}

void computePay2(int noOfHours, int payRate, double *grossPay)
{
   *grossPay = 0;
   if(noOfHours < 160){
   		(*grossPay) += (float)noOfHours * (float)payRate;
   }else{
   		(*grossPay) += (160.0*(float)payRate + (float)(noOfHours - 160)*(float)payRate*1.5);
   }
}