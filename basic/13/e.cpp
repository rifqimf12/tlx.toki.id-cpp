#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int a[128][128] = {0};
string locList[12500];
int total = 0;

bool isHomogen(int r, int c, int l) {
    for (int i = r; i < r + l; i++) {
        for (int j = c; j < c + l; j++) {
            if (a[i][j] == 0) return false;
        }
    }
    return true;
}

void generateQuadTreeCode(string loc, int r, int c, int l) {
    if (isHomogen(r, c, l)) {
        locList[total] = "1" + loc;
        total++;
    } else if (l > 1) {
        int hl = l / 2;
        generateQuadTreeCode(loc + "0", r, c, hl);
        generateQuadTreeCode(loc + "1", r, c + hl, hl);
        generateQuadTreeCode(loc + "2", r + hl, c, hl);
        generateQuadTreeCode(loc + "3", r + hl, c + hl, hl);
    }
}

void printQuadTreeCode(string loc, int r, int c, int l) {
    generateQuadTreeCode(loc, r, c, l);
    printf("%d\n", total);
    for (int i = 0; i < total; i++) printf("%s\n", locList[i].c_str());
}

int nearestSquareLength(int r, int c) {
    if (r < c) r = c;
    for (int i = 2; i <= 128; i = i * 2) {
        if (r <= i) return i;
    }
    return r;
}

int main() {
    int r, c;
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    r = nearestSquareLength(r, c);
    printQuadTreeCode("", 0, 0, r);
}