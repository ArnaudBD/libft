/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:25:35 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/23 17:07:09 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int		int_len(int n)
{
	int	div;
	int	len;

	len = 0;
	div = n;
	while (div != 0)
	{
		div /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	if (n == -2147483648)
	{
		if (!(str = malloc(sizeof(char) * 12)))
			return (NULL);
		return ("-2147483648");
	}
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	else
		neg = 0;
	if (n == 0)
		i = 1;
	else
		i = neg + int_len(n);
	if (!(str = malloc(sizeof(char) * i + 1)))
		return (NULL);
	str[i] = 0;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		i--;
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (neg != 0)
		str[0] = '-';
	return (str);
}
