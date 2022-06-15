#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, factorial, n;
    scanf("%d", &n);

    i = 1; factorial = 1;

    while (i <= n)
    {
        factorial *= i;
        i++;
    }

    printf("%d\n", factorial);

    return 0;
}


