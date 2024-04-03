#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++) printf(" ");
        for (int j = n - 1 - i; j < n; j++) printf("*");
        printf("\n");
    }
}