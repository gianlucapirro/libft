/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gianlucapirro <gianlucapirro@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:51:28 by gianlucapir       #+#    #+#             */
/*   Updated: 2021/10/14 10:53:28 by gianlucapir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**malloc_free(char **twodarray)
{
	int	i;

	i = 0;
	while (twodarray[i])
	{
		free(twodarray[i]);
		i++;
	}
	free(twodarray);
	return (NULL);
}

int	string_amount(char const *s, char c)
{
	int	i;
	int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	//skipping c aan het begin van de zin
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		// vind het aantal char in de zin == aantal arrays - 1
		if (s[i] == c)
		{
			nb_strs++;
			//als er meerdere char achter elkaar staan dan skipt hij die
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	//als de laatste char != aan c dan voegt hij nog een woord toe (het laatste woord heeft geen c dus telt hij die niet mee)
	if (s[i - 1] != c)
		nb_strs++;
	return (nb_strs);
}

void	next_string(char **string, int *string_len, char c)
{
	int	i;

	printf("test1: *string = %s || string_len = %i\n", *string, *string_len);
	*string += *string_len;
	printf("test2: *string = %s || string_len = %i\n", *string, *string_len);
	*string_len = 0;
	i = 0;
	//skip char aan het begin van de zin
	while (**string && **string == c)
		(*string)++;
	while ((*string)[i])
	{
		if ((*string)[i] == c)
			return ;
		// als char niet gelijk is aan *string[i] dan voeg +1 aan lengte -> string_len++;
		(*string_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**twodarray;
	char			*string;
	int				string_len;
	int				nb_strs;
	int				i;

	if (!s)
		return (NULL);
	nb_strs = string_amount(s, c);
	// malloc voor het aantaal arrays dat moet komen && protect
	twodarray = (char **)malloc(sizeof(char *) * (nb_strs + 1));
	if (!twodarray)
		return (NULL);
	i = 0;
	string = (char *)s;
	string_len = 0;
	while (i < nb_strs)
	{
		//changes string_len
		next_string(&string, &string_len, c);
		//malloc twodarray and protect
		twodarray[i] = (char *)malloc(sizeof(char) * (string_len + 1));
		if (!twodarray[i])
			return (malloc_free(twodarray));
		ft_strlcpy(twodarray[i], string, string_len + 1);
		i++;
	}
	twodarray[i] = 0;
	return (twodarray);
}

// int main (void)
// {
// 	char **str = ft_split(" Hallo  Wereld   test!!", ' ');
// 	for (size_t i = 0; i < 4; i++)
// 			printf("%s\n", str[i]);
// }