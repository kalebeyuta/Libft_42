
#include "libft.h"
char	*ft_strchr(const char *str, int ch)
{
	int		counter;

	counter = 0;

	while (str[counter])
	{
		if (str[counter] == (char )ch)
            return((char *)str + counter);
		counter++;
	}
    if (str[counter] == (char )ch)
        return((char *)str + counter);
    
	return (NULL);
}
