#include <stdio.h>
int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n == -1) {
            break;
        }
        int found = 0;
        int x = n / 8;
        for (; x >= 0; x--) {
            int remainder = n - 8 * x;
            if (remainder >= 0 && remainder % 6 == 0) {
                int y = remainder / 6;
                printf("%d %d\n", x, y);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("-1\n");
        }
    }
    return 0;
}
