#include <stdio.h>

int main(void)
{
	int n;

	printf("%s", "saisir svp la taille des tablea:\t");
	scanf("%d", &n);
	int t1[n], t2[n], i, j = 0;

	// remplir t2;
	for (i = 0; i < n; i++)
	{
		printf("%s", "saisir svp la valeur de l'element:\t");
		scanf("%d", &t2[i]);
	}
	for (i = 0; i < n; i++)
	{
		t1[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		if (t2[i] >= 0)
		{
			t1[j] = t2[i];
			j++;
		}
	}
	
	return 0;
}