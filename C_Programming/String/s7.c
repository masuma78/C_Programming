/*Write a program in C to find the frequency of characters.*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[100], ch;
    int count = 0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character: ");
    scanf("%c", &ch);

    for(int i = 0; str[i] != '\0'; i++){
        if(ch == str[i]){
            ++count;
            }
        }
     printf("Number of frequency of %c is %d", ch, count);

    return 0;
}