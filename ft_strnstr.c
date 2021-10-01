#include "libft.h"
int	ft_strnstr(const char *big, const char *little, size_t length)
{
    unsigned char *fbig;
    unsigned char *flittle;
    size_t counter;
    unsigned char	*find;
    
    fbig = (unsigned char *)big;
    flittle = (unsigned char *)little;
    counter = 0;
    find = NULL;
	
    while (*fbig && counter < length)
	{
		if (!flittle[counter])
			break ;
		if (*fbig == flittle[counter++])
		{
			if (!find)
				find = fbig;
		}
		else
		{
			find = NULL;
			counter = 0;
		}
		fbig++;
	}
	return (find);
}

}