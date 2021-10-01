#include<libft.h>

void *ft_memset(void *string,int character, size_t length)
{
    char *ifstring;
    char character;

    character = (char)character;
    ifstring = (char *)string;

    while(length--)
            *ifstring++ = character;
    return(*string);
}
