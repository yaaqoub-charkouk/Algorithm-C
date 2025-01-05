#include <stdio.h>

int main(void)
{
    int i = 0;
    int j;
    int n;

    scanf("%d", &n);
    while (i <= n)
    {
        j = i;
        while (j--)
            printf("%d", i);
        printf("%c", '\n');
        i++;
    }
    return (0);
}