
// #include <stdio.h>

char	*ft_strchr(const char *string, int c)
{
	while (*string && *string != c)
		string++;
	if (*string == c)
		return ((char * )string);
	return (0);
}

// int main(void)
// {
//     char *answer;
//     answer = ft_strchr("Hello world!", 'w');
//     printf("%s", answer);
// }