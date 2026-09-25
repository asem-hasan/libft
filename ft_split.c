#include "libft.h"
#include <stdio.h>

static int	ft_len(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((i == 0 && !(s[i] == c)) || (!(s[i] == c) && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_free_words(char **res, int j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
	return (0);
}

static	void	ft_fill_words(char *res, char const *s, int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[len] = '\0';
}

static int	ft_malloc_words(char **res, char const *s, char c)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		res[j] = malloc(len + 1);
		if (!res[j])
			return (ft_free_words(res, j));
		ft_fill_words(res[j++], s, i, len);
		i += len;
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**result;
	int		done;

	len = ft_len(s, c);
	result = malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	done = ft_malloc_words(result, s, c);
	if (!done)
		return (NULL);
	return (result);
}
