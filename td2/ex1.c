#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    float sum = 0;

    printf("saisir N\t");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + (1.0 / i);
        i++;
    }
    printf("la somme harmonique est : \t%.2f\n", sum);
    return 0;
}