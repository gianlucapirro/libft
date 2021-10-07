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

int	ft_strlcat(char *dest, const char *src, long int size)
{
	int		i;
	int		j;
	int		dest_size;
	char	*src1;

	src1 = (char *)src;
	i = 0;
	dest_size = ft_strlen(dest);
	while (dest[i])
		i++;
	j = 0;
	while (j < size)
	{
		if (src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		else
			return (ft_strlen(src1) + dest_size);
	}
	if (size > dest_size)
		return (ft_strlen(src1) + size);
	return (ft_strlen(src1) + dest_size);
}

int	main(void)
{
	//dest 1
	char	*dest;
	int		arg;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	//dest 2
	char	*dest1;
	int		arg1;

	if (!(dest1 = (char *)malloc(sizeof(*dest1) * 15)))
		return (0);
	memset(dest1, 0, 15);
	memset(dest1, 'r', 6);

	printf("og: %lu | %s\n", strlcat(dest, "lorem ipsum", 15), dest);
	printf("ft: %d | %s\n", ft_strlcat(dest1, "lorem ipsum", 15), dest1);	
}
