#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("Enter first matrix elements\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }
    printf("Enter second matrix elements\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
            printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Result of a + b \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
            printf("\n");
    }



}
