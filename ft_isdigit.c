#include <unistd.h>
#include "libft.h"

int		ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>

int		main(void)
{
	char test;
	test = '0';
	if(ft_isdigit(test) == 0)
		printf("It is not a digit");
	else
		printf("It is a digit");
}
