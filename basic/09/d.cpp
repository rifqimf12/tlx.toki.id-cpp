#include <cstdio>

int main() {
    int a[100][100], n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < m; ii++) {
            scanf("%d", &a[i][ii]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int ii = 0; ii < n; ii++) {
            if (ii > 0) printf(" ");
            printf("%d", a[n - ii - 1][i]);
        }
        printf("\n");
    }
}