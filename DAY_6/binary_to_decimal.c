#include<stdio.h>

int main(){
    int n,rem,base=1,decimal=0;
    printf("enter the binary number to convert in decimal:");
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        rem=temp%10;
        decimal=decimal + rem*base;
        temp=temp/10;
        base=base*2;
    }
    printf("the decimal number is %d",decimal);
    return 0;
}