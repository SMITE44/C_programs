#include <stdio.h>
union Data
{
    int integer;
    float decimal;
    char character;
};
int main()
{
    union Data data;
    printf("Size of union = %lu bytes\n", sizeof(data));
    data.integer = 100;
    printf("\nAfter storing integer:\n");
    printf("Integer = %d\n", data.integer);
    data.decimal = 25.5;
    printf("\nAfter storing float:\n");
    printf("Float = %.2f\n", data.decimal);
    data.character = 'A';
    printf("\nAfter storing character:\n");
    printf("Character = %c\n", data.character);
    printf("\nMemory addresses of union members:\n");
    printf("Address of integer = %p\n", (void *)&data.integer);
    printf("Address of float = %p\n", (void *)&data.decimal);
    printf("Address of character = %p\n", (void *)&data.character);
    return 0;
}