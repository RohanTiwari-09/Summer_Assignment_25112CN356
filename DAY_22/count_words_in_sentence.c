#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,word=0,inword=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' || str[i]=='\t' || str[i]=='\n'){
            inword=0;
        }
        else if(inword==0){
            inword=1;
            word++;
        }
    }
    printf("the number of words in the string is %d",word);
    return 0;
}