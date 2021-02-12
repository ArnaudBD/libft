#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;
	int odg;
	int nb;

	odg = 1;
	nb = n;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}

	while (nb != 0)
	{
		odg = odg * 10;
		nb = n;
		nb = nb / odg;
	}
	while (odg > 1)
	{
		odg = odg / 10;
		c = n / odg + '0';
		ft_putchar_fd(c, fd);
		n = n - (n / odg) * odg;
	}
}
