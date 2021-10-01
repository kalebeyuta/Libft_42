#include"libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
    void *thing; 
    thing = malloc(nmemb * size);
    if(thing == NULL)
        return (thing);
    ft_bzero(thing, size * nmemb);
    return ((void *)thing);
}