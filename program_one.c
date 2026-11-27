#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks1;
    float marks2;
    float marks3;
    float total;
    float average;
};
int main()
{
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter marks in Subject 1: ");
    scanf("%f", &s.marks1);
    printf("Enter marks in Subject 2: ");
    scanf("%f", &s.marks2);
    printf("Enter marks in Subject 3: ");
    scanf("%f", &s.marks3);
    s.total = s.marks1 + s.marks2 + s.marks3;
    s.average = s.total / 3;
    printf("\n----- Student Details -----\n");
    printf("Roll Number = %d\n", s.rollNo);
    printf("Name = %s\n", s.name);
    printf("Subject 1 Marks = %.2f\n", s.marks1);
    printf("Subject 2 Marks = %.2f\n", s.marks2);
    printf("Subject 3 Marks = %.2f\n", s.marks3);
    printf("Total Marks = %.2f\n", s.total);
    printf("Average Marks = %.2f\n", s.average);
    return 0;
}