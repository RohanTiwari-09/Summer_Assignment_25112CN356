#include<stdio.h>

int main(){
    int n,rem,p=1;
    printf("emter the number for product of digit:");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        p=p*rem;
        n=n/10;
    }
    printf("the product of digit is %d",p);
    return 0;
}