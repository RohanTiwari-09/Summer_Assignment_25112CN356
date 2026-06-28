#include<stdio.h>

int main(){
    int r1,c1,r2,c2;
    printf("enter the rows and column of the first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("enter the rows and column of the second matrix:");
    scanf("%d %d",&r2,&c2);
    if(c1 != r2){
        printf("error the column of first matrix is not equal to row of second matrix");
        return 0;
    }
    int a[r1][c1],b[r2][c2],c[r1][c2];
    printf("enter the element of the first matrix:");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of the second matrix:");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("the multiplicated matrix is \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}