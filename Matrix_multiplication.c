#include<stdio.h>
int main(){

    int r,c,k;
    printf("Enter number of row:\n");
    scanf("%d",&r);
    printf("Enter number of column:\n");
    scanf("%d",&c);
    int a[r][c],b[r][c],mul[r][c];

    printf("Enter a matrix elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter b matrix elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Result of multiplication:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }



}

