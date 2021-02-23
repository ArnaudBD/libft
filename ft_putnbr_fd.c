/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:26:58 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/23 15:37:20 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	writing(odg, n, fd)
{
	char	c;

	while (odg > 1)
	{
		odg = odg / 10;
		c = n / odg + '0';
		ft_putchar_fd(c, fd);
		n = n - (n / odg) * odg;
	}
}


void	ft_putnbr_fd(int n, int fd)
{
	int			odg;
	long int	nb;

	odg = 1;
	nb = n;
	if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
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
	writing(odg, n, fd);
}
