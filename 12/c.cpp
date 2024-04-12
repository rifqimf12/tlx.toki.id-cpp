#include <cmath>
#include <cstdio>

int f(int a, int b, int k, int x) {
    if (k == 0)
        return abs(a * x + b);
    else
        return abs(a * f(a, b, k - 1, x) + b);
}

int main() {
    int a, b, k, x;
    scanf("%d%d%d%d", &a, &b, &k, &x);
    printf("%d\n", f(a, b, k - 1, x));
}