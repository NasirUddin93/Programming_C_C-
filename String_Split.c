#include<stdio.h>
int main(){
    char string[] = "University in Bangladesh";
    int start = 0,num_car = 0;
    printf("Enter starting Position:\n");
    scanf("%d",&start);
    printf("Number of character:\n");
    scanf("%d",&num_car);
    int end = start + num_car;
    for(int i=start;i<end;i++){
        printf("%c",string[i]);
    }
}
