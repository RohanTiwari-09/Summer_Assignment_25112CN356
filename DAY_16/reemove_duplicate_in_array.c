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
    int unique=0;
    for(int i=0;i<n;i++){
        int duplicate=0;
        for(int j=0;j<unique;j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==0){
            arr[unique]=arr[i];
            unique++;
        }
    }
    printf("array after removing the duplicate element is:");
    for(int i=0;i<unique;i++){
        printf("%d",arr[i]);
    }
    return 0;
}