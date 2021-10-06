/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:33 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 11:06:36 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

int ft_strlcat(char *dest, const char *src, long int size)
{
    int i;
    int j;

    i = 0;
    while (dest[i])
        i++;
    j = 0;
    while (j < size)
    {
        if (src[j])
        {
            dest[i] = src[j];
            i++;
            j++;
        }
        else
            return(i);
    }
    return (j);
}

// int main(void)
// {
//     char *dest = malloc(20);
//     char *src = malloc(20);
//     dest[0] = 'H';
//     dest[1] = 'E';
//     dest[2] = 'L';
//     dest[3] = 'L';
//     dest[4] = 'O';
//     dest[5] = '!';
//     dest[6] = '!';
//     dest[7] = '!';
//     src[0] = 'B';
//     src[1] = 'Y';
//     src[2] = 'E';
//     printf("%i", ft_strlcat(dest, src, 15));
//     // printf("%lu", strlcat(dest, src, 15));
// }