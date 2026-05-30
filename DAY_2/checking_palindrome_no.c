#include<stdio.h>

int main(){
    int n,rem,rev=0;
    printf("enter the number to check palindrome:");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
    return 0;
}