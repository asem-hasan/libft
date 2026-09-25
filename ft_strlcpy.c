#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	remaining;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	remaining = dstsize - 1;
	i = 0;
	while (i < remaining)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
