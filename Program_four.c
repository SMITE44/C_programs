#include <stdio.h>
int main()
{
    char str[100];
    int length = 0;
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    while (str[length] != '\0')
    {
        length++;
    }
    printf("\nLength of the string = %d\n", length);
    printf("Reverse of the string = ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}