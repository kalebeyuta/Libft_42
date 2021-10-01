void *ft_memcpy(void *destination, const void *source,size_t range)
{
    unsigned char *fdestination;
    unsigned char *fsource;
    size_t counter;

    fdestination = (unsigned char *)destination;
    fsource = (unsigned char *)source;

    if(range =< 0 || destination == source)
        return(destination);
    
    while (counter < range)
    {
        fdestination[counter] = fsource[counter];
        counter++;
    }
    return(fdestination);

}