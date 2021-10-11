/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:51 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/08 12:53:40 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	while (*str && *str != (c))
		str++;
	if (*str == (c))
		return ((char *) str);
	return (0);
}

int main(void)
{
	//ft
	printf("FT __________\n");
	char		*str;
	char		str2[] = "bonjour";
	if (!(str = ft_strrchr(str2, 'o')))
			printf("NULL");
		else
		{
			printf("%s", str);
			if (str != str2 + 4)
				printf("\nReturn value is false\n");
		}
		//ft
	printf("OG __________\n");
	char		*str1;
	char		str12[] = "bonjour";
	if (!(str1 = strrchr(str12, 'o')))
			printf("NULL");
		else
		{
			printf("%s", str1);
			if (str1 != str12 + 4)
				printf("\nReturn value is false");
		}
}