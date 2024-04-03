#include <stdio.h>

int main() {
    float a, b, c;
    float *ptr;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    ptr = &a;
    *ptr += 100;
    ptr = &b;
    *ptr += 100;
    ptr = &c;
    *ptr += 100;
    printf("The new values of a, b and c are: %.2f, %.2f and %.2f\n", a, b, c);
    return 0;
}