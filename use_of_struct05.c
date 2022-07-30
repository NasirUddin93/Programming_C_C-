#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
    char designation[50];
    int salary;
};
int main(){
struct Employee e1;
 e1.id = 101;
 printf("%d\n",e1.id);
 strcpy(e1.name,"Taru");
 printf("%s\n",e1.name);
 strcpy(e1.designation,"Manager");
 printf("%s\n",e1.designation);
 e1.salary = 50000;
 printf("%d\n",e1.salary);

 struct Employee e2;
 e2.id = 102;
 printf("%d\n",e2.id);
 strcpy(e2.name,"Abir");
 printf("%s\n",e2.name);
 strcpy(e2.designation,"CEO");
 printf("%s\n",e2.designation);
 e2.salary = 500000;
 printf("%d\n",e2.salary);

 printf("%d\n",e1.id);
 printf("%d\n",e1.salary);
}
