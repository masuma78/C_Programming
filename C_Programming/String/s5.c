/*Write a program in C to find the number of times the word 'the' appears in the string.*/
#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int i, len =0, freq = 0;

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++){

       if((((str[i] == 't') || (str[i] == 'T')) && ((str[i+1] == 'h') || (str[i+1] == 'H')) && ((str[i+2] == 'e') || (str[i+2] == 'E')) && ((str[i+3] == ' ') || (str[i+3] == '\0'))) == 1){
        freq++;
        }
       }
       printf("The frequency of 'the' is %d", freq);
       return 0;
}