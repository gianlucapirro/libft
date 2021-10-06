// #include "libft.h"
#include <stdio.h>
#include <string.h>
int ft_memcmp(void *s1, void *s2, size_t n)
{
    char *string1;
    char *string2;
    size_t i;

    string1 = s1;
    string2 = s2;
    i = 0;
    while (i < n)
    {
        if (string1[i] != string2[i])
            return ((unsigned char) string1[i] - (unsigned char) string2[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    printf("%i", ft_memcmp("Hello World!", "Helololololo", 13));
}