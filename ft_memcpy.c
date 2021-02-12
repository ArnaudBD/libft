#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *destination;
	char *source;

	i = 0;
	destination = (char *)dst;
	source = (char *)src;

	while(i < n && source[i] != 0)
	{
		destination[i] = source[i];
		i++;
	}
	return(destination);
}
