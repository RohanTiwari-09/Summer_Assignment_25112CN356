#include<stdio.h>

int main(){
    char str[100],rev[100];
    int i,len=0;

    printf("enter a string:");
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;
    }
    for(i=0;i<len;i++){
        rev[i]=str[len-1-i];
    }
    rev[len]='\0';
    printf("reversed string: %s",rev);
    return 0;

}