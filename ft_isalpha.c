/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isalpha.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 12:47:10 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/04 15:22:25 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(unsigned char c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
