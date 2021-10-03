#include "libft.h"

void    ft_bzero(void *string,size_t number)
{
	ft_memset(string,'\0',number);
}
