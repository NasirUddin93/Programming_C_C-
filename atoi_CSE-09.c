#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int age;
    scanf("%d",&age);


//    if(age >= 18){
//        printf("Access is granted");
//    }else{
//        printf("Access is denied");
//    }
    (age >= 18)?printf("Access is granted"):printf("Access is denied");

   return(0);
}
