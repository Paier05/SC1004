#include <stdio.h>

void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);  
void computeSalary2(int noOfHours, int payRate, double *grossPay);

int main()
{
   int id = -1, noOfHours, payRate;
   double grossPay;
           
   readInput(&id, &noOfHours, &payRate);      
   while  (id != -1) {
      printf("computeSalary1(): ");
      grossPay = computeSalary1(noOfHours, payRate);
      printf("ID %d grossPay %.2f \n", id, grossPay);
      printf("computeSalary2(): ");
      computeSalary2(noOfHours, payRate, &grossPay);
      printf("ID %d grossPay %.2f \n", id, grossPay);
      readInput(&id, &noOfHours, &payRate);
   }
   return 0;
}

void readInput(int *id, int *noOfHours, int *payRate)
{
   printf("Enter ID (-1 to end):\n");
   scanf("%d", &(*id));
   printf("Enter number of hours:\n");
   scanf("%d", &(*noOfHours));
   printf("Enter hourly pay rate:\n");
   scanf("%d", &(*payRate));
}    

double computeSalary1(int noOfHours, int payRate)
{
   float total = 0;
   
   if(noOfHours < 160){
   		total += (float)noOfHours * (float)payRate;
   }else{
   		total += (160.0*(float)payRate + (float)(noOfHours - 160)*(float)payRate*1.5);
   }
   
   return total;
}

void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
	*grossPay = 0;
   if(noOfHours < 160){
   		(*grossPay) += (float)noOfHours * (float)payRate;
   }else{
   		(*grossPay) += (160.0*(float)payRate + (float)(noOfHours - 160)*(float)payRate*1.5);
   }
}