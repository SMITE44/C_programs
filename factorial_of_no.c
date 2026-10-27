#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    int i;
    for (i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (num > 20) {
        printf("Number too large. Maximum supported is 20.\n");
        return 1;
    }

    printf("Factorial of %d = %llu\n", num, factorial(num));

    return 0;
}