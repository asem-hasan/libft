#include "libft.h"

static	void	ft_intlen(int n, int *len)
{
	int	i;

	i = n;
	if (n < 0 || n == 0)
		(*len)++;
	while (i != 0)
	{
		i = i / 10;
		(*len)++;
	}
}

static	void	ft_fillstr(int n, int len, char *p)
{
	int	sign;
	int	num;
	int	i;

	sign = (n < 0);
	i = len;
	while (i > 0)
	{
		num = n % 10;
		if (num < 0)
			num = -num;
		p[i - 1] = num + '0';
		n = n / 10;
		i--;
		if (sign && i == 1)
			break ;
	}
	if (sign)
		p[0] = '-';
	p[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;

	len = 0;
	ft_intlen(n, &len);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	ft_fillstr(n, len, p);
	return (p);
}
