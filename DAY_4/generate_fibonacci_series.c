#include<stdio.h>

int main(){
    int n,thirdnum,firstnum=0,secondnum=1;
    printf("enter the number of term of fibonacci series:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",firstnum);
        thirdnum=firstnum+secondnum;
        firstnum=secondnum;
        secondnum=thirdnum;
    }
    printf("\n here it was the requied fibonacci series");
    return 0;
}