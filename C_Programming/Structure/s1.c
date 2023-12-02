/*Write a Code in C to Store information about a student using structure.*/
#include<stdio.h>
struct student{
    char name[20];
    int id;
    float marks;
};

 int main() {
    struct student s;
    
    printf("Enter the name: ");
    scanf("%s",s.name);
    printf("Enter the id: ");
    scanf("%d",&s.id);
    printf("Enter the marks: ");
    scanf("%f",&s.marks);

    printf("\nThe student information\n");
    printf("---------------------------\n");

    printf("\nName: %s\n",s.name);
    printf("\nID: %d\n",s.id);
    printf("\nMarks: %.2f\n",s.marks);
    printf("\n");


    return 0;
 }
