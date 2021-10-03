#include"libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int counter;

    counter = 0 ;

    if (s == 0)
        return ;

    while(s[counter])
    {
        f(counter, s + counter);
        counter++;
    }     
}