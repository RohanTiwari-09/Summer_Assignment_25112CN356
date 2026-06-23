#include<stdio.h>

int main(){
    int n1,n2,i,j;
    printf("enter the size of first array:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter %d elements:",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of second array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter %d elements:",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int count=0;
    printf("the common elements of arrays:");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
                count++;
            }
        }
    }
    if(count==0){
        printf("nothing is coomon");
    }
    return 0;
}