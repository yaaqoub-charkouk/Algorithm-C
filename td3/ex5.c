#include <stdio.h>

int main(void)
{
    int n;

    printf("Saisir la taille du tableau:\t");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("la taille est null , resaisir la taille:\t");
        scanf("%d", &n);
    }
    int tab[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Saisir la valeur de l'element:\t");
        scanf("%d", &tab[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if ((tab[i] >= 0 && tab[i + 1] >= 0) || (tab[i] < 0 && tab[i + 1] < 0))
        {
            printf("YES\n");
            break;
        }
    }
    if (i == n - 1)
    {
        printf("NO\n");
    }
    return (0);
}