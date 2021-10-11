/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 17:00:36 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/11 16:56:45 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int i;
// 	i = 123;
// 	while (i <= 127)
// 	{
// 		printf("ft: %d\n", ft_isprint(i));
// 		printf("og: %d\n", isprint(i));
// 		i++;
// 	}
// }
