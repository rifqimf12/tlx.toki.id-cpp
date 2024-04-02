#include <cstdio>

int main() {
    int n, x, min = 100000, max = -100000;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x < min) min = x;
        if (x > max) max = x;
    }
    printf("%d %d\n", max, min);
}