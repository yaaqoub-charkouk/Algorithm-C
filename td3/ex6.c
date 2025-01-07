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
    int j = 0, occ, k, counted = 0;
    int frq[n];
    for (i = 0; i < n; i++)
    {
        j = tab[i];
        occ = 0;
        counted = 0;
        for (k = 0; k <= i; k++)
        {
            if (frq[k] == j)
            {
                counted = 1;
                break;
            }
        }
        frq[i] = j;
        if (counted == 0)
        {
            for (k = 0; k < n; k++)
            {
                if (tab[k] == j)
                    occ++;
            }
            printf("la valeur %d apparait %d fois\n", j, occ);
        }
    }
    return (0);
}