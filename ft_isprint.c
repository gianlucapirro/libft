/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 17:00:36 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/06 14:15:53 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	is_print(unsigned char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("%d", is_print());
// }
