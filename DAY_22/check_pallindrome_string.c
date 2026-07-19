#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,len,ispall=1;
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    len = strlen(str);
    if(len>0 && str[len-1] == '\n'){
        str[len-1]='\0';
        len--;
    }
    for(i=0;i<len/2;i++){
        if(str[i]!= str[len-1-i]){
            ispall=0;
            break;
        }
    }
    if(ispall && len >0){
        printf("the string is pallindrome");
    }
    else{
        printf("the sring is not pallindrome");
    }
    return 0;
}