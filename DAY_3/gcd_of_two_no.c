#include<stdio.h>

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int a,b;
    printf("enter the 1st number:");
    scanf("%d",&a);
    printf("enter the 2nd number:");
    scanf("%d",&b);
    int x= gcd(a,b);
    printf("the greatest common divisor is %d ",x);
    return 0;
}