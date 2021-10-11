/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                          :+:    :+:          */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 13:27:42 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/04 15:22:42 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		size;
	int		i;

	size = ft_strlen((char *)s1);
	new = malloc((size + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int main()
// {
//     char source[] = "GeeksForGeeks";
//     // A copy of source is created dynamically
//     // and pointer to copy is returned.
//     char* target = ft_strdup(source);
//     printf("%s", target);
//     return 0;
// }