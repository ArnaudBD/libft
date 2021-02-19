/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:27:39 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/17 15:41:09 by abiju-du         ###   ########.fr       */
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
	j = ft_strlen(dst);
	k = j + ft_strlen(src);

	while(src[i] != 0 && j < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (dstsize != 0)
		dst[j] = '\0';

	return (k);
}
