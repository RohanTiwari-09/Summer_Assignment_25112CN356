#include<stdio.h>

int main(){
    int st,en,flag=0;
    printf("enter the starting of the range:");
    scanf("%d",&st);
    printf("enter the ending of the range:");
    scanf("%d",&en);
    for(st;st<=en;st++){
        flag=0;
        for(int i=2;i<=st/2;i++){
            if(st%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("the %d is prime \n",st);
        }
    }
    return 0;
}