/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:26:08 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:26:10 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *destination;
	char *source;

	i = 0;
	destination = (char *)dst;
	source = (char *)src;

	while(i < n && source[i] != 0)
	{
		destination[i] = source[i];
		i++;
	}
	return(destination);
}
