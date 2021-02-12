#include <unistd.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char uncharc;
	char *str;

	i = 0;
	uncharc = (unsigned char)c;
	str = (char *)s;

	while(i < n && str[i] != 0)
	{
		if(str[i] == uncharc)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
