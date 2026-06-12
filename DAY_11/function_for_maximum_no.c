#include<stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n1,n2;
    printf("enter the first num :");
    scanf("%d",&n1);
    printf("enter the second num :");
    scanf("%d",&n2);
    int maxnum = max(n1,n2);
    printf("the maximum number of two number is %d",maxnum);
    return 0;
}