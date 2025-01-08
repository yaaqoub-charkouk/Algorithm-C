#include <stdio.h>
#include <stdbool.h>

bool estegale(int t1[], int t2[], int n, int m)
{
    int i = 0;

    if (n != m)
        return (false);
    while  (i < n)
    {
        if (t1[i] != t2[i])
            return (false);
        i++;
    }
    return (true);
}
