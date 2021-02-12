#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(int count, int size)
{
	int		i;
	int		totalmem;
	char	*str;
	
	i = 0;
	totalmem = count * size;

	if (!(str = malloc(sizeof(char) * totalmem + 1)))
		return (0);
	while (i <= totalmem)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
