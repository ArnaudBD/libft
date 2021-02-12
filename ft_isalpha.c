#include <unistd.h>
#include "libft.h"

int		ft_isalpha(int	c)
{
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

#include <stdio.h>
int		main(void)
{
	char test;
	test = '.';
	if(ft_isalpha(test) == 0)
		printf("It is not an alpha");
	else
		printf("It is an alpha");
return (0);
}
