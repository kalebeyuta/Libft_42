#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch > 96 && ch < 123)
		ch = ch -32;
    
	return (ch);
}
