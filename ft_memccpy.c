/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:25:43 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:25:45 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
	unsigned char uncharc;
	
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	uncharc = (unsigned char)c;

	int i;

	i = 0;

	while (i < n && source[i] != uncharc)
	{
		destination[i] = source[i];
		i++;
	}
	return(destination);
}
