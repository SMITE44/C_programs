#include <stdio.h>

int main()
{
int age;
float height;
double salary;
char grade;
printf("Enter age: ");
scanf("%d", &age);
printf("Enter height: ");
scanf("%f", &height);
printf("Enter salary: ");
scanf("%lf", &salary);
printf("Enter grade: ");
scanf(" %c", &grade);
printf("\n--- Details ---\n");
printf("Age = %d\n", age);
printf("Height = %.2f\n", height);
printf("Salary = %.2lf\n", salary);
printf("Grade = %c\n", grade);
return 0;
}