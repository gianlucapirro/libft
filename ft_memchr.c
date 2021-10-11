/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:10 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/11 16:59:10 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *str, char c, size_t nr)
{
	size_t	i;
	char	*array;

	array = (void *)str;
	i = 0;
	while (i < nr)
	{
		if (array[i] == c)
		{
			return (&array[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char *str;
//     str = ft_memchr("Bonjour", 'j', 6);
//     printf("%s", str);
// }