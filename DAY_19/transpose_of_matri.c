#include<stdio.h>

int main(){
    int r,c;
    printf("enter the rows in the matrices:");
    scanf("%d",&r);
    printf("enter the columns in the matrices:");
    scanf("%d",&c);
    int a[r][c],trans[r][c];
    printf("enter the elements of the matrix:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans[j][i]=a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}