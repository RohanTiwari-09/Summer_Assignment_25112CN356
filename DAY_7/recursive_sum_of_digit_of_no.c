#include<stdio.h>

int sum(int a){
    if(a==0){
        return 0;
    }
    else{
        return a%10+sum(a/10);
    }
}
int main(){
    int n;
    printf("enter the number for sum of the digit:");
    scanf("%d",&n);
    int x=sum(n);

    printf("the sum of digit is %d",x);
    return 0;
}