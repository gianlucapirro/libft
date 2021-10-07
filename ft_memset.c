/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:17 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/07 10:16:55 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_memset(void *string, int character, int len)
{
	int		i;
	char	*return_val;

	i = 0;
	return_val = (char *)string;
	while (i < len)
	{
		return_val[i] = character;
		i++;
	}
	return (return_val);
}

// int	main(void)
// {
// 	char	*string;
// 	char 	*s = malloc(40);
// 	s[0] = 'H';
// 	s[1] = 'E';
// 	s[2] = 'L';
// 	s[3] = 'L';
// 	s[4] = 'O';
// 	s[5] = '!';
// 	// string = ft_memset(s, 97, 4);
// 	string = memset(s, 97, 4);
// 	printf("%s", string);
// }