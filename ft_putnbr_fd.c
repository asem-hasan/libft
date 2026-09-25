#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	long	div;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	div = 1;
	while (num / div >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar_fd((num / div) + '0', fd);
		num %= div;
		div /= 10;
	}
}
