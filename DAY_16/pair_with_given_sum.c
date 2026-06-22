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
    int target,found=0;
    printf("enter the target sum:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("pair is %d and %d \n",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(found==0){
        printf("no pair is exist for the sum");
    }
    return 0;
}