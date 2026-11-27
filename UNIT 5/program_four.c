#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
int main()
{
    struct Student s;
    FILE *file;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("Unable to create the file.\n");
        return 1;
    }
    fprintf(file, "Roll Number: %d\n", s.rollNo);
    fprintf(file, "Name: %s\n", s.name);
    fprintf(file, "Marks: %.2f\n", s.marks);
    fclose(file);
    file = fopen("student.txt", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }
    printf("\n----- Student Details Stored in File -----\n");
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}