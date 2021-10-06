/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:22:56 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 14:40:34 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *dest2;
    const char *src2 = src;
    int i;

    dest2 = dest;
    if (dest2 > src2)
    {
        while (n > 0)
        {
            dest2[n - 1] = src2[n - 1];
            n--;
        }
        return (dest);
    }
    i = 0;
    while (i < n)
    {
        dest2[i] = src2[i];
        i++;
    }
    return (dest);
}


int main(void)
{
// ft_memmove
    char dest1 [] = "hello";
    char src1 []= "world";
    char test1 [] = "hellooothere";
    printf("memmove:    world -> hello --> %s\n", memmove(test1 + 5, test1 + 6, 3));
    // printf("ft_memmove: world -> hello --> %s\n\n", ft_memmove(test1 + 5, test1 + 6, 3));
}