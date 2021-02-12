#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi (char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;

	if(!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return NULL;

	while (s[i] != 0)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}

	str[i] = 0;

	return (str);
}

char	fonction_test(unsigned int nb, char c)
{
	int d;
	c = c + 32;
	d = nb + 7;
	return (c);
}

#include <stdio.h>

int		main(void)
{
	char const test[] = "CECI EST UN EXEMPLE";

	printf("%s \n", ft_strmapi(test, &fonction_test));

	return (0);

}
