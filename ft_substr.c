/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:23:36 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:23:40 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;
	size_t j;

	i = 0;
	j = 0;

	if (!(str = malloc (sizeof(char)*len + 1)))
		return (NULL);

	str[0] = start;


	while (s[i] != 0)
	{
		if (s[i] == str[0])
		{
			while (j <= len && s[i] != 0)
			{
				str[j] = s[i];
				i++;
				j++;
			}
			break;
		}
		i++;
	}
	str[j] = 0;

	return (str);
}
