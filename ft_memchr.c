#include "libft.h"

void *ft_memchr (const void *thing, int character , size_t range)
{
    unsigned char *ifdestination;
    unsigned char *ifsource;
    size_t counter;

    fthing = (unsigned char *)thing;
    fcharacter = (unsigned char *)character;
    
    while (counter < range)
	{
		if (thing == character)
            return(thing);
		counter++;
        thing++;
	}
    return (NULL);
}