#include "libft.h"
char *ft_strdup(const char *s)
{
    size_t length;
    char* duplicate;

    while(s[length])
        length++

    duplicate = (char *)malloc(sizeof(char) * (i + 1));

    if (duplicate = NULL)
        return NULL;
    ft_strlcpy(duplicate, s, length +1);

    return (duplicate);
}