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
    int size= n1+n2;
    int merge[size];
    for(i=0;i<n1;i++){
        merge[i]=arr1[i];
    }
    for(int j=0;j<n2;j++){
        merge[i]=arr2[j];
        i++;
    }
    printf("the new merged array:");
    for(int k=0;k<size;k++){
        printf("%d ",merge[k]);
    }
    return 0;
}