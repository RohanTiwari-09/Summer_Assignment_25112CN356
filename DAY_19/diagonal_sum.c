#include<stdio.h>

int main(){
    int n,sum=0;
    int main_sum=0,sec_sum=0;
    printf("enter the rows and column in the square matrices:");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of the matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    for(int i=0;i<n;i++){
        main_sum+=a[i][i];
        sec_sum+=a[i][n-1-i];
    }
    printf("the sum of main diagonal is %d\n",main_sum);
    printf("the sum of secondary diagonal is %d",sec_sum);
    return 0;
}