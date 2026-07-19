#include<stdio.h>

int main(){
    char str[100];
    int vowels=0,consonant=0,i=0;

    printf("enter a string:");
    scanf("%s",str);
    while(str[i]!='\0'){
        char ch=str[i];

        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                vowels++;
            }
            else{
                consonant++;
            }
        }
        i++;
    }
    printf("the number vowels are %d \n the number consonant are %d",vowels,consonant);
    return 0;
}