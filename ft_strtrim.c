#include "libft.h"

static size_t	ft_get_start_and_end(char const *s1, char const *set,
		size_t *start, size_t *end)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len && ft_strchr(set, s1[i]))
		i++;
	*start = i;
	if (i == len)
		return (0);
	i = len;
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	*end = i - 1;
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	found;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*p;

	start = 0;
	end = 0;
	found = ft_get_start_and_end(s1, set, &start, &end);
	if (found)
		len = end - start + 1;
	else
		len = 0;
	p = ft_substr(s1, start, len);
	return (p);
}
