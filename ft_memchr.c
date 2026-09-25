#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((char *) &p[i]);
		i++;
	}
	return (NULL);
}
