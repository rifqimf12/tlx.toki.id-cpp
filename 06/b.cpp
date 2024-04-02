#include <cstdio>

int main()
{
    int n, x, total = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        total += x;
    }
    printf("%d\n", total);
}