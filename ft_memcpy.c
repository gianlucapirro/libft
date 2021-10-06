/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 16:51:11 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 17:05:03 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_memcpy(void *dest, void *src, size_t n)
{
    char *dest2;
    char *src2;
    size_t i;

    i = 0;
    dest2 = dest;
    src2 = src;
    while(i < n)
    {
        *dest2 = *src2;
        src2++;
        dest2++; 
        i++;
    }
    return(dest);
}

// int main(void)
// {
//     char *string;
//     char *s = malloc(40);
//     s[0] = 'H';
//     s[1] = 'E';
//     s[2] = 'L';
//     s[3] = 'L';
//     s[4] = 'O';
//     // s[5] = '!';
//     // string = memcpy(s, "Byeeeee", 2);
//     string = ft_memcpy(s, "Byeeeee", 2);
//     printf("%s", string);
// }