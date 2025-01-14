/******************************************************************************
datastructure:
tree, graph,linked List, queue ;

Write a C program to manage student records using structures. The program should:
1)  Define a structure named Student with the following members:
     name (string, maximum 50 characters)
     rollNumber (integer)
     marks (float)

2)  Allow the user to:
     Enter details of 3 students.
     Display the details of all students after input.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int rollNo;
    float marks;
};
int main()
{
    struct Student s1,s2,s3;
    printf("Enter the first Student details\n1.name 2.rollNo 3.marks\n");
    scanf("%s%d%f",&s1.name,&s1.rollNo,&s1.marks);
    printf("Enter the second Student details\n1.name 2.rollNo 3.marks\n");
    scanf("%s%d%f",&s2.name,&s2.rollNo,&s2.marks);
    printf("Enter the third Student details\n1.name 2.rollNo 3.marks\n");
    scanf("%s%d%f",&s3.name,&s3.rollNo,&s3.marks);
    printf("\nStudents details\\nnroll number= %d | name= %s | marks= %.2f\n\nroll number= %d | name= %s | marks= %.2f\n\nroll number= %d | name= %s | marks= %.2f",s1.rollNo,s1.name,s1.marks,s2.rollNo,s2.name,s2.marks,s3.rollNo,s3.name,s3.marks);
    
    return 0;
}