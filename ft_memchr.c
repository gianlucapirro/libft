/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:10 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 14:14:47 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_memchr(char *str, char c, size_t nr)
{
    size_t i;

    i = 0;
    while (i < nr)
    {
        if (*str == c)
        {
            return (str);
        }
        str++;
        i++;
    }
    return (0);
}

// int main(void)
// {
//     char *str = malloc(20);
//     str[0] = 'h';
//     str[1] = 'e';
//     str[2] = 'l';
//     str[3] = 'l';
//     str[4] = 'o';
//     str[5] = '!';
//     str = ft_memchr(str, 'l', 2);
//     printf("%s", str);
// }