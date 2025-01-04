#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%s", "n est paire");
    else 
        printf("%s", "n est impaire");
    return (0);
}