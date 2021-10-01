#include "libft.h"

size_t	ft_strlcpy(char *dst,const char *src, size_t size)
{
	size_t	i;
	size_t	tam;
	char *s;

	i = 0;
	tam = 0;
	if (!dst)
		return (0);
	s = (char *)src;

	tam = strlen(s);
	if (!size)
		return(tam);
	while (src[i]  && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (tam);
}
