/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 11:33:18 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/14 14:35:27 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void    fill_array(int nb, char str, int i)
{
	if (nb >= 10)
	{
		fill_array(nb / 10, str, i);
		fill_array(nb % 10, str, i);
	}
	else
    {
		str = (nb + '0');
    }
    printf("%c\n", str);
}

int find_length(int number)
{
    int amount;

    amount = 0;
    while(number != 0)
    {
        number = number / 10;
        amount++;
    }
    return (amount);
}


char    *ft_itoa(int n)
{
    char    *str;
    int     i;
    int     nb;

    i = find_length(n);
    str = (char *)malloc(sizeof(char) * (i + 1));
    str[i--] = '\0';
    if (!str)
        return (NULL);
    if (nb == 0)
    {
        str[0] = '\0';
        return (str);
    }
    if (nb < 0)
    {
        str[0] = '-';
        nb = nb * -1;
    }
    while (nb > 0)
    {
        str[i] = '0' + (nb % 10);
        nb = nb / 10;
        i--;
    }
    printf("%s", str);
    return (str);
}

int main(void)
{
    printf("%s\n", ft_itoa(324));
}