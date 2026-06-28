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
    printf("\n column-wise sum \n");
    for(int j =0;j<c;j++){
        int csum=0;
        for(int i=0;i<r;i++){
            csum += a[i][j];
        }
        printf("the column sum of the column %d is %d \n",j+1,csum);
    }
    return 0;
}