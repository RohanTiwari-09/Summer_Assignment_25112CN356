#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0],secondmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
    }
    printf("the second max value is %d",secondmax);
    return 0;
}