#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (true) {
        if (n == 1) {
            printf("ya\n");
            break;
        } else if (n % 2 == 1) {
            printf("bukan\n");
            break;
        }
        n /= 2;
    }
}