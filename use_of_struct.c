#include<stdio.h>
#include<string.h>
struct Employee{
        int id;
        char name[50];
        float salary;

}e1;

int main(){
   e1.id = 1001;
//   e1.name = 'Taru Ahmed';
   strcpy(e1.name,'Taru Ahmed');
   printf("%s",e1.name);

}
