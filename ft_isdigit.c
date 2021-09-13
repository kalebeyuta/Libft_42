#include "libft.h"
int	isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}