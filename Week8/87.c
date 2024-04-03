#include <stdio.h>

int main() {
    char name[100];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Hello %s\n", name);
    }
    return 0;
}