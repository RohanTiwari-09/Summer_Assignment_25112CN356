#include<stdio.h>

int main(){
    int n,count=0;
    printf("enter number to count digits:");
    scanf("%d",&n);

    while(n>0){
        count++;
        n=n/10;
    }
    printf("the digits in the number is %d",count);
    return 0;
}