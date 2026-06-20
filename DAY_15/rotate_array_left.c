#include<stdio.h>

int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    printf("the array elements left rotated are:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}