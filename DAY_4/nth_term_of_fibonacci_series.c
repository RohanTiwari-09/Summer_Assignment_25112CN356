#include<stdio.h>

int main(){
    int n,thirdnum,firstnum=0,secondnum=1;
    printf("enter the term number to find:");
    scanf("%d",&n);
    int temp=n;
    for(int i=1;i<=n;i++){
        if(temp==i){
            printf("\nthe nth term of series is %d",firstnum);
            break;
        }
        thirdnum=firstnum+secondnum;
        firstnum=secondnum;
        secondnum=thirdnum;
    }
    return 0;
}