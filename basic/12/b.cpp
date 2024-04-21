#include <cstdio>

int f(int x) {
    if (x == 1)
        return 1;
    else if (x % 2 == 0)
        return x / 2 * f(x - 1);
    else
        return x * f(x - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
}