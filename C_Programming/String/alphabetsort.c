// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     int i,j,n;
//     printf("Enter the string : ");
//     scanf("%d",&n);

//     for(i = 0; i < n-1; i++){
//         for(j = i+1; j < n; j++){
//             if(str[i] > str[j]){
//                 //swap
//                 char temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }

//     printf("Sorted string :  %s", str[i]);

//     return 0;

// }
#include <stdio.h>
#include <string.h>
char ch[50];
void ascendingOrder() {
 	int i, j;
 	char tem;
 	int SLength = strlen(ch);
 	for (i = 0; i < SLength - 1; i++) {
   		for (j = i + 1; j < SLength; j++) {
     		if (ch[i] > ch[j]) {
       			tem = ch[i];
       			ch[i] = ch[j];
       			ch[j] = tem;
     		}
   		}
 	}
}
int main() {
 	printf("\n Enter a string that you want to be arranged in alphabetical order : ");
 	fgets(ch, 50, stdin);
 	ascendingOrder();
 	puts(ch);
 	return 0;
}