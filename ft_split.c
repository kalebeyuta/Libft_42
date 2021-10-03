
#include "libft.h"
int    ft_findstr(char const *str, char c)
{
    int        words;
    int        control;

    words = 0;
    control = 0;
    while (*str)
    {
        if (*str != c && control == 0)
        {
            control = 1;
            words++;
        }
        else if (*str == c)
            control = 0;
        str++;
    }
    return (words);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * n + 1);
	while (s[i] != '\0' && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
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