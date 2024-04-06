#include <cstdio>

int main() {
    int i, x[101];
    for (i = 0;; i++)
        if (scanf("%d", &x[i]) == EOF) break;
    for (i -= 1; i >= 0; i--) printf("%d\n", x[i]);
}