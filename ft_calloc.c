/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 13:22:04 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/04 15:21:52 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*array;

	if (count == 0 || size == 0)
		return (NULL);
	array = malloc(count * size);
	ft_memset(array, 0, (count * size));
	return (array);
}
