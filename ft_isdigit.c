/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isdigit.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 12:47:10 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/04 15:22:53 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isdigit(unsigned char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     int answer = ft_isdigit('44');
//     printf("%d", answer);
// }