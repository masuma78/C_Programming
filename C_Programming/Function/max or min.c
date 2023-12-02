/*

#include<stdio.h>

int main(){

int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);

if(a>b){
    printf("The maximum number is  : %d\n", a);
}
else{
    printf("The maximum number is  : %d\n", b);
}
return 0;

} */

#include<stdio.h>
int max(int a, int b);
int min(int a, int b);

int main(){
    int a, b;
    int c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
 
 c = max(a, b);
 d = min(a, b);
 printf("Maximum is %d\n", c);
 printf("Minimum is %d\n", d);
 return 0;
}

int max(int a, int b){

    return (a>b)?a:b;
}
int min(int a, int b){

    return (a<b)?a:b;
}
