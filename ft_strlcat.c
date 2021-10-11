/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:33 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/11 12:50:10 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destsize;
	size_t	srcsize;
	size_t	i;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen((char *)src);
	i = 0;
	if (size == 0 || destsize >= size)
		return (srcsize + size);
	while (src[i] && i < size - destsize - 1)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (srcsize + destsize);
}

// int	main(void)
// {
// 	//dest 1
// 	char	*dest;
// 	int		arg;

// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 'r', 14);
// 	dest[11] = 'a';
// 	//dest 2
// 	char	*dest1;
// 	int		arg1;

// 	if (!(dest1 = (char *)malloc(sizeof(*dest1) * 15)))
// 		return (0);
// 	memset(dest1, 'r', 14);
// 	dest1[11] = 'a';
// 	//printing
// 	printf("og: %lu | %s\n", strlcat(dest, "lorem", 15), dest);
// 	printf("ft: %d | %s\n", ft_strlcat(dest, "lorem", 15), dest1);
// 	// ft_print_result(ft_strlcat(dest, "lorem", 15));
// }