#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	int	i;

	i = 0;
	result = NULL;
	while (1)
	{
		if (s[i] == (unsigned char)c)
			result = (char *)&s[i];
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (result);
}
