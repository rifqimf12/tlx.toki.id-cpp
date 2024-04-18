#include <cstdio>

int m, n, b[25][25] = {0};
bool bt[25][25] = {false};

int look(int l, int r, int c) {
    int count = 0;
    if (r < 0 || c < 0 || r == m || c == n || bt[r][c]) return count;
    if (l == b[r][c]) {
        count++;
        bt[r][c] = true;
        count += look(l, r + 1, c);
        count += look(l, r - 1, c);
        count += look(l, r, c + 1);
        count += look(l, r, c - 1);
    }
    return count;
}

int main() {
    int r, c;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) scanf("%d", &b[i][j]);
    scanf("%d%d", &r, &c);
    int t = look(b[r][c], r, c);
    printf("%d\n", t * (t - 1));
}