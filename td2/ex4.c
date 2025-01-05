#include <stdio.h>

int main(void)
{
    int n, m, i, j;
    int s = 0;

    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d", i * j);
            printf("%c", ' ');
            s += i * j;
        }
        printf("%c", '\n');
    }
    printf("%s%d", "la somme est : \t", s);
    return (0);
}