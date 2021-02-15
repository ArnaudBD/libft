/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:27:28 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:27:30 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int len;
	int i;
	int j;

	char *str;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	
	if (!(str = malloc(sizeof(char)*len + 1)))
		return (NULL);
	
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= len)
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[len] = 0;

	return (str);
}
