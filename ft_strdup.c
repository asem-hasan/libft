#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memmove(p, s, len);
	p[len] = '\0';
	return (p);
}
