/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:22:56 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/11 16:54:30 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2 = src;
	size_t		i;

	dest2 = dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest2 > src2)
	{
		while (n > 0)
		{
			dest2[n - 1] = src2[n - 1];
			n--;
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*string;
// 	char	*s;

// 	s = malloc(40);
// 	s[0] = 'H';
// 	s[1] = 'E';
// 	s[2] = 'L';
// 	s[3] = 'L';
// 	s[4] = 'O';
// 	s[5] = '!';
// 	string = ft_memmove(s, "hi", 4);
// 	string = memmove(s, "hi", 4);
// 	printf("%s", string);
// }