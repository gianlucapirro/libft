/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:02:44 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 16:03:25 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *des, char *src, size_t size)
{
	int	i;
	int	d;

	i = 0;
	while (i < (size - 1))
	{
		des[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}

int main(void)
{
    char *dest = malloc(25);
    printf("My funct: %d\n", ft_strlcpy(dest, "Hello Worfasdfld", 3));
    int answer = strlcpy(dest, "Hello Worfasdfld", 3);
    printf("Original: %i", answer);
}