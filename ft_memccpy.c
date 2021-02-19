/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:25:43 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/19 12:15:06 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
//	unsigned char uncharc;
	
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
//	uncharc = (unsigned char)c;

	size_t i;

	i = 0;

	while (i < n)
	{
		destination[i] = source[i];
	
		if (source[i] == (unsigned char)c)
			return ((void  *)&destination[i + 1]);
		i++;
	}
	return(NULL);
}
/*
int		main()
{
	char	source[] = "petit test";
	char	destination[] = "000000000000";
	printf("|%s|\n", ft_memccpy(destination, source, 32, 4));
}
*/
