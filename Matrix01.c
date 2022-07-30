#include<stdio.h>
int main(){
    int r,c,i,j,a[100],b[100],sum[100];
    printf("Enter the number of Row: ");
    scanf("%d",&r);
    printf("Enter the number of Column: ");
    scanf("%d",&c);
    printf("Enter array elements\n: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

}
