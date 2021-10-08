/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gpirro <gpirro@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:06:51 by gpirro        #+#    #+#                 */
/*   Updated: 2021/10/07 10:19:52 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

void			ft_bzero(void *string, size_t nr);
int				ft_atoi(char *str);
int				ft_isalnum(unsigned char c);
int				ft_isalpha(unsigned char c);
int				ft_isascii(char c);
int				ft_isdigit(unsigned char c);
int				is_print(unsigned char c);
void			*ft_memchr(const void *str, char c, size_t nr);
int				ft_memcmp(void *s1, void *s2, size_t n);
char			*ft_memcpy(void *dest, void *src, size_t n);
char			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_memset(void *string, int character, int len);
char			*ft_strchr(const char *string, int c);
int				ft_strlcat(char *dest, const char *src, size_t size);
unsigned int	ft_strlcpy(char *des, char *src, size_t size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strnstr(char *haystack, char *needle, size_t nr);
char			*ft_strrchr(const char *str, int c);
char			ft_tolower(int c);
char			ft_toupper(int c);

#endif
