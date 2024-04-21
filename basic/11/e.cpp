#include <cstdio>
#include <cstring>

int main() {
    char s[101];
    scanf("%s", s);
    int gap = 'a' - 'A';
    for (int i = 0; i < strlen(s); i++)
        if (s[i] > 'Z')
            printf("%c", s[i] - gap);
        else
            printf("%c", s[i] + gap);
    printf("\n");
}