/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 19:12:49 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/13 10:16:49 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (0);
	if ((int)start >= ft_strlen((char *)s))
	{
		new = malloc(sizeof(char) * 1);
		*new = '\0';
		return (new);
	}
	i = 0;
	s += start;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int main(void)
// {
//     char *test = ft_substr("Hello world!", 4, 10);
//     printf("%s", test);
// }