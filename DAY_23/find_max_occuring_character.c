#include<stdio.h>

int main(){
    char str[100];
    int freq[256]={0};
    int i,maxIndex=0;
    printf("emter the string:");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]!= '\n'){
            freq[(unsigned char)str[i]]++;
        }
    }
    for(i=1;i<256;i++){
        if(i != ' ' && freq[i]>freq[maxIndex]){
            maxIndex=i;
        }
    }
    if(freq[maxIndex]>0){
        printf("maximum occuring charcter is '%c',apperaing %d time \n",maxIndex,freq[maxIndex]);
    }
    else{
        printf("the string is empty \n");
    }
    return 0;
}