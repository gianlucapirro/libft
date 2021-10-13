/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/12 18:51:28 by gianlucapir   #+#    #+#                 */
/*   Updated: 2021/10/13 13:11:54 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *trim_string(const char *array, char c)
{
    char    *new;
    char    *string;

    string = malloc(sizeof(char) * 2);
    string[0] = c;
    string[1] = '\0';
    new = ft_strtrim(array, string);
    free (string);
    return (new);
}

int count_occurence(char *s, char c)
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

void    fill_array(char *s, char *array, int i, int size)
{
    int     count;

    count = 0;
    while (count < size)
    {
        array[count] = s[i - size];
        i++;
        count++;
    }
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
    char    *trimmed;
    char    lastvar;

    if (s == 0)
        return (0);
    trimmed = trim_string(s, c);
    array = malloc(sizeof(char *) * (count_occurence(trimmed, c) + 2));
    i = 0;
    j = 0;
    size = 0;
    while (trimmed[i])
    {
        if (trimmed[i] == c && lastvar != c)
        {
            array[j] = malloc(sizeof(char) * (size + 1));
            if (!array[j])
            {
                free_mem(array, j);
                return (0);
            }
            fill_array(trimmed, array[j], i, size);
            j++;
            size = 0;
        }
        else if (trimmed[i] != c)
            size++;
        lastvar = trimmed[i];
        i++;
    }
    array[j] = malloc(sizeof(char) * (size + 1));
    fill_array(trimmed, array[j], i, size);
    array[j + 1] = 0;
    return (array);
}

// int main (void)
// {
//     int j;
//     char **array = ft_split(" Hello  World        Je moeder   ", ' ');
//     j = 0;
//     while (array[j])
//         j++;
//     for (size_t i = 0; i < j; i++)
//         printf("%s\n", array[i]);
// }

