#include"libft.h"
void ft_putendl_fd(char *s, int fd)
{
    int counter;
    
    counter = 0;
    while(s[counter])
    {
        ft_putchar_fd(s[counter],fd);
        counter++;
    }
    ft_putchar_fd('\n',fd);
}