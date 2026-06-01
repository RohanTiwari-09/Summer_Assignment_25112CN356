#include<stdio.h>

int main(){
    int n,flag=0;
    printf("enter the number to check prime:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("the %d is not prime",n);
    }
    else{
        printf("the %d is prime",n);
    }
    return 0;
}