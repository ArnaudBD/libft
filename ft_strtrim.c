/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:18:04 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:22:58 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
int i;
int j;
int start;
char *str;

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

	start = i;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] != 0)
	{
	if (s1[i] != set[j])
		j++;
	else
	{
		i--;
		j = 0;
	}
	}

	if (!(str = malloc(sizeof (char)*(i - start) + 1)))
		return (NULL);
	str[0] = s1[start];
	str[i] = 0;

	return (str);
}
