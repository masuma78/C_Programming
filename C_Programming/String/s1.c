/*Write a program in C to count the total number of alphabets, digits, special characters,
vowels, white space, and consonants in a string.*/

#include<stdio.h>
#include<string.h>
#define MAX 150

int main(){
    char str[MAX];
    int i;
    int alphabets=0,digits=0,special=0,vowels=0,white=0,consonants=0;
    printf("Enter any string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  ){
                vowels++;
               }
            else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
                consonants++;
            }
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }
        else if(str[i]==' '){
            white++;
        }
        else {
            special++;
        }
    }

    printf("Total number of alphabets: %d\n",alphabets);
    printf("Total number of digits: %d\n",digits);
    printf("Total number of white space: %d\n",special);
    printf("Total number of vowels: %d\n",vowels);
    printf("Total number of consonants: %d\n",consonants);
    printf("Total number of special characters: %d\n",special);
    return 0;
}