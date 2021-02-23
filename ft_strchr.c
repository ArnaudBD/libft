/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:27:19 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/23 14:57:26 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	charc;
	char	*str;

	i = 0;
	charc = (char)c;
	str = (char *)s;
	while (str[i] != c)
	{
		if (str[i] == 0)
			return (0);
		i++;
	}
	return (&str[i]);
}
