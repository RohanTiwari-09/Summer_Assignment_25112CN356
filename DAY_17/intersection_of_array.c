#include<stdio.h>

int main(){
    int n1,n2,i,j,k;
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
    int interarr[n1<n2?n1:n2];
    int size=0;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){ 
                int already=0;
                for(k=0;k<size;k++){
                    if(arr1[i]==arr2[k]){
                        already=1;
                        break;
                    }
                }
                if(already==0){
                    interarr[size]=arr1[i];
                    size++;
                }
                break;
            }
        }
    }
    printf("the intersection of the arrays :");
    if(size==0){
        printf("the array doesnt have intersection");
    }
    else{
        for(i=0;i<size;i++){
            printf("%d ",interarr[i]);
        }
    }
    return 0;
}