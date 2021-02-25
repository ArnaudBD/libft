/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:23:36 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/25 10:10:25 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	int				i;
	size_t			j;
	unsigned int	slen;

	if (s == 0)
		return (NULL);
	i = start;
	j = 0;
	slen = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start < slen)
	{
		while (j < len && s[i] != 0)
		{
			str[j] = s[i];
			i++;
			j++;
		}
	}
	str[j] = 0;
	return (str);
}
