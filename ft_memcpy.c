/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 16:51:11 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/11 16:41:50 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	i = 0;
	dest2 = dest;
	src2 = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*dest2 = *src2;
		src2++;
		dest2++;
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char *string;
//     char *s = malloc(40);
//     s[0] = '0';
//     string = memcpy(s, "\0", 4);
//     string = ft_memcpy(s, "\0", 4);
//     printf("%s", string);
// }