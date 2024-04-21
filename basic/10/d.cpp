#include <cstdio>

// return 0 if divisor is not a prime or x is not divisible
int getPowerOfPrimeFactor(int x, int divisor) {
    int power = 0;
    for (; x % divisor == 0; x /= divisor) {
        power++;
    }
    return power;
}

int main() {
    int n;
    scanf("%d", &n);
    bool firstPrimeFactor = true;
    for (int i = 2; n > 1; i++) {
        if (int p = getPowerOfPrimeFactor(n, i); p > 0) {
            while (n % i == 0) n /= i;
            if (!firstPrimeFactor) {
                printf(" x ");
            }
            printf("%d", i);
            if (p > 1) {
                printf("^%d", p);
            }
            firstPrimeFactor = false;
        }
    }
    printf("\n");
}