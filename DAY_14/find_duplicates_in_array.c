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
    printf("the duplicate elements in array:");
    int duplicate=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){

                int already=0;
                for(int k=0;k<i;k++){
                    if(arr[k]==arr[i]){
                        already=1;
                        break;
                    }
                }
                if(already==0){
                    printf("%d ",arr[i]);
                    duplicate=1;
                    break;
                }
            }
        }
        
    }
    if(duplicate==0){
        printf("None");
    }
    return 0;
}