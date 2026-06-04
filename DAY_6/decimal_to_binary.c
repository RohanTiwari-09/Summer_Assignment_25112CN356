#include<stdio.h>

int main(){
    int n,i=0;
    int binary[32];
    printf("enter the decimal number to convert in binary:");
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        binary[i]=temp%2;
        temp=temp/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}