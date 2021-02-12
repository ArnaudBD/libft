#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>


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

	if (s[i] == cut || s[i] == 0)
		return (0);
	
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

	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			tab[j][k] = s[i];
			k++;
		}
		else
		{
			tab[j][k] = 0;
			j++;
			k = 0;
		}
		i++;
	}
	
	tab[j][k] = 0;
	j++;
	*tab[j] = 0;

	return (tab);
}
char	**ft_split(char const *s, char c)
{
	char	**tab = NULL;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;

	if (!(tab = malloc(sizeof(char*) * nb_words(s, c) + 1)))
		return (NULL);
	
	while (j < nb_words(s, c))
	{
		while (next_cut(&s[i], c) != 0 && s[i] != 0)
		{			i++;
		}
		if (s[i] == c || s[i] == 0)
		{
			if (!(tab[j] = malloc(sizeof(char) * next_cut(&s[i], c)  + 1)))
					return NULL;
			i++;
		}
		j++;
	}

	tab = filling_good(s, tab, c);

	return (tab);
}

#include <stdio.h>
int		main()
{
	char	message[] = "Ceci est un message.";
	char cut = ' ';
	int		i;

	char **truc;
	
	truc = ft_split(message, cut);
	i = 0;

	while (*truc[i] != 0)
	{
		i++;
	}
	return (0);
}
