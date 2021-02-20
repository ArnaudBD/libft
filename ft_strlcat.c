/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:27:39 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/20 13:44:53 by abiju-du         ###   ########.fr       */
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

	while (dst[i] != 0)
		i++;

	while (src[j] != 0)
		j++;

	if (dstsize <= i)
		k = j + dstsize;
	else
		k = j + i;
	
	j = 0;
	while (src[j] != 0)
	{
					//															printf("i = %ld\nj = %ld\n\n\n", i, j);
		dst[i] = src[j];
		i++;
		j++;
	}


	if (dstsize != 0)
	{
		dst[i] = 0;
		return (k);
	}
	else
		return(0);

}
/*
int		main()
{
	char dst[] = "test";
	char src[] = "";
	printf("%s\n", dst);
	ft_strlcat(dst, src, 10);
	printf("%s\n", dst);
	return (0);
}
*/













	/*
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);

	while(src[i] != 0 && j < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (dstsize != 0)
		dst[j] = '\0';

	if (i < dstsize)
		return (ft_strlen(dst) + i);

	return (ft_strlen(dst) + ft_strlen(src));
}*/
