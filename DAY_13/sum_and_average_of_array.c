#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float average=(float)sum/n;
    printf("sum is %d and average is %f",sum,average);
    return 0;
}