#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int cityNo;
    float salary;
};

int main(){
    struct Person p1;
    p1.cityNo = 101;
    strcpy(p1.name,"Nasir Dddin");
    p1.salary = 5004893.34873;
    printf("%d",p1.cityNo);
    printf("%f",p1.salary);
    printf("%s",p1.name);

}
