#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char charc;
	char *str;

	i = 0;
	charc = (char)c;
	str = (char *)s;

	while(str[i] != c)
	{
		if(str[i] == 0)
			return (0);
		i++;
	}
	return (&str[i]);
}
