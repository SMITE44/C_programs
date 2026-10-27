#include <stdio.h>

void area1() {
    float b, h;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    printf("Area (Type 1) = %.2f\n", 0.5 * b * h);
}

void area2(float b, float h) {
    printf("Area (Type 2) = %.2f\n", 0.5 * b * h);
}

float area3() {
    float b, h;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    return 0.5 * b * h;
}

float area4(float b, float h) {
    return 0.5 * b * h;
}

int main() {
    float b, h;

    printf("--- Type 1: No Arguments, No Return Value ---\n");
    area1();

    printf("\nEnter base and height for Types 2 and 4: ");
    scanf("%f %f", &b, &h);

    printf("\n--- Type 2: Arguments, No Return Value ---\n");
    area2(b, h);

    printf("\n--- Type 3: No Arguments, Returns a Value ---\n");
    printf("Area (Type 3) = %.2f\n", area3());

    printf("\n--- Type 4: Arguments, Returns a Value ---\n");
    printf("Area (Type 4) = %.2f\n", area4(b, h));

    return 0;
}