#include<stdio.h>

int main(){
    int base,exp;
    float result=1;
    printf("enter the base(x):");
    scanf("%d",&base);
    printf("enter the exponent(n):");
    scanf("%d",&exp);
    int temp=exp;
    if(exp<0){
        exp=-exp;
    }
    for(int i=0;i<exp;i++){
        result=result*base;
    }
    if(temp<0){
        result=(float)1/result;
    }
    printf("%.2lf is the solution of %d^%d",result,base,exp);
    return 0;
}