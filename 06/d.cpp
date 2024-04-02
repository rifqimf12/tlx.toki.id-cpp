#include <cstdio>

int main()
{
    int x, total = 0;
    while (scanf("%d", &x) != EOF)
    {
        total += x;
    }
    printf("%d\n", total);
}