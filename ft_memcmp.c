#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*ps1;
	const char	*ps2;

	if (n == 0)
		return (0);
	i = 0;
	ps1 = s1;
	ps2 = s2;
	while (i < n)
	{
		if ((unsigned char)ps1[i] != (unsigned char)ps2[i])
			return ((unsigned char)ps1[i] - (unsigned char)ps2[i]);
		i++;
	}
	return (0);
}
