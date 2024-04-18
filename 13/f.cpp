#include <stdlib.h>

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int getNearestSquare(int r, int c) {
    if (r < c) r = c;
    for (int i = 2; i <= 128; i *= 2)
        if (r <= i) return i;
    return r;
}

int a[128][128] = {0};

void initialize(string code, int r, int c, int l) {
    if (code == "")
        for (int i = r; i < r + l; i++)
            for (int j = c; j < c + l; j++)
                a[i][j] = 1;
    else {
        l /= 2;
        switch (code[0]) {
            case '0':
                initialize(code.substr(1, code.size() - 1), r, c, l);
                break;
            case '1':
                initialize(code.substr(1, code.size() - 1), r, c + l, l);
                break;
            case '2':
                initialize(code.substr(1, code.size() - 1), r + l, c, l);
                break;
            case '3':
                initialize(code.substr(1, code.size() - 1), r + l, c + l, l);
                break;
        }
    }
}

int main() {
    int n, r, c;
    string codes[12500];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) cin >> codes[i];
    scanf("%d%d", &r, &c);
    int l = getNearestSquare(r, c);
    for (int i = 0; i < n; i++) initialize(codes[i].substr(1, codes[i].size() - 1), 0, 0, l);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (j > 0) printf(" ");
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}