/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:25:49 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:25:53 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char uncharc;
	char *str;

	i = 0;
	uncharc = (unsigned char)c;
	str = (char *)s;

	while(i < n && str[i] != 0)
	{
		if(str[i] == uncharc)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
