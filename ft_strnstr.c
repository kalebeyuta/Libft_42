#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t range)
{
     char *fbig;
     char *flittle;
    size_t counter;
	size_t counteri;
    
    fbig = ( char *)little;
    flittle = ( char *)big;
    counter = 0;

	if(*little == '\0' || little == NULL)
		return((char *)big);
    while (flittle[counter] && counter < range)
	{
		counteri = 0;
		while(fbig[counteri] == flittle[counter + counteri] && (counter + counteri) < range)
		{
			if (fbig[counteri +1] == '\0')
				return(flittle + counter);
			counteri++;
		}
		counter++;
	}
	return (NULL);
}