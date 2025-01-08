#include <stdio.h>

int main(void)
{
    char ch[100];
    int i, j,count = 0;

    printf("Saisir votre chaine: ");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == ' ')
            count++;
    }
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == ' ')//we have to delete all spaces
        {
            for (j = i; ch[j] != '\0'; j++)
            {
                ch[j] = ch[j + 1];
            }
        }
    }
    printf("la chaine sans espaces est: %s", ch);
    printf("le nombre des espaces est %d", count);
    return (0);
}