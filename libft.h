#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
int	ft_atoi(char *str);
void ft_bzero(void *string, size_t number);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void *ft_memset(void *string,int character, size_t length);
char	*ft_strchr(char *str, int ch);
size_t	ft_strlcpy(char *dst,const char *src, size_t size);
int	ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, size_t dstsize);
int	ft_strncmp(const char *s1,const char *s2, size_t n);
char	*ft_strstr(char *str, char *to_find);
int	ft_tolower(int ch);
int	ft_toupper(int ch);
#endif