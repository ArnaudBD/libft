#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;
	i = 0;
	srcsize = ft_strlen(src);

	while((src[i] != 0) && (i != (dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';

	return (srcsize);
}
