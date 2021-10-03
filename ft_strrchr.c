#include "libft.h"
char	*ft_strrchr(const char *str, int ch)
{
    char    *find;
	char	*result;
	char	fch;
	int		counter;

	result = NULL;
	counter = 0;

    find = (char *)str;
	fch = (char )ch;

	if (fch == '\0')
        return(find + ft_strlen(find));
    
	while (find[counter])
	{
		if (find[counter] == fch)
            result = &find[counter];
		counter++;
	}
  
	return (result);
}
