#include <stdio.h>

int main(void)
{
    int j;
    int m;
    int a;
    int count;

    count = scanf("%d%d%d", &j, &m, &a);
    printf("donne recues : \t%d\n", count);
    printf("jour : \t%d\nmois : \t%d\nanee: \t%d", j, m, a);
    return (0);
}