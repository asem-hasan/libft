#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;
	size_t	len;

	len = ft_strlen(s);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[len] = '\0';
	return (p);
}
