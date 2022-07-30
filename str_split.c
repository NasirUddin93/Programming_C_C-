#include<stdio.h>
void stirng_split(char sting[],int start, int num_char){
    int end = start + num_char;
    for(int i=start; i<end;i++){
        printf("%c",sting[i]);
    }
}
int main(){
    char sting[] = "University in Bangladesh";
    int start=0,num_char=0;
    printf("Enter starting Position:\n");
    scanf("%d",&start);
    printf("Enter number of character:\n");
    scanf("%d",&num_char);
    stirng_split(sting,start,num_char);
}
