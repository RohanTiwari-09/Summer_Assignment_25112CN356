#include<stdio.h>

int fib(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return fib(a-1)+fib(a-2);
    }
}
int main(){
    int n;
    printf("enter the number of  term in fibonacci serise:");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        printf("%d ",fib(i));
    }

    return 0;
}