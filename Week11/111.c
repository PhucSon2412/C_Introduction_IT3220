#include <stdio.h>
int main(){
    int a, b, c;
    int *ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    ptr = &a;
    printf("Value of a: %d\n", *ptr);
    ptr = &b;
    printf("Value of b: %d\n", *ptr);
    ptr = &c;
    printf("Value of c: %d\n", *ptr);
    return 0;
}