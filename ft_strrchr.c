/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:28:35 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/23 15:16:22 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	charc;
	char	*str;

	i = 0;
	charc = (char)c;
	str = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == charc)
			return (&str[i]);
		i--;
	}
	return (0);
}
