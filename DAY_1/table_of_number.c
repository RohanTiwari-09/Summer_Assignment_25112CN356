#include<stdio.h>

int main(){
    int n;
    printf("enter the number for table want:");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=10;i++){
        printf("%d * %d =%d \n",n,i,n*i);
    }
    return 0;
}