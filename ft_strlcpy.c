/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:02:44 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/08 12:47:59 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *des, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size - 1))
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	// og
// 	char *dest;
// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	// ft
// 	char *dest1;
// 	if (!(dest1 = (char *)malloc(sizeof(*dest1) * 15)))
// 		return (0);
// 	memset(dest1, 0, 15);
// 	memset(dest1, 'r', 6);
// 	//test
// 	printf("og: %lu | %s\n", strlcpy(dest, "lorem ipsum", 3), dest);
// 	printf("ft: %u | %s\n", ft_strlcpy(dest1, "lorem ipsum", 3), dest1);
// }