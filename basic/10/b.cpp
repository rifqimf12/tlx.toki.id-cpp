#include <cstdio>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int a[2][1001];

int main() {
    int n, t;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[0][i]);
    for (int i = 1; i <= n; i++) scanf("%d", &a[1][i]);
    scanf("%d\n", &t);
    while (t--) {
        char c, cc;
        int i, ii;
        scanf("%c %d %c %d\n", &c, &i, &cc, &ii);
        swap(a[c - 'A'][i], a[cc - 'A'][ii]);
    }
    for (int i = 0; i < 2; i++) {
        for (int ii = 1; ii <= n; ii++) {
            if (ii > 1) printf(" ");
            printf("%d", a[i][ii]);
        }
        printf("\n");
    }
}