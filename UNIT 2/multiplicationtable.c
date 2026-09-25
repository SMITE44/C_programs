#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table Using While Loop:\n");
    i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    printf("\nMultiplication Table Using Do-While Loop:\n");
    i = 1;
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

    printf("\nMultiplication Table Using For Loop:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}