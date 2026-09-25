#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;
	size_t		i;

	pdest = dest;
	psrc = src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
