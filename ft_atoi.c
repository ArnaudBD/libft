#include <unistd.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int n;
	int resultat;

	i = 0;
	n = 1;
	resultat = 1;
	while(str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f' ||str[i] == ' ')
		i++;
	if(str[i] == '-')
	{
		n = -1;
		i++;
	}

	while (str[i] == '0')
		i++;

	if(str[i] > '0' && str[i] <= '9')
	{
		resultat = resultat * (str[i] - '0');
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		resultat = 10*resultat + str[i] - '0';
		i++;
	}
	return(resultat * n);
}
