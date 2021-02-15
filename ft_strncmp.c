/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:28:20 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:28:23 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int result;
	i = 0;
	result = 0;

	while((s1[i] != '\0') && (s2[i] != '\0') && (i <= n))
	{
		if(s1[i] == s2[i])
			i++;
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}
