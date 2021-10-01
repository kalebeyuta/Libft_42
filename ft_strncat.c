#include "libft.h"
char	*ft_strncat(char *dest, char *src, size_t dstsize)
{
	size_t	counter;
	size_t	tam;

	tam = 0;
	while (dest[tam] != '\0')
		tam++;
	counter = 0;
	while (counter < dstsize && src[counter] != '\0')
	{
		dest[tam] = src[counter];
		tam++;
		counter++;
	}
	dest[tam] = '\0';
	return (dest);
}
