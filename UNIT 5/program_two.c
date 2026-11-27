#include <stdio.h>
int main()
{
    int num;
    int *ptr;
    int **dptr;
    printf("Enter an integer: ");
    scanf("%d", &num);
    ptr = &num;
    dptr = &ptr;
    printf("\nValue of variable = %d\n", num);
    printf("Value using pointer = %d\n", *ptr);
    printf("Value using double pointer = %d\n", **dptr);
    printf("\nAddress of variable = %p\n", (void *)&num);
    printf("Address stored in pointer = %p\n", (void *)ptr);
    printf("Address stored in double pointer = %p\n", (void *)dptr);
    return 0;
}