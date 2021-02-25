/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:28:28 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/25 16:32:01 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (n[i] == '\0')
		return (&h[i]);
	else
		while (i < len && h[i] != 0)
		{
			j = 0;
			while (h[i] != 0 && h[i] != n[j] && i < len)
				i++;
			while (h[i] == n[j++] && i++ < len)
			{
				if (n[j] == '\0')
					return (&h[i - j]);
				if (h[i] != n[j])
					i = i - j + 1;
			}
		}
	return (NULL);
}
