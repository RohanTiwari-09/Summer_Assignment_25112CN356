#include<stdio.h>

int rev(int a){
    static int sum = 0;
    if(a==0){
        return sum;
    }
    else{
        sum=sum*10+(a%10);
        rev(a/10);
        return sum;
    }
}
int main(){
    int n;
    printf("enter the number for the reverse");
    scanf("%d",&n);
    int x=rev(n);
    printf("the reverse of the number is %d",x);
    return 0;
}