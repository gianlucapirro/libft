/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:33 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/07 14:32:53 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destsize;
	size_t	srcsize;
	size_t	i;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen((char *)src);
	i = 0;
	while ((size - 1) <= destsize)
		return (srcsize + size);
	while (destsize + i < size - 1)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (destsize + srcsize);
}

// int	main(void)
// {
// 	//dest 1
// 	char	*dest;
// 	int		arg;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	//dest 2
// 	char	*dest1;
// 	int		arg1;

// 	if (!(dest1 = (char *)malloc(sizeof(*dest1) * 15)))
// 		return (0);
// 	memset(dest1, 0, 15);
// 	memset(dest1, 'r', 6);
// 	//printing
// 	// printf("og: %lu | %s\n", strlcat(dest, "lorem", 15), dest);
// 	printf("ft: %d | %s\n", ft_strlcat(dest1, "lorem", 15), dest1);	
// }