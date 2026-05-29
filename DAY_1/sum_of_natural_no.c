#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter the number to calculate sum:");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum of natural number is %d",sum);
    return 0;
}