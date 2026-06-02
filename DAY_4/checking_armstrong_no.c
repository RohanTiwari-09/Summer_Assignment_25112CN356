#include<stdio.h>
#include<math.h>

int main(){
    int n,d,count=0,sum=0;
    printf("enter the number to check armstrong:");
    scanf("%d",&n);
    int temp=n;
    int i=n;
    while(i>0){
        count++;
        i=i/10;
    }
    while(n>0){
        d=n%10;
        sum=sum+round(pow(d,count));
        n=n/10;
    }
    if(temp==sum){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}