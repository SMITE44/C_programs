#include <stdio.h>

int main()
{
    int intArray[3];
    float floatArray[3];
    char charArray[3];
    int i;
    
    printf("Enter 3 integer elements:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &intArray[i]);
    }
    printf("\nEnter 3 float elements:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &floatArray[i]);
    }
    printf("\nEnter 3 character elements:\n");
    for (i = 0; i < 3; i++)
    {
        scanf(" %c", &charArray[i]); 
    }
    printf("\nInteger Array:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Value = %d, Address = %p\n", intArray[i], (void *)&intArray[i]);
    }

    printf("\nFloat Array:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Value = %.2f, Address = %p\n", floatArray[i], (void *)&floatArray[i]);
    }
    printf("\nCharacter Array:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Value = %c, Address = %p\n", charArray[i], (void *)&charArray[i]);
    }
    
    return 0;
}