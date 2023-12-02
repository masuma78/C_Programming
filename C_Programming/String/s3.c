/*Write a C program to check whether a substring is present in a string.*/
#include<stdio.h>
#include<string.h>
char str[100], search[100];
int c1 = 0, c2 = 0, i, j, k;

int main(){
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the string to be searched : ");
    fgets(search, sizeof(search), stdin);
    for(i = 0; str[i] != '\0'; i++){
        c1++;
    }
    for(i = 0; search[i] != '\0'; i++){
        c2++;
    }

    for(i =0; i <= c1 - c2; i++){
        for(j = i; j <= i+c2; j++){
            k = 1;
            if(str[j] != search[j-i]){   
            k = 0;
            break;
            }
            
        }
        if(k == 1){
            break;
        }

    }

    if(k == 1){
        printf("The substring exists in the string. \n\n");
    }
    else{
        printf("The substring is not exists in the string. \n\n");
    }

    return 0;
}
