#include<stdio.h>

int main(){
    int n,largest,flag=0;
    printf("enter the number for largest prime factor :");
    scanf("%d",&n);
    while(n%2==0){
        largest=2;
        n=n/2;
    }
    for(int i=3;i*i<=n;i++){
        while(n%i==0){
            largest=i;
            n=n/i;
        }
    }
    if(n>2){
        largest=n;
    }
    printf("the largest factor of the number is %d",largest);
    return 0;
}