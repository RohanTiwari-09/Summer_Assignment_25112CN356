#include<stdio.h>

int main(){
    int r,c;
    printf("enter the row of the matrix:");
    scanf("%d",&r);
    printf("enter the column of the matrix:");
    scanf("%d",&c);
    int a[r][c];
    printf("enter the elements of the matrix:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n row-wise sum \n");
    for(int i =0;i<r;i++){
        int rsum=0;
        for(int j=0;j<c;j++){
            rsum += a[i][j];
        }
        printf("the row sum of the row %d is %d \n",i+1,rsum);
    }
    return 0;
}