#include <cstdio>

void f(int x) {
    if (x > 1) {
        f(x - 1);
    }
    for (int i = 0; i < x; i++) {
        printf("*");
    }
    printf("\n");
    if (x > 1) {
        f(x - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    f(n);
}