#include <stdio.h>

int main(void)
{
    int check;
    scanf("%d", &check);
    
    int flag = 1, i = 2;

    while (i <= (check / 2))
    {
        if (check % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }
    
    if (flag)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }
    
    return 0;
}

