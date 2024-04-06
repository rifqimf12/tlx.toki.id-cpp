#include <cstdio>

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        bool isAPrime = true;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                isAPrime = false;
                break;
            }
        }
        if (!isAPrime || x == 1) {
            printf("BUKAN\n");
        } else {
            printf("YA\n");
        }
    }
}