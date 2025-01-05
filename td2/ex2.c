#include <stdio.h>

int main(void)
{
    int n, x, y;
    int l; //y
    int c; //x

    printf("%s", "saisir les val:\n");
    scanf("%d %d %d", &n, &x, &y);
    l = n;
    while (l > 0)
    {
        c = 0;
        while (c < n)
        {
            if (c  == x && l == y)
                printf("%c", '#');
            else 
                printf("%c", '.');
            c++;
        }
        printf("%c", '\n');
        l--;
    }
}