/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/20 11:10:07 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/07 09:56:50 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_check_if_negative(char *str)
{
	if (str[0] == '-')
		return (-1);
	else
		return (1);	
}

int	ft_atoi(char *str)
{
	int	i;
	int	nr;
	int	neg;

	i = 0;
	nr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
	str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	neg = ft_check_if_negative(str);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nr = nr * 10;
		nr = nr + (int)(str[i] - '0');
		i++;
	}
	return (nr * neg);
}

// int main(void)
// {
// 	printf("ft: %d\n", ft_atoi("-1-2"));
// 	printf("og: %d", atoi("-47-5"));
// }