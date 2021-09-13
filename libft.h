#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
int	atoi(char *str);
int	isalnum(int c);
int	isalpha(int c);
int	isascii(int c);
int	isdigit(int c);
int	isprint(int c);
size_t	strlcpy(char *dst,const char *src, size_t size);
int	strlen(char *str);
char	*strncat(char *dest, char *src, size_t dstsize);
int	strncmp(const char *s1,const char *s2, size_t n);
char	*strstr(char *str, char *to_find);
int	tolower(int ch);
int	toupper(int ch);
#endif