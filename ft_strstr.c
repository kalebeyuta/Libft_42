#include "libft.h"
char	*strstr(char *str, char *to_find)
{
	char	*find;
	int		i;

	find = NULL;
	i = 0;
	while (*str)
	{
		if (!to_find[i])
			break ;
		if (*str == to_find[i++])
		{
			if (!find)
				find = str;
		}
		else
		{
			find = NULL;
			i = 0;
		}
		str++;
	}
	return (find);
}
