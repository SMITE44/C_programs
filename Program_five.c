#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    char copy[100];
    char reverse[100];
    int length;
    int i;
    int result;
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    strcpy(copy, str1);
    printf("\n5.1 Copy Operation:\n");
    printf("Copied string = %s\n", copy);
    strcpy(reverse, str1);
    length = strlen(reverse);
    for (i = 0; i < length / 2; i++)
    {
        char temp;
        temp = reverse[i];
        reverse[i] = reverse[length - 1 - i];
        reverse[length - 1 - i] = temp;
    }
    printf("\n5.2 Reverse Operation:\n");
    printf("Reverse of first string = %s\n", reverse);
    printf("\n5.3 Length Operation:\n");
    printf("Length of first string = %lu\n", strlen(str1));
    printf("Length of second string = %lu\n", strlen(str2));
    result = strcmp(str1, str2);
    printf("\n5.4 Compare Operation:\n");
    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string is smaller than second string.\n");
    }
    else
    {
        printf("First string is greater than second string.\n");
    }
    strcat(str1, str2);
    printf("\n5.5 Concatenation Operation:\n");
    printf("Concatenated string = %s\n", str1);
    return 0;
}