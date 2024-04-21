#include <cmath>
#include <cstdio>
#include <cstdlib>

int closeness(int x1, int y1, int x2, int y2, int d) {
    return pow(abs(x1 - x2), d) + pow(abs(y1 - y2), d);
}

int main() {
    int n, d, x[1000], y[1000], maxcloseness = 0, mincloseness = 2 * pow(100, 3);
    scanf("%d%d", &n, &d);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &x[i], &y[i]);
        for (int ii = i - 1; ii >= 0; ii--) {
            int c = closeness(x[i], y[i], x[ii], y[ii], d);
            if (c > maxcloseness) {
                maxcloseness = c;
            }
            if (c < mincloseness) {
                mincloseness = c;
            }
        }
    }
    printf("%d %d\n", mincloseness, maxcloseness);
}