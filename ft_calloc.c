/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 08:24:13 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 08:25:05 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(int count, int size)
{
	int		i;
	int		totalmem;
	char	*str;
	
	i = 0;
	totalmem = count * size;

	if (!(str = malloc(sizeof(char) * totalmem + 1)))
		return (0);
	while (i <= totalmem)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
