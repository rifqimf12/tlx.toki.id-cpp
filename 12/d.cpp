#include <cstdio>
#include <cstring>

bool isAPalindrom(char s[101], int firstIndex, int lastIndex) {
    if (firstIndex >= lastIndex) {
        return true;
    } else if (s[firstIndex] == s[lastIndex]) {
        return isAPalindrom(s, firstIndex + 1, lastIndex - 1);
    } else {
        return false;
    }
}

int main() {
    char s[101];
    scanf("%s", s);
    if (isAPalindrom(s, 0, strlen(s) - 1)) {
        printf("YA\n");
    } else {
        printf("BUKAN\n");
    }
}