#include "libft.h"

int	ft_check(char ch)
{
	if ((ch == '\t' || (ch >= '\v' && ch
				<= '\r' ) || (ch == ' ')
			|| ch == '\n'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		res;
	int		sum1;
	int		counter;

	res = 0;
	sum1 = 1;
	counter = 0;
	while (ft_check(str[counter]) == 1)
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sum1 = -1;
		counter++;
	}
	while ((str[counter] >= '0') && (str[counter] <= '9' ))
	{
		res = (str[counter] - '0') + (res * 10);
		counter++;
	}
	return (res * sum1);
}
