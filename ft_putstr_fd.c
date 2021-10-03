#include"libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int counter;
    
    counter = 0;
    while(s == NULL)
        break;
    while(s[counter])
    {
        ft_putchar_fd(s[counter],fd);
        counter++;
    }
}