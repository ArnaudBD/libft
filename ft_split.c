/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:11:28 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/15 17:21:11 by abiju-du         ###   ########.fr       */
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
	nb = 1;

	while (s[i] != 0)
	{
		if (s[i] == c)
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
printf("i = %d\n", i);
printf("j = %d\n", j);
printf("k = %d\n", k);
		if (s[i] != c)
		{
			tab[j][k] = s[i];
			k++;
		}
		else
		{
//printf("(else1)s[i] : %c\n", s[i]);	
//printf("k =: %d\n", k);	
			tab[j][k] = 0;
			j++;
			k = 0;
//printf("(else2)s[i] : %c\n", s[i]);	
		}
printf("s[i] : %c\n", s[i]);	
printf("tab[j][k] = %c\n", tab[j][k]);	
printf("s[i] = %d\n\n\n", s[i]);	
		i++;
//printf("s[i] = %d\n", s[i]);	
	}
//printf("OK");
	tab[j][k] = 0;
//printf("OK");
	j++;
//printf("j = %d", j);
	tab[j] = 0;

//printf("KO");
	return (tab);
}
char	**ft_split(char const *s, char c)
{
	char	**tab = NULL;
	int		i;
	int		j;
	int		nc;

	i = 0;
	j = 0;
	nc = next_cut(s + i, c);
printf("next_cut : %d\n", next_cut(s + i, c));


	if (!(tab = malloc(sizeof(char*) * (nb_words(s, c) + 1))))
		return (NULL);

	if (!(tab[j] = malloc(sizeof(char) * next_cut(&s[i], c)  + 1)))
	{
/*		freedom(tab, j);*/
		return NULL;
	}

printf("nb : %d\n", nb_words(s, c));	
	while (j <= nb_words(s, c))
	{
		j++;
		while (next_cut(s + i, c) != 1 && s[i] != 0)
			i++;

//printf("i = %d\n", i);

		if (s[i + 1] == c)
		{
			i++;
//printf("i2 = %d\n", i);
printf("next_cut : %d\n", next_cut(s + i, c));
			if (!(tab[j] = malloc(sizeof(char) * next_cut(&s[i], c)  + 1)))
			{
/*				freedom(tab, j);*/
				return NULL;
			}
			i++;
		}
		if (s[i] == 0)
			break;
	}

printf("C'est parti !!!\n\n");
	tab = filling_good(s, tab, c);

	return (tab);
}

#include <stdio.h>
int		main()
{
	char	message[] = " Ceci n'est pas un message.";
	char cut = ' ';
	int		i;

	char **truc;
	
	truc = ft_split(message, cut);
	i = 0;

	while (truc[i] != 0)
	{
		printf("%s\n", ft_split(message, cut)[i]);
		i++;
	}
	return (0);
}
