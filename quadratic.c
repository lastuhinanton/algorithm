#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int i = 0;
    int index, dec;
    int number_a = 0, number_b = 0, number_c = 0;
    char string[26] = {'\0'};
    fgets(string, 26, stdin);
    string[strlen(string) - 1] = '\0';

    while (i < strlen(string))
    {
        if (string[i] == 'x' && string[i + 1] == '^')
        {
            index = i - 1;
            dec = 1;
            while (index != -1)
            {
                int add = string[index] - '0';
                number_a += add * dec;
                index--;
                dec *= 10;
            }
        }
        i++;
    }


    return 0;
}
