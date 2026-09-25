#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_get_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	sum;
	int	i;
	int	sign;

	sum = 0;
	i = 0;
	sign = 1;
	while (ft_iswhitespace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		sign = ft_get_sign(nptr[i]);
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
	}
	return (sum * sign);
}
