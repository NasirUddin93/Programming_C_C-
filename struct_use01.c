#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int citNo;
    float salary;

}person;
int main(){
    person.citNo = 102;
    strcpy(person.name,"Nasir Uddin");
    printf("%d",person.citNo);
    printf("%s",person.name);
}
