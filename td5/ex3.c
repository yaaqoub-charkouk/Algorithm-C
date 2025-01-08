#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	nbre_mots(char *s)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == ' ')
		{
			count++;
		}
		i++;
	}
	count++;
	return (count);
}

int	*taille_mots(char *s)
{
	int *tailles;
	int size, i, count, j;

	size = nbre_mots(s);
	tailles = malloc(size * sizeof(char));
	if (!tailles)
		return (NULL);
	i = 0;
	count = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			count++;
		else if (s[i] == ' ')
		{
			tailles[j++] = count;
			count = 0;
		}
		i++;
	}
	return (tailles);//with size from nbr_mots
}
int main(void)
{
	char *ch;
	int size, i = 1, j = 0, count = 0;
	int *tailles;

	printf("saisir la chaine de char:\t");
	gets(ch);
	size = nbre_mots(ch);
	tailles = taille_mots(ch);
	int max = tailles[0];
	int max_index = 0;
	while (i < size) // find the max word size and its index;
	{
		if (tailles[i] > max){
			max = tailles[i];
			max_index = i;
		}
		i++;
	}
	i = max_index;
	while (ch[j])
	{
		if (ch[j] == ' ')
			count++;
		if (count == i)
		{
			while (ch[j] && ch[j] != ' ')
				write(1, &ch[j++], 1);
		}
		else
			j++;
	}
	return (0);
}
