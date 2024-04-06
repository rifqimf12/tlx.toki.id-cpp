#include <cstdio>

int main() {
    int n, x, a[1001], max = 0;
    for (int i = 1; i <= 1000; i++) a[i] = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        a[x]++;
    }
    for (int i = 1; i <= 1000; i++) {
        if (a[i] >= max) {
            max = a[i];
            n = i;
        }
    }
    printf("%d\n", n);
}