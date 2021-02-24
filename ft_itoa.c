/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:25:35 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/24 10:01:16 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int		int_len(unsigned int nb)
{
	int	div;
	int	len;

	len = 0;
	div = nb;
	while (div != 0)
	{
		div /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				neg;
	unsigned int	nb;

	nb = (n < 0 ? -n : n);
	neg = (n < 0 ? 1 : 0);
	if (n == 0)
		i = 1;
	else
		i = neg + int_len(nb);
	if (!(str = malloc(sizeof(char) * i + 1)))
		return (NULL);
	str[i] = 0;
	if (n == 0)
		str[0] = '0';
	while (nb != 0)
	{
		i--;
		str[i] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (neg != 0)
		str[0] = '-';
	return (str);
}
