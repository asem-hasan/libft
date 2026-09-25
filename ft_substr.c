#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	slen;
	size_t	remaining;

	slen = ft_strlen(s);
	if ((start >= slen) || len == 0)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (slen - start > len)
		remaining = len + 1;
	else
		remaining = (slen - start) + 1;
	p = malloc(remaining);
	if (!p)
		return (NULL);
	ft_memcpy(p, s + start, remaining - 1);
	p[remaining - 1] = '\0';
	return (p);
}
