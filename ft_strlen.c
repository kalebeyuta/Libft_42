#include "libft.h"
int	ft_strlen(const char *str)
{
	int		cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}
