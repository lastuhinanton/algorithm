#include <stdio.h>

int main(void)
{
    int first, second, third;
    scanf("%d %d %d", &first, &second, &third);
    if (first > second)
    {
        if (first > third)
        {
            printf("%d", first);
        }
        else
        {
            printf("%d", third);
        }
    }
    else
    {
        if (second > third)
        {
            printf("%d", second);
        }
        else
        {
            printf("%d", third);
        }
    }
    
    return 0;
}

