#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int len;
	int i;
	int j;

	char *str;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	
	if (!(str = malloc(sizeof(char)*len + 1)))
		return (NULL);
	
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= len)
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[len] = 0;

	return (str);
}

#include <stdio.h>

int		main(void)
{
	char const prefixe[] = "";
	char const suffixe[] = "est un test";
	printf("%s \n", ft_strjoin(prefixe, suffixe));

	return (0);
}
