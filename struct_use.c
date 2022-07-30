#include<stdio.h>
#include<string.h>
struct person{
    int id;
    char name[20];
};


int main(){
    struct person p;
    p.id = 10;
    strcpy(p.name,"Nasir Uddin");
    printf("%d",p.id);
    printf("%s",p.name);


}
