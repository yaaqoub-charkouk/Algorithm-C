#include <stdio.h>


int	*delete_cell(int *tab, int del, int n)
{
	int tab2[n];
	int i = 0;

	while (i < n)
	{
		if (tab[i] == del && i < n - 1)
			i++;
		tab2[i] = tab[i];
		i++;
	}
	return (tab2);
}
int	main(void)
{
	int tab[4] = {1, 2, 3, 4};
	int i = 0;
	int n ;
	int temp, del;
	int *tab1 = &tab;

	printf("%s", "input the tab size:\t");
	scanf("%d", &n);
	printf("%s", "input the value to delete:\t");
	scanf("%d", &del);
	while (i < n - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}

	tab1 = delete_cell(tab, del, n);
	i = 0;
	while (i < 4) printf("%d", tab[i++]);
	return (0);
}