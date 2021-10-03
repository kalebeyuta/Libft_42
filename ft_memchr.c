#include "libft.h"

void *ft_memchr (const void *thing, int character , size_t range)
{
    unsigned char *fthing;
    size_t counter;

    counter = 0; 
    fthing = (unsigned char *)thing;
    
    while (range--)
	{
		if (fthing[counter] == (unsigned char )character)
            return((char *)fthing + counter);
		counter++;
	}
    return (NULL);
}