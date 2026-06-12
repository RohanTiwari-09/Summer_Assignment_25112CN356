#include<stdio.h>

int prime(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            return 1;
        }
    }
}

int main(){
    int n;
    printf("enter the number to check prime:");
    scanf("%d",&n);
    int result = prime(n);
    if(result==1){
        printf("the number is not prime");
    }
    else{
        printf("the number is prime");
    }
    return 0;
}