/*Write a C program for counting words in a given string.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            count++;
    }
    printf("The number of words are: %d",count+1);
    return 0;
    
}