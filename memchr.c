// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char *ft_memchr(char *str, char c, int nr)
{
    int i;

    i = 0;
    while (i < nr)
    {
        if (*str == c)
        {
            return (str);
        }
        str++;
        i++;
    }
    return (0);
}

// int main(void)
// {
//     char *str = malloc(20);
//     str[0] = 'h';
//     str[1] = 'e';
//     str[2] = 'l';
//     str[3] = 'l';
//     str[4] = 'o';
//     str[5] = '!';
//     str = ft_memchr(str, 'l', 2);
//     printf("%s", str);
// }