#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	remaining;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dsize)
		return (dsize + src_len);
	remaining = (dsize - dst_len) - 1;
	i = 0;
	while (i < remaining)
	{
		if (src[i] == '\0')
			break ;
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}
