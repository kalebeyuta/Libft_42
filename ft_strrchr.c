#include "libft.h"
char	*ft_strrchr(const char *str, int ch)
{
    char    find;
	int		counter;

	find = NULL;
	counter = 0;

    find = (char *)str;
	while (find[counter])
	{
		if (find[counter] == ch)
            return(find + counter);
		counter++;
	}
    if (find[counter] = '\0')
        return(find + counter);
    
	return (find);
}
