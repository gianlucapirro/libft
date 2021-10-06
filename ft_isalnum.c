/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isalnum.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 13:22:04 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/04 15:21:52 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(unsigned char c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') \
	|| (c <= '9' && c >= '0'))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     int answer = ft_isalnum(':');
//     printf("%d", answer);
// }