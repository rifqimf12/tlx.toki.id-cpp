#include <bits/stdc++.h>
using namespace std;

const int xmax = 1e6 + 1;
int n, q, y;
int x[xmax];

int main() {
    cin >> n;
    x[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
        x[i] += x[i - 1];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> y;
        int l = 1, r = n, ans;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (y <= x[mid]) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}