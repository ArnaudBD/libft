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

#include <stdio.h>
int		main(void)
{
	char chaine[] = "Voici la chaine que voila";
	char nul[] = "ilaVo";

	printf("%s \n", ft_strtrim(chaine, nul));

	return (0);
}
