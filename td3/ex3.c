#include <stdio.h>

int main(void)
{
    int n;

    printf("%s", "saisir svp la taille du matrice:\t");
    scanf("%d", &n);
    int mat[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%s", "saisir svp la valeur de l'element:\t");
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; i++)
        mat[i][i] = 0;
// printing the table;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return (0);
}