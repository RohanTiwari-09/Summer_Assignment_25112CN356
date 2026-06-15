#include<stdio.h>
#include<math.h>

int armstrong(int a){
    int d,count=0,sum=0;
    int temp=a;
    int i=a;
    while(i>0){
        count++;
        i=i/10;
    }
    while(a>0){
        d=a%10;
        sum=sum+round(pow(d,count));
        a=a/10;
    }
    if(temp==sum){
        return 1;
    }
}

int main(){
    int n;
    printf("enter the number to check armstrong number:");
    scanf("%d",&n);
    int result= armstrong(n);
    if(result==1){
        printf("the entered number is armstrong number");
    }
    else{
        printf("the entered number is not armstrong number");
    }
    return 0;
}