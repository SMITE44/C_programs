#include <stdio.h>
int main()
{
    int num;
    int *ptr;
    printf("Enter an integer: ");
    scanf("%d", &num);
    ptr = &num;
    printf("\nUsing Variable:\n");
    printf("Value of variable = %d\n", num);
    printf("Address of variable = %p\n", (void *)&num);
    printf("\nUsing Pointer:\n");
    printf("Value using pointer = %d\n", *ptr);
    printf("Address using pointer = %p\n", (void *)ptr);
    return 0;
}