#include<stdio.h>

int ispalindrome(int a){
    int rem,rev=0,original=a;
    while(a>0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(original==rev){
        return 1;
    }
}

int main(){
    int n;
    printf("enter the number to check palindrome:");
    scanf("%d",&n);
    int result= ispalindrome(n);
    if(result==1){
        printf("the entered number is palindrome");
    }
    else{
        printf("the entered number is not palindrome");
    }
    return 0;
}