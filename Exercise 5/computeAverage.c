#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};

double average();
int main()
{
    struct student data[50];
    double counter = 0;
    enter_data(data, &counter);
    printf("%s", data[0].name);
   printf("average(): %.2f\n", average(data, counter));
   return 0;
}

void enter_data(struct student *data, double *counter){
    int i = 0;
    double sum = 0;
    (*counter) = 0;
    while(1)
    {
        printf("Enter student name:\n");
        scanf("%[^\n]s", data[i].name);
        if(strcmp(data[i].name, "END") == 0){
            break;
        }
        printf("Enter test score:\n");
        scanf("%lf", &data[i].testScore);
        printf("Enter exam score:\n");
        scanf("%lf", &data[i].examScore);
        data[i].total = (data[i].testScore + data[i].examScore)/2.0;
        (*counter)++;
        i++;
    }
}

double average(struct student *data, double counter)
{

}
