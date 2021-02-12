#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

int		int_len(int n)
{
	int div;
	int len;

	len = 0;
	div = n;

	while (div != 0)
	{
		div /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	else
		neg = 0;

	i = neg + int_len(n);

	if (!(str = malloc(sizeof(char) * i + 1)))
		return (NULL);

	str[i] = 0;

	while (n != 0)
	{
		i--;
		str[i] = n % 10 + '0';
		n = n / 10;
	}

	if (neg != 0)
		str[0] = '-';

	return (str);

}
#include <stdio.h>

int		main(void)
{
	int test;

	test = -1200;

	printf("%s \n", ft_itoa(test));

	return (0);
}
