#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 0)
            continue;
        else if (i == 42) {
            printf("ERROR\n");
            break;
        }
        printf("%d\n", i);
    }
}