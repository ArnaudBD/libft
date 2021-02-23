/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:11:28 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/22 08:49:36 by abiju-du         ###   ########.fr       */
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
		if (s[i] != c)
		{
			tab[j][k] = s[i];
//																				printf("tab[%d][%d] = s[%d] = '%c' = %d\n", j, k, i, s[i], s[i]);
			k++;
			if (s[i + 1] == c || s[i + 1] == 0)
			{
				tab[j][k] = 0;
//																				printf("tab[%d][%d] = s[%d] = '%c' = %d\n", j, k, i, s[i], s[i]);
				j++;
			}
		}
		i++;
	}
	tab[j] = 0;

	return (tab);
}
char	**ft_split(char const *s, char c)
{
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
			first_letter = i;
			while (s[i] != 0 && s[i] != c)
				i++;
																				printf("Malloc %d + 1 sur j = %d\n", i - first_letter, j);
			if (!(tab[j] = malloc(sizeof(char) * (i - first_letter) + 1)))
			{
//				freedom(tab, j);
				return NULL;
			}
			while (first_letter < i)
			{
//				tab[j][k] = s[first_letter];
				first_letter++;
//				k++;
			}
//			tab[j][i] = 0;
//			k = 0;
			j++;
		}
		i++;
	}
//	tab[j][i] = 0;
//																				printf("Malloc %d + 1 sur j = %d\n", i-debut, j);
//	if (!(tab[j] = malloc(sizeof(char) * (i - debut) + 1)))
//	{
//		freedom (tab, j);
//		return NULL;
//	}


//																				printf("C'est parti!!!\n");
	tab = filling_good(s, tab, c);

	return(tab);

}

#include <stdio.h>
int		main()
{
	char	message[] = " message    u";
	char cut = ' ';
	int		i;

	char **truc;
	
	truc = ft_split(message, cut);
	i = 0;

	while (truc[i] != 0)
	{
		printf("%s\n", truc[i]);
		i++;
	}
	return (0);
}
