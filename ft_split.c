/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/12 18:51:28 by gianlucapir   #+#    #+#                 */
/*   Updated: 2021/10/13 14:49:53 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *trim_string(const char *array, char c)
{
    char    *new;
    char    string[2];

    if (!array)
        return (0);
    string[0] = c;
    string[1] = '\0';
    new = ft_strtrim(array, string);
    return (new);
}

int count_occurence(const char *s, char c)
{
	int		amount;
	int		i;
    char    lastvar;

	i = 0;
	amount = 0;
    lastvar = c;
	while (s[i])
	{
        if (s[i] == c && lastvar != c)
            amount++;
        lastvar = s[i];
        i++;
	}
	return (amount);
}

void    free_mem(char **array, int j)
{
    while(--j)
        free(array[j]);
    free(array);
}

char    **ft_split(char const *s, char c)
{
    char    **array;
    int     i;
    int     j;
    int     size;
    char    lastvar;
    
    s = (const char *)trim_string(s, c);
    if (!s)
        return (0);
    i = count_occurence(s, c);
    array = malloc(sizeof(char *) * (i + 2));
    if (!array)
        return (0);
    i = 0;
    j = 0;
    size = 0;
    while (s[i])
    {
        if (s[i] == c && lastvar != c)
        {
            array[j] = malloc(sizeof(char) * (size + 1));
            if (!array[j])
            {
                free_mem(array, j);
                return (0);
            }
            ft_strlcpy(array[j], s + i - size, size + 1);
            j++;
            size = 0;
        }
        else if (s[i] != c)
            size++;
        lastvar = s[i];
        i++;
    }
    if (*s)
    {
        array[j] = malloc(sizeof(char) * (size + 1));
        if (!array[j])
        {
            free_mem(array, j);
            return (0);
        }
        ft_strlcpy(array[j], s + i - size, size + 1);
        j++;
    }
    array[j] = 0;
    return (array);
}