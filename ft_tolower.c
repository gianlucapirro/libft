/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 19:50:30 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 12:30:58 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

// int main(void)
// {
// 	printf("%c", ft_tolower('C'));
// }