/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:28:20 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/19 17:05:34 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t result;
	i = 0;
	result = 0;

	while(((unsigned char)s1[i] != '\0') && ((unsigned char)s2[i] != '\0') && (i <= n))
	{
		if((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
		{
			break;
		}
	}

	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
