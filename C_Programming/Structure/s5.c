/*Write a Code in C to Store information of n students using structures.*/
#include<stdio.h>
struct student{
    char name[20];
    int id;
    float marks;
}s1[20];

 int main() {
    // struct student s1;
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter the name of student %d: ",i+1);
        scanf("%s",s1[i].name);
        printf("\nEnter the id of student %d: ",i+1);
        scanf("%d",&s1[i].id);
        printf("\nEnter the marks of student %d: ",i+1);
        scanf("%f",&s1[i].marks);
    printf("\n-----------------------------------------------\n");
    }
    // printf("-----------------------------------------------------\n");
    printf("\nStudent Information\n");
    printf("\n-----------------------------------------------------\n");
    for(i=0;i<n;i++){
        printf("\nThe name of student : ");
        puts(s1[i].name);
        // printf("The name of student  : %s \n",s1[i].name[i]);
        printf("\nThe Id of student : %d \n", s1[i].id);
        printf("\nThe marks of student  : %f \n",s1[i].marks);
        printf("\n-----------------------------------------------\n");
    }
    printf("\n");

    return 0;
 }
