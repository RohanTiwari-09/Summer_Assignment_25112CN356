#include<stdio.h>

int main(){
    int n,originalnum,rem,sum=0;
    printf("enter number to check strong number:");
    scanf("%d",&n);
    originalnum=n;
    while(n>0){
        int fact =1;
        rem=n%10;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==originalnum){
        printf("the number is strong number");
    }
    else{
        printf("the number is not strong number");
    }
    return 0;
}