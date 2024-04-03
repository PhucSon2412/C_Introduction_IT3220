#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x1, y1, x2, y2, x, y, r;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d %d %d", &x, &y, &r);
        int a = (x1 + x2) / 2;
        int b = (y1 + y2) / 2;
        int dx = abs(x - a);
        int dy = abs(y - b);
        int w = abs(x1 - x2) / 2;
        int h = abs(y1 - y2) / 2;
        if (dx > w + r || dy > h + r) {
            printf("0\n");
            continue;
        }
        if (w >= dx || h >= dy) {
            printf("1\n");
            continue;
        }
        dx = abs(dx - w);
        dy = abs(dy - h);
        if (dx * dx + dy * dy <= r * r) {
            printf("1\n");
            continue;
        }
        printf("0\n");
    }
    return 0;
}