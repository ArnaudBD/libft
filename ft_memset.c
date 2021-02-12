#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char uncharc;
	unsigned char *str;

	uncharc = (unsigned char)c;
	str = (unsigned char *)b;
	i = 0;

	while(i < len)
	{
		str[i] = uncharc;
		i++;
	}
	return(str);
}
