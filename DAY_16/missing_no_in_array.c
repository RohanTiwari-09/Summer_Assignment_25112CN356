#include<stdio.h>

int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter %d elements:",n-1);
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int actualsum=0;
    int expectedsum=(n*(n+1))/2;;
    for(int i=0;i<n-1;i++){
        actualsum += arr[i];
    }
    int missing =expectedsum-actualsum;
    printf("the missing number is %d",missing);
    return 0;
}