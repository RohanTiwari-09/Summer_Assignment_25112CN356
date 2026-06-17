#include<stdio.h>

int main(){
    int n,key,found=-1;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number to search:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=i;
            break;
        }
    }
    if(found!=-1){
        printf("the index of the number is %d",found);
    }
    else{
        printf("the number not found in the array");
    }
    return 0;
}