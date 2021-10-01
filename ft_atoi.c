#include "libft.h"

int	ft_check(char ch)
{
	
		if ((ch == '\t' || (ch >= '\v' && ch
					<= '\r' ) || (ch == ' ')
				    || ch == '\n'))
                    return(1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		res;
	int		sum1;
	int		counter;

	res = 0;
	sum1 = 1;
	counter = 0;
    while (ft_check(str[counter]) == 1)
		counter++;
	while (str[counter])
	{
        if ((str[counter]  <= '0') || (str[counter] >= '9' ))
        {
         if (str[counter] == '-' )
         {
             if ((str[counter + 1]  <= '0') || (str[counter + 1] >= '9' ))
                 return 0;
			sum1 =  -1;
            counter++;
         }
         else
            return 0;
        }
		 
		 if ((str[counter] >= '0') && (str[counter] <= '9' ))
		{
			res = (str[counter] - '0') + (res * 10);
			counter++;
			if (str[counter + 1] < '0' || str[counter + 1] > '9')
			{
				res = (str[counter] - '0') + (res * 10);
				return (res * sum1);
			}
		}
	}
	return (res * sum1);
}
