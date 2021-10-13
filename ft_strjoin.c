/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gianlucapirro <gianlucapirro@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:50:20 by gianlucapir       #+#    #+#             */
/*   Updated: 2021/10/12 12:57:46 by gianlucapir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	if (s1 && s1)
	{
		new = (char *)malloc(sizeof(char) * (ft_strlen((char *) s1) + \
		ft_strlen((char *) s2) + 1));
		i = 0;
		if (new == NULL)
			return (NULL);
		while (s1[i])
		{
			new[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i])
		{
			new[ft_strlen((char *) s1) + i] = s2[i];
			i++;
		}
		new[ft_strlen((char *) s1) + i] = '\0';
		return (new);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	char	*strjoin;
// 	int		arg;

// 	if (!(strjoin = ft_strjoin(s1, s2)))
// 		printf("NULL");
// 	else
// 		printf("%s", strjoin);
// 	if (strjoin == s1 || strjoin == s2)
// 		printf("\nA new string was not returned");
// }
