#include <cstdio>
#include <cstring>

int a[10];

void f(int n, int k, int depth) {
    if (depth == k) {
        for (int i = 1; i <= k; i++) {
            if (i > 1) printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
    } else {
        for (int i = a[depth] + 1; i <= n; i++) {
            a[depth + 1] = i;
            f(n, k, depth + 1);
        }
    }
}

void printCombination(int n, int k) {
    f(n, k, 0);
}

int main() {
    memset(a, 0, sizeof(a));
    int n, k;
    scanf("%d%d", &n, &k);
    printCombination(n, k);
}