/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/12 18:51:28 by gianlucapir   #+#    #+#                 */
/*   Updated: 2021/10/13 15:59:33 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*trim_string(const char *array, char c)
{
	char	*new;
	char	string[2];

	if (!array)
		return (0);
	string[0] = c;
	string[1] = '\0';
	new = ft_strtrim(array, string);
	return (new);
}

int	count_occurence(const char *s, char c)
{
	int		amount;
	int		i;
	char	lastvar;

	i = 0;
	amount = 0;
	lastvar = c;
	while (s[i])
	{
		if (s[i] == c && lastvar != c)
			amount++;
		lastvar = s[i];
		i++;
	}
	return (amount);
}

int	free_mem(char **array, int j)
{
	while (--j)
		free(array[j]);
	free(array);
	return (-1);
}

int	ihatenorminette(const char *s, char **array, char c, int i)
{
	int		j;
	int		size;
	char	lastvar;

	j = 0;
	size = 0;
	while (s[i])
	{
		if ((s[i] == c && lastvar != c) || (ft_strlen((char *)s) == i - 1 && s[0]))
		{
			if (ft_strlen((char *)s) == i - 1)
			{
				// i++;
				// size++;
			}
			array[j] = malloc(sizeof(char) * (size + 1));
			if (!array[j])
				return (free_mem(array, j));
			ft_strlcpy(array[j++], s + i - size, size + 1);
			size = 0;
		}
		else if (s[i] != c)
			size++;
		if (ft_strlen((char *)s) != i || !*s)
			lastvar = s[i++];
	}
	// if (*s)
	// {
	// 	array[j] = malloc(sizeof(char) * (size + 1));
	// 	if (!array[j])
	// 		return (free_mem(array, j));
	// 	ft_strlcpy(array[j++], s + i - size, size + 1);
	// }
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	s = (const char *)trim_string(s, c);
	if (!s)
		return (0);
	array = malloc(sizeof(char *) * (count_occurence(s, c) + 2));
	if (!array)
		return (0);
	i = ihatenorminette(s, array, c, 0);
	if (i == -1)
		return (0);
	array[i] = 0;
	return (array);
}

// int main (void)
// {
//     int j;
//     char **array = ft_split(0, 0);
//     // j = 0;
//     // while (array[j])
//     //     j++;
//     // for (size_t i = 0; i <= j; i++)
//         // printf("%s\n", array[i]);
// }

