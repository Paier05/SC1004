#include <stdio.h>
#include <string.h>
typedef struct {
 char name[20];
 int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
 Person man[3], middle;

 readData(man);
 middle = findMiddleAge(man);
 printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
 return 0;
}
void readData(Person *p)
{
    for(int i = 0; i < 3; i++){
        printf("Enter person %d:\n", i + 1);
        scanf("%s", p[i].name);
        scanf("%d", &p[i].age);
    }
}
Person findMiddleAge(Person *p)
{
    Person ans;
    int holder[3] = {0, 1, 2}, handle;
    for(int i = 2; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(p[i].age > p[i + 1].age){
                handle = holder[i];
                holder[i] = holder[i+1];
                holder[i+1] = handle;
            }
        }
    }

    strcpy(ans.name, p[holder[1]].name);
    ans.age = p[holder[1]].age;

    return ans;
}
