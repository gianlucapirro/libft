/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gianlucapirro <gianlucapirro@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:33:18 by gpirro            #+#    #+#             */
/*   Updated: 2021/10/15 00:26:10 by gianlucapir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	find_length(int number)
{
	int	amount;

	amount = 0;
	while (number != 0)
	{
		number = number / 10;
		amount++;
	}
	return (amount);
}

char	*ft_itoa(int n)
{
	long	number;
	int		length;
	char	*str;

	number = n;
	length = find_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (0);
	str[length--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
		length++;
	}
	while (number > 0)
	{
		str[length--] = '0' + (number % 10);
		number /= 10;
	}
	return (str);
}

// int main(void)
// {
// 	char *res = ft_itoa(0);
// 	printf("%s", res);
// 	free(res);
// }