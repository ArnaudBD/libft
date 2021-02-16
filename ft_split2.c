/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiju-du <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:11:28 by abiju-du          #+#    #+#             */
/*   Updated: 2021/02/16 17:15:15 by abiju-du         ###   ########.fr       */
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
	if (s[i] == cut && s[i + 1] == cut)
		i++;

	while (s[i] != cut && s[i] != 0)
			i++;

printf("next_cut:\n*s = |%s|\ns[%d] : %c = %d\n\n\n", s, i, s[i], s[i]);

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
printf("filling_good:\n");
printf("i = %d\n", i);
printf("j = %d\n", j);
printf("k = %d\n", k);
printf("s[i] : %c = %d\n", s[i], s[i]);
		if (s[i] != c)
		{
			tab[j][k] = s[i];
//printf("tab[j][k] : %c = %d\n", tab[j][k], tab[j][k]);	
			k++;
		}
		else
		{
//printf("(else1)s[i] : %c\n", s[i]);	
//printf("k =: %d\n", k);	
			tab[j][k] = 0;
//printf("tab[j][k] : %c = %d\n", tab[j][k], tab[j][k]);	
			j++;
			k = 0;
//printf("(else2)s[i] : %c\n", s[i]);	
		}
//printf("s[i] : %c\n", s[i]);	
//printf("s[i] = %d\n\n\n", s[i]);	
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
	int		pre;

	i	= 0;
	j	= 0;
	pre	= 0;

printf("ft_split:\n");
printf("MALLOC %d + 1\n\n\n", nb_words(s, c));

	if (!(tab = malloc(sizeof(char*) * (nb_words(s, c) + 1))))
		return (NULL);

//printf("MALLOC %d + 1 sur j =  %d\n\n\n", next_cut(s + i, c), j);
//		if (!(tab[j] = malloc(sizeof(char) * next_cut(s + i + 1, c) + 1)))
//		{
//			freedom(tab, j);
//			return NULL;
//		}

	while (s[i] != 0)
	{
printf("				s[%d] = %c\n", i, s[i]);
		if (s[i] == c)
		{
printf("				_s[%d] = %c\n", i, s[i]);
printf("MALLOC %d + 1 sur j = %d\n\n\n", next_cut(s + i, c), j);
			if (!(tab[j] = malloc(sizeof(char) * (i - pre) + 1)))
			{
//				freedom(tab, j);
				return NULL;
			}
			pre = i;
			j++;
		}
		i++;
	}

	tab = filling_good(s, tab, c);

	return(tab);

}

#include <stdio.h>
int		main()
{
	char	message[] = "  Ceci";
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
