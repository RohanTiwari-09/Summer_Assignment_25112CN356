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
    printf("the array elements are:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}