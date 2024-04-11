#include <cstdio>
#include <cstring>

int main() {
    char s[101];
    int gap = 'a' - 'A';
    bool upperNext = false;
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            printf("_%c", s[i] + gap);
        else if (upperNext) {
            printf("%c", s[i] - gap);
            upperNext = false;
        } else if (s[i] == '_')
            upperNext = true;
        else
            printf("%c", s[i]);
    }
    printf("\n");
}