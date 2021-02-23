/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:11:28 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/23 16:33:39 by abiju-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

void	freedom(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
}

int		nb_words(char const *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	if (s[i] != c)
		nb++;
	while (s[i] != 0)
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			nb++;
		i++;
	}
	return (nb);
}

int		next_cut(char const *s, char cut)
{
	int		i;

	i = 0;
	if (s[i] == cut)
		i++;
	while (s[i] != cut && s[i] != 0)
			i++;
	return (i);
}

char	**filling_good(char const *s, char **tab, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == 0)
			break ;
		while (s[i] != c && s[i] != 0)
		{
			tab[j][k] = s[i];
			k++;
			i++;
		}
		tab[j][k] = 0;
		k = 0;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
char	**ft_split(char const *s, char c)
{
	if (s == 0)
		return (0);
	char	**tab = NULL;
	int		i;
	int		j;
	int		first_letter;

	i		= 0;
	j		= 0;
	if (!(tab = malloc(sizeof(char*) * (nb_words(s, c) + 1))))
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] == c || i == 0)
		{
			while (s[i] == c)
				i++;
			if (s[i] == 0)
				break ;
			first_letter = i;
			while (s[i] != 0 && s[i] != c)
				i++;
				if (!(tab[j] = malloc(sizeof(char) * (i - first_letter) + 1)))
				{
					freedom(tab, j);
					return (NULL);
				}
			j++;
		}
	}
	if (!(tab[j] = malloc(sizeof(char))))
	{
		freedom(tab, j);
		return (NULL);
	}
	tab = filling_good(s, tab, c);
	return (tab);
}
