/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:25 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/07 10:17:25 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *string, int c)
{
	while (*string && *string != c)
		string++;
	if (*string == c)
		return ((char *)string);
	return (0);
}

// int main(void)
// {
//     char *answer;
//     answer = ft_strchr("Hello world!", 'w');
//     printf("%s", answer);
// }