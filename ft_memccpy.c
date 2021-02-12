#include <unistd.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
	unsigned char uncharc;
	
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	uncharc = (unsigned char)c;

	int i;

	i = 0;

	while (i < n && source[i] != uncharc)
	{
		destination[i] = source[i];
		i++;
	}
	return(destination);
}
