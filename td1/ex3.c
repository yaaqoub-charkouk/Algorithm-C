#include <stdio.h>

int main(void)
{
    int m;
    int n;
    char c;
    int res = 0;

    scanf("%d %c %d", &n, &c, &m);

    if (c == '+')
        res = n + m;
    else if (c == '-')
        res = n - m;
    else if (c == '*')
        res = n * m;
    else if (c == '/')
        res = n / m;
    else
        return (printf("%s", "erreur"));
    printf("le resultat est :\t%d\n", res);
    return (0);
}