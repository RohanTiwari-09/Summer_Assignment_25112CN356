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
    int unionarr[n1+n2];
    int size=0;
    for(i=0;i<n1;i++){
        int duplicate=0;
        for(j=0;j<size;j++){
            if(arr1[i]==unionarr[j]){
                duplicate =1;
                break;
            }
        }
        if(duplicate==0){
            unionarr[size]=arr1[i];
            size++;
        }
    }
    for(i=0;i<n2;i++){
        int duplicate=0;
        for(j=0;j<size;j++){
            if(arr2[i]==unionarr[j]){
                duplicate =1;
                break;
            }
        }
        if(duplicate==0){
            unionarr[size]=arr2[i];
            size++;
        }
    }
    printf("the unioon array:");
    for(int k=0;k<size;k++){
        printf("%d ",unionarr[k]);
    }
    return 0;
}