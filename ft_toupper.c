#include "libft.h"

int	toupper(int ch)
{
	if (ch > 96 && ch < 123)
		ch = ch -32;
    
	return (ch);
}
