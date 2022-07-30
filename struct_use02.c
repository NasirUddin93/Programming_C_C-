#include<stdio.h>
struct person{
    int id;
    char name[20];
    int salary;
};
int main(){
    struct person p1;
    p1.id = 101;
    p1.name[0] = 'N';
}
