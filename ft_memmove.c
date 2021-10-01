#include<libft.h>
void *ft_memmove(void *destination, const void *source,size_t length)
{
    unsigned char *fdestination;
    unsigned char *fsource;
    size_t counter;

    fdestination = (unsigned char *)destination;
    fsource = (unsigned char *)source;
    counter = 0;

    if (fdestination == fsource)
        return fdestination;
    if (fdestination > fsource)
    {
        while (counter <= length)
    {
        ifdestination[counter] = ifsource[counter];
        counter++;
    }
    }
    else
    {
         while (counter < length)
    {
        ifdestination[counter] = ifsource[counter];
        counter++;
    }
    }
    return(ifdestination);

}