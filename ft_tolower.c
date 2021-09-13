#include "libft.h"

int	tolower(int ch)
{
	if (ch > 64 && ch < 91)
		ch = ch + 32;
    
	return (ch);
}
