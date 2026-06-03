#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter the number to be check perfect number :");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        printf("the number is perfect number");
    }
    else{
        printf("the number is not perfect number");
    }
    return 0;
}