#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
    char designation[40];
    int salary;
};
int main(){
  struct Employee e1;
  e1.id = 101;
  strcpy(e1.name,"Nasir Uddin");
  strcpy(e1.designation,"Manager");
  e1.salary = 500000;
  printf("%d",e1.id);
  printf("%s",e1.name);
  printf("%s",e1.designation);
  printf("%d",e1.salary);
}

