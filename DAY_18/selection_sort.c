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
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}