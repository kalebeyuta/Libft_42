#include "libft.h"

int	isascii(int c)
{
	if (c > -1 && c < 256)
		return (1);
	return (0);
}
