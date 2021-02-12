#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *destination;
	char *source;

	i = 0;
	
	while(i < len)
	{
		destination[i] = source[i];
		i++;
	}
	return(destination);
}
