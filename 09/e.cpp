#include <cstdio>

int main() {
    int a[100][100], b[100][100], n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < m; ii++) {
            scanf("%d", &a[i][ii]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int ii = 0; ii < p; ii++) {
            scanf("%d", &b[i][ii]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < p; ii++) {
            int sum = 0;
            for (int iii = 0; iii < m; iii++) {
                sum += a[i][iii] * b[iii][ii];
            }
            if (ii > 0) printf(" ");
            printf("%d", sum);
        }
        printf("\n");
    }
}