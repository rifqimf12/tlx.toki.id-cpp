#include <cstdio>
#include <cstring>

int a[9];
bool b[9];

bool isAZigzagPermutation(int currentDepth) {
    if ((a[currentDepth] < a[currentDepth - 1] && a[currentDepth - 1] > a[currentDepth - 2]) ||
        (a[currentDepth] > a[currentDepth - 1] && a[currentDepth - 1] < a[currentDepth - 2])) {
        return true;
    }
    return false;
}

void f(int x, int depth) {
    if (depth == x) {
        for (int i = 0; i < x; i++) printf("%d", a[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= x; i++) {
        if (b[i]) continue;
        a[depth] = i;
        if (depth >= 2 && !isAZigzagPermutation(depth)) continue;
        b[i] = true;
        f(x, depth + 1);
        b[i] = false;
    }
}

void printZigzagPermutation(int x) {
    f(x, 0);
}

int main() {
    int n;
    memset(b, false, sizeof(b));
    scanf("%d", &n);
    printZigzagPermutation(n);
}