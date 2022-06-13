#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int i = 0;
    int index, dec;
    double D, first_x, second_x;
    int number_a = 0, number_b = 0, number_c = 0;
    char string[26] = {'\0'};
    fgets(string, 26, stdin);
    string[strlen(string) - 1] = '\0';

    while (i < strlen(string))
    {
        if (string[i] == 'x' && string[i + 1] == '^')
        {
            dec = 1;
            index = i - 1;
            while (index != -1)
            {
                if (string[index] == '-')
                {
                    number_a *= -1;
                    break;
                }
                int add = string[index] - '0';
                number_a += add * dec;
                index--;
                dec *= 10;
            }
        }

        if (string[i] == 'x' && string[i + 1] == ' ')
        {
            dec = 1;
            index = i - 1;
            while (string[index] != ' ')
            {
                if (string[index] == '-')
                {
                    number_b *= -1;
                    break;
                }
                int add = string[index] - '0';
                number_b += add * dec;
                index--;
                dec *= 10;
            }
        }

        if (string[i] == '=')
        {
            dec = 1;
            index = i - 2;
            while (string[index] != ' ')
            {
                if (string[index] == '-')
                {
                    number_c *= -1;
                    break;
                }
                int add = string[index] - '0';
                number_c += add * dec;
                index--;
                dec *= 10;
            }
        }
        i++;
    }

    D = pow(number_b, 2) - 4 * number_a * number_c;
    
    first_x = (double)(-number_b + sqrt(D)) / (2 * number_a);
    second_x = (double)(-number_b - sqrt(D)) / (2 * number_a);

    printf("%lf %lf\n", first_x, second_x);

    return 0;
}

