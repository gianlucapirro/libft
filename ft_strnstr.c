/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:44 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/07 11:14:17 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t nr)
{
	size_t	i;
	size_t	size;

	size = ft_strlen(needle);
	i = 0;
	if (needle == NULL || ft_strlen(needle) == 0)
		return ((char *) haystack);
	if (size > nr)
		return (NULL);
	while (i < nr)
	{
		printf("%s\n", &haystack[i]);
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

// int main(void)
// {
//     char *str;
//     str = ft_strnstr("Hello world Im gian Luca ", "", 13);
//     // str = strnstr("Hesdllo world !!!", "world", 20);
//     printf("%s", str);
// }