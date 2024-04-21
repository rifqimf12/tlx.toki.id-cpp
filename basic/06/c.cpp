#include <cstdio>

int main()
{
    char s[100];
    while (scanf("%[a-z]\n", s) != EOF)
    {
        printf("%s\n", s);
    }
}