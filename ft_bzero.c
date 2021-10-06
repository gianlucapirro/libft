/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:05:50 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 14:17:13 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *string, size_t nr)
{
    int i;
    char *string2 = string;
    i = 0;
    while (i < nr)
    {
        string2[i] = '\0';
        i++;
    }
}

// int main(void)
// {
//     char *str = malloc(20);
//     str[0] = 'H';
//     str[1] = 'E';
//     str[2] = 'L';
//     str[3] = 'L';
//     str[4] = 'O';
//     str[5] = '!';
//     str[6] = '!';
//     bzero(str, 2);
//     printf("%s", str);
// }