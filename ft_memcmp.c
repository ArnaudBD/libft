#include <unistd.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *str1;
	char *str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;

	while(i < n)
	{
		if(str1[i] > str2[i])
			return (str1[i] - str2[i]);
		if(str1[i] < str2[i])
			return (str2[i] - str1[i]);
		i++;
	}
	return(0);
}
