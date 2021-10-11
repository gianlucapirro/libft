/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:51 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/11 14:53:02 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*storage;
	int		i;

	i = 0;
	storage = 0;
	while (str[i])
	{
		if (str[i] == c)
			storage = (char *) &str[i];
		i++;
	}
	if (str[i] == c)
		storage = (char *) &str[i];
	return (storage);
}

// int main (void)
// {
// 	char		*str;
// 	char		str2[] = "bonjour";
// 	int			arg;

// 	if (!(str = ft_strrchr(str2 + 2, 'b')))
// 		printf("NULL");
// 	else
// 		printf("%s", str);
// }