#include "libft.h"
char *ft_strdup(const char *s)
{
    size_t length;
    size_t counter;
    char* duplicate;

    length = ft_strlen(s);
    counter = 0;

    duplicate = (char *)malloc(sizeof(char) * (length + 1));

    if (duplicate == NULL)
        return NULL;

    while(s[counter])
    {  
        duplicate[counter] = s[counter];
        counter++;
    }
    duplicate[counter] = '\0';

    return (duplicate);
}