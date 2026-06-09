#include<stdio.h>

int main(){
    int n;
    printf("enter the number of rows in reverse star pattern:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}