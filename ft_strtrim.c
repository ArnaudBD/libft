/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:18:04 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/25 16:33:54 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int		ft_start(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j] != 0)
	{
		if (s1[i] != set[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

int		ft_end(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] != 0 && i != 0)
	{
		if (s1[i] != set[j])
			j++;
		else
		{
			i--;
			j = 0;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		start;
	char	*str;

	if (s1 == 0 || set == 0)
		return (NULL);
	start = ft_start(s1, set);
	i = ft_end(s1, set);
	if (i == 0)
		start = i;
	if (!(str = malloc(sizeof(char) * (i - start) + 2)))
		return (NULL);
	str[0] = s1[start];
	j = 0;
	k = start;
	while (j <= i - start && (i - start) != 0)
	{
		str[j] = s1[k];
		k++;
		j++;
	}
	str[j] = 0;
	return (str);
}
