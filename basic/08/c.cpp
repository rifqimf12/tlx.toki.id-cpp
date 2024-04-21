#include <cstdio>

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        int factor = 0;  // factor counter besides 1 and itself
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                factor++;
                if (factor == 2) break;
            }
        }
        if (factor < 2) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}