#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;
	size_t s_length;

	if(!s)
		return(0);
	s_length = ft_strlen(s);
	result = NULL;
	if(start > s_length)
		len = 1;
	else if (start + len > s_length)
		len = s_length - start + 1;
	else
		len++;
	result = malloc(len * sizeof(char));
	if(result == NULL)
		return(NULL);
	ft_strlcpy(result, s + start , len);
	return(result);
}