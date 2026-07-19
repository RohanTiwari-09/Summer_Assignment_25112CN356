#include<stdio.h>

int main(){
    char str[100];
    int freq[256]={0};
    int i,found =0 ;

    printf("enter the string:");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]!='\n'){
            freq[(unsigned char)str[i]]++;
        }
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='\n' && freq[(unsigned char)str[i]]>1){
            printf("first repeating character is: %c\n",str[i]);
            found=1;
            break;
        }
    }
    if(!found){
        printf("no repeating character found \n");
    }
    return 0;
}