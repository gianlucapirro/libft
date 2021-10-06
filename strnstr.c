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

char *ft_strnstr(char *haystack, char *needle, size_t nr)
{
    size_t i;

    i = 0;
    if (needle == NULL || ft_strlen(needle) == 0)
        return ((char *) haystack);
    if (ft_strlen(needle) > nr)
        return (NULL);
    while (i < nr)
    {
        if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
        {
            if (i + ft_strlen(needle) > nr)
                return (NULL);
            else
                return ((char *)&haystack[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char *str;
    str = ft_strnstr("Hello world !!!", "world", 20);
    // str = strnstr("Hello world !!!", "world", 20);
    printf("%s", str);
}