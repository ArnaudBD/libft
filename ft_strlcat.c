/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:27:39 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/23 16:16:57 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (dstsize != 0)
	{
		while (dst[i] != 0 && i < dstsize)
			i++;
		while (src[k] != 0 && (i + k) < (dstsize - 1))
		{
			dst[i + k] = src[k];
			k++;
		}
	}
	while (src[j])
		j++;
	if (i + k < dstsize)
		dst[i + k] = 0;
	return (i + j);
}
