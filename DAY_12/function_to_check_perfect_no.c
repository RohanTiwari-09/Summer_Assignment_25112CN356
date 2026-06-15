#include<stdio.h>

int perfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    if(sum==a){
        return 1;
    }
    return 0;
}

int main(){
    int n;
    printf("enter the number to be check perfect number:");
    scanf("%d",&n);
    int result= perfect(n);
    if(result==1){
        printf("the entered number is perfect number");
    }
    else{
        printf("the entered number is not perfect number");
    }
    return 0;
}