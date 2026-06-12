#include<stdio.h>

int fact(int a){
    if(a==0||a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int main(){
    int n;
    printf("enter the number to find factorial:");
    scanf("%d",&n);
    int result = fact(n);
    printf("the factorial of given number is %d",result);
    return 0;
}