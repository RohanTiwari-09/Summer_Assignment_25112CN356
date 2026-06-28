
int main(){
    int n;
    printf("enter the rows and column in the square matrices:");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of the matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    int symmetric=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != a[j][i]){
                symmetric=0;
                break;
            }
        }
        if(symmetric==0){
            break;
        }
    }
    if(symmetric==1){
        printf("the matrix is symmetric matrix");
    }
    else{
        printf("the matrix is not a symmentric matrix");
    }
    return 0;
}