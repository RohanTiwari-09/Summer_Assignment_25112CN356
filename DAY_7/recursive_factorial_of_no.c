#include<stdio.h>

int fact(int a){
    if(a==1 || a==0){
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
    int x= fact(n);
    printf("the factorial is %d",x);
    return 0;
}