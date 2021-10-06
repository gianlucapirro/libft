#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_bzero(char *string, int nr)
{
    int i;

    i = 0;
    while (i < nr)
    {
        string[i] = '\0';
        i++;
    }
}

// int main(void)
// {
//     char *str = malloc(20);
//     str[0] = 'H';
//     str[1] = 'E';
//     str[2] = 'L';
//     str[3] = 'L';
//     str[4] = 'O';
//     str[5] = '!';
//     str[6] = '!';
//     bzero(str, 2);
//     printf("%s", str);
// }