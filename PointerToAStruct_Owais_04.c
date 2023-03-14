/*
Program : C function which receives a pointer to a student struct and sets the value of its fields.
*/

#include <stdio.h>

struct student
{
    char name[30];
    int rollno;
    int marks;
};

void display(struct student *ptr);

int main()
{
    struct student s1;
    display(&s1);
    printf("Name: %s , Roll no.: %d , Marks: %d", s1.name, s1.rollno, s1.marks);
    return 0;
}

void display(struct student *ptr)
{
    printf("Enter the name :");
    scanf("%s",ptr->name);

    printf("Enter the roll number:");
    scanf("%d",&ptr->rollno);

    printf("Enter the marks:");
    scanf("%d",&ptr->marks);
}