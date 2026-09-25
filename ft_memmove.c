#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;
	size_t		i;

	pdest = dest;
	psrc = src;
	if (pdest > psrc)
	{
		i = n;
		while (i > 0)
		{
			i--;
			pdest[i] = psrc[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
