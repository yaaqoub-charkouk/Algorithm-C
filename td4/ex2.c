#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0;
    char ch[100];
    char c;

    printf("Saisir votre chaine: ");
    gets(ch);
    int n = strlen(ch);
    while (i < n / 2)
    {
        c = ch[i];
        ch[i] = ch[n - i - 1];
        ch[n - i - 1] = c;
        i++;
    }
    printf("La chaine inversée est: %s", ch);
    return (0);
}