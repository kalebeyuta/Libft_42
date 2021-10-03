#include"libft.h"

void *ft_memset(void *string,int character, size_t length)
{
    char *fstring;
    char fcharacter;

    fcharacter = (char)character;
    fstring = (char *)string;

    while(length--)
            *fstring++ = fcharacter;
    return(fstring);
}
