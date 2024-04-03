#include <stdio.h>
#define MAX_SIZE 100000

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i = 0, j = 0, a = 1;
        int A[MAX_SIZE];
        scanf("%d", &n);
        for (i = 0; i < n; i++) scanf("%d", &A[i]);
        for (i = 0; i < n; i++) {
            if (A[i] < 1 || A[i] > n) {
                a = 0;
                break;
            }
            for (j = i + 1; j < n; j++) {
                if (A[i] == A[j]) {
                    a = 0;
                    break;
                }
            }
        }
        if (!a) printf("0\n");
        else printf("1\n");
    }
    return 0;
}