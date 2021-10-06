#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}


int main(void)
{
    char *haystack;
    char *needle;

    haystack = "Hello world !!!";
    needle = "world";
    int i = 0;
    while (haystack[i])
    {
        printf("&Haystack[i] is : %s\n", &haystack[i]);
        if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
        {
            printf("SUCCES!\n");
        }
        i++;
    }
}