#include <stdio.h>

int main(void)
{
	int n, m, l;

	printf("%s", "saisir svp la taille du matrice a ligne:\t");
	scanf("%d", &n);
	printf("%s", "saisir svp la taille du matrice a colonne:\t");
	scanf("%d", &m);
	printf("%s", "saisir svp la taille du matrice b colonne:\t");
	scanf("%d", &l);
	int a[n][m], b[m][l];
	// remplir les deux matrices;
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%s", "saisir svp la valeur de l'element:\t");
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%s", "saisir svp la valeur de l'element:\t");
			scanf("%d", &b[i][j]);
		}
	}
	// multiplication des deux matrices;
	int c[n][l];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < m; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	// afficher la matrice c;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}

	return (0);
}