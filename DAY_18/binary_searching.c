#include<stdio.h>

int main(){
    int n,target,found=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the sorted array in ascending order");
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to find the index:");
    scanf("%d",&target);
    int low =0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            printf("the index of the target is %d",mid);
            found =1;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        printf("the element is not in the array");
    }
    return 0;
}