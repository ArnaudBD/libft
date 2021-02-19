/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:26:15 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/19 16:37:08 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *destination;
	char *source;

	if (src == NULL && dst == NULL)
		return NULL;

	i = 0;
	destination = (char *)dst;
	source = (char *)src;
	

	if (dst > src)
	{
		while(len > 0)
		{
			destination[len - 1] = source[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return(destination);
}
