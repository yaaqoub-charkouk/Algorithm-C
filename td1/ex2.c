#include <stdio.h>

int main(void)
{
    int n;
    int m;

    scanf("%d%d", &n, &m);
    if (n < 0 && m < 0)
        printf("%s", "le produit est positive");
    else if (n < 0 || m < 0)
        printf("%s", "le produit est negative");
    else
        printf("%s", "le produit est positive");
    return (0);
}