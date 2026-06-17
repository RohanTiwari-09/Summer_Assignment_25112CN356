#include<stdio.h>

int main(){
    int n,key,count=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number to know frequency:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    if(count!=0){
        printf("the frequency of the number is %d",count);
    }
    else{
        printf("the number not found in the array");
    }
    return 0;
}