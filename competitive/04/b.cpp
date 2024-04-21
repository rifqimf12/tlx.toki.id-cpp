#include <algorithm>
#include <cstdio>

using namespace std;

int n, scores[5], t[5][5];

bool scoreMatch(int idx) {
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (i == idx) continue;
        score += t[idx][i];
    }
    return score == scores[idx];
}

int g(int x) {
    switch (x) {
        case 3:
            return 0;
        case 1:
            return 1;
        default:
            return 3;
    }
}

bool f(int a, int b, int result) {
    if (a > 0) {
        for (int i = 0; i < a; i++) {
            if (!scoreMatch(i)) {
                return false;
            }
        }
        if (a >= n) return true;
    }
    if (b >= n) {
        return f(a + 1, a + 2, 3) || f(a + 1, a + 2, 1) || f(a + 1, a + 2, 0);
    }
    t[a][b] = result;
    t[b][a] = g(result);
    return f(a, b + 1, 3) || f(a, b + 1, 1) || f(a, b + 1, 0);
}

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &scores[i]);
        if (f(0, 0, 0))
            printf("YES\n");
        else
            printf("NO\n");
    }
}