#include<stdio.h>
#include<math.h>

int main(){
    int n,ed,d,count=0,sum=0;
    printf("input thhe information for armstrong number in a range\n");
    printf("enter the staring of range:");
    scanf("%d",&n);
    printf("enter the ending of range:");
    scanf("%d",&ed);
    for(int j=n;j<=ed;j++){
        int temp=j;
        int i=j;
        int count=0;
        while(i>0){
        count++;
        i=i/10;
        }
        int sum=0;
        while(temp>0){
            d=temp%10;
            sum=sum+round(pow(d,count));
            temp=temp/10;
        }
        if(j==sum){
            printf("%d ",sum);
        }
    }
    return 0;
}