#include <cstdio>
#include <cstring>

int main() {
    char s[101];
    int k;
    scanf("%s\n%d", s, &k);
    for (int i = 0; i < strlen(s); i++) printf("%c", (s[i] - 97 + k) % 26 + 97);
    printf("\n");
}