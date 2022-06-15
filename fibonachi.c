#include <stdio.h>

int main(void)
{
    int term, first = 0, second = 1, temp;
    scanf("%d", &term);

    while (second < term)
    {
        temp = second;
        second = second + first;
        first = temp;
    }

    printf("%d\n", first);

    return 0;
}


        

    
