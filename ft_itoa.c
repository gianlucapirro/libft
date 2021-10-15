/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 11:33:18 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/15 12:43:28 by gpirro        ########   odam.nl         */
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

void	fill_array(char *str, long long number, long length)
{
	str[length--] = '\0';
	if (number == 0)
		str[0] = '0';
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	while (number > 0)
	{
		str[length--] = '0' + (number % 10);
		number /= 10;
	}
}

char	*ft_itoa(int n)
{
	long long	number;
	long		length;
	char		*str;

	if (n < 0)
		length = find_length(n) + 1;
	else if (n == 0)
		length = 1;
	else
		length = find_length(n);
	number = n;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (0);
	fill_array(str, number, length);
	return (str);
}

// int main(void)
// {
// 	char *res = ft_itoa(0);
// 	printf("%s", res);
// 	free(res);
// }