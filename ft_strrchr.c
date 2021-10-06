/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:51 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 11:06:54 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
   while (*str && *str != (c))
       str++;
    if (*str == (c))
        return ((char *) str);
    return (0);
}

// int main(void)
// {
//     char *answer;
//     answer = ft_strrchr("hello abba", 97);
//     printf("%s", answer);
//     // char a = 97;
//     // printf("%c", a);
// }