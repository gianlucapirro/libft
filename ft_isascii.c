/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isascii.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 13:27:42 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/04 15:22:42 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (c <= 0177 && c >= 0)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     int answer = ft_isascii(140);
//     printf("%d", answer);
// }