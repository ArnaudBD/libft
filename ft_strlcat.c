#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dst);
	k = j + ft_strlen(src);

	while(src[i] != 0 && j < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (dstsize != 0)
		dst[j] = '\0';

	return (k);
}
