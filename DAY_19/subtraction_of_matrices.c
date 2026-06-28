#include<stdio.h>

int main(){
    int r,c;
    printf("enter the rows in the matrices:");
    scanf("%d",&r);
    printf("enter the columns in the matrices:");
    scanf("%d",&c);
    int a[r][c],b[r][c],diff[r][c];
    printf("enter the elements of the first matrix:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    printf("enter the elements of the second matrix:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }    
    }
    printf("the resultant matrix is ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            diff[i][j]=a[i][j]-b[i][j];
            printf("%d ",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}