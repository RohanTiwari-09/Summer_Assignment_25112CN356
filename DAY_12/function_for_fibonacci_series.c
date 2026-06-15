#include<stdio.h>

void fibonacci(int terms){
    int t1=0,t2=1,nextterm;
    for(int i=1;i<=terms;++i){
        printf("%d ",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }

}

int main(){
    int n;
    printf("enter the number of terms in series:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}