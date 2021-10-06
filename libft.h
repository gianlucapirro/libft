#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
int	ft_atoi(char *str);
void	        ft_bzero(void *s, size_t n);
int	            ft_isalnum(unsigned char a);
int	            ft_isalpha(unsigned char a);
int	            ft_isascii(int a);
int	            ft_isdigit(unsigned char a);
int	            ft_isprint(unsigned char a);
void	        *ft_memcpy(void *dst, const void *src, size_t n);
char            *ft_strchr(char *s, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
int	            ft_strlen(char *str);
int	            ft_strncmp(char *s1, char *s2, unsigned int n);
char            *ft_strrchr(char *s, int c);
unsigned char	ft_tolower(unsigned char a);
unsigned char	ft_toupper(unsigned char a);
void	        *ft_memmove(void *dst, const void *src, size_t len);
void            *ft_memchr(const void *s, int c, size_t n);
void	        *ft_memset(void *b, int c, size_t len);
void	        *ft_memccpy(void *dst, const void *src, int c, size_t n);
int	            ft_memcmp(const void *s1, const void *s2, size_t n);
void	        *ft_calloc(size_t count, size_t size);
char	        *ft_strdup(char *src);
char            *ft_strnstr(char *haystack, char *needle, size_t nr);

#endif