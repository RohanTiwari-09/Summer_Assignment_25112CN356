#include<stdio.h>

int sum(int a,int b){
    return a+b;
}

int main(){
    int n1,n2;
    printf("enter the first num :");
    scanf("%d",&n1);
    printf("enter the second num :");
    scanf("%d",&n2);
    int result = sum(n1,n2);
    printf("the sum is %d",result);
    return 0;
}