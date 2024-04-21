#include <cstdio>

int main() {
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d", c);
            c++;  // lol
            if (c == 10) c = 0;
        }
        printf("\n");
    }
}