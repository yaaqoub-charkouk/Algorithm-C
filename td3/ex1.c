#include <stdio.h>

int main(void)
{
	int n, x, i, j, swap;

	printf("%s", "saisir svp la taille du tablea:\t");
	scanf("%d", &n);
	int tab[n];
	for (i = 0; i < n; i++)
	{
		printf("%s", "saisir svp la valeur de l'element:\t");
		scanf("%d", &x);
		tab[i] = x;
	}
	i = 0;
	while (i < n)
	{
		if (tab[i] < tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}
	// deleting a cell x;
	printf("%s", "saisir svp la valeur de l'element a supprimer:\t");
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (tab[i] == x)
		{
			for (j = i; j < n - 1; j++)
			{
				tab[j] = tab[j + 1];
			}
			n--;
			i--;
		}
	}
	// printing the table;
	for (i = 0; i < n; i++)
	{
		printf("%d\t", tab[i]);
	}
	return (0);
}