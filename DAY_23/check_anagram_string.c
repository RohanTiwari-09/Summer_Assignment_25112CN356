#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    int freq[256]={0};
    int i,len1,len2,isAnagram=1;

    printf("enter first string:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter second string:");
    fgets(str2,sizeof(str2),stdin);

    len1= strlen(str1);
    if(len1>0 && str1[len1 -1]== '\n')str1[len1 -1]='\0';

    len2= strlen(str2);
    if(len2>0 && str2[len2 -1]== '\n')str2[len2 -1l]='\0';

    for(i=0; str1[i]!='\0';i++){
        freq[(unsigned char)str1[i]]++;
    }
    for(i=0; str2[i]!='\0';i++){
        freq[(unsigned char)str2[i]]--;
    }
    for(i=0;i<256;i++){
        if(freq[i] != 0){
            isAnagram=0;
            break;
        }
    }
    if(isAnagram){
        printf("the string are anagrams. \n");
    }
    else{
        printf("the string is not anagrams. \n");
    }
    return 0;
}