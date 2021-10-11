
#include "libft.h"
int    ft_findstr(char const *str, char c)
{
    int        words;
    int        booleano;

    words = 0;
    booleano = 0;
    while (*str)
    {
        if (*str != c && booleano == 0)
        {
            booleano = 1;
            words++;
        }
        else if (*str == c)
            booleano = 0;
        str++;
    }
    return (words);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	counter;
	char	*duplicate;

	counter = 0;
	duplicate = (char *)malloc(sizeof(char) * (n + 1));
	if (duplicate == NULL)
		return (NULL);
	while (s[counter] && counter < n )
	{
		duplicate[counter] = s[counter];
		counter++;
	}
	duplicate[counter] = '\0';
	return (duplicate);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	char	**str;
	str = (char **)malloc(sizeof(char *) * (ft_findstr(s, c) + 1));
	if (str == NULL)
		return (NULL);
	end = 0;
	i = 0;
	while (s[end] != '\0')
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] != '\0' && s[end] != c)
			end++;
		if (end > start)
		{
			str[i] = ft_strndup(s + start, end - start);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}