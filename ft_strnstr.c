/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:44 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/11 17:44:44 by gpirro        ########   odam.nl         */
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
	if (*needle == '\0')
		return (haystack);
	while (i < nr)
	{
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
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
//     str = ft_strnstr(NULL, "Im", 26);
//     // str = strnstr("Hesdllo world !!!", "world", 20);
//     printf("%s", str);
// }