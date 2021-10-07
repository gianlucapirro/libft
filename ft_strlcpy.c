/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:02:44 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/07 11:12:04 by gpirro        ########   odam.nl         */
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
	return (ft_strlen(src));
}

// int main(void)
// {
//     char *dest = malloc(25);
//     printf("My funct: %d\n", ft_strlcpy(dest, "Hello Worfasdfld", 3));
//     int answer = strlcpy(dest, "Hello Worfasdfld", 3);
//     printf("Original: %i", answer);
// }