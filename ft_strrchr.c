#include <unistd.h>
#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int i;
	char charc;
	char *str;

	i = 0;
	charc = (char)c;
	str = (char *)s;

	i = ft_strlen(s);
	while(i != 0)
	{
		if(str[i] == charc)
			return (&str[i]);
		i--;
	}
	return (0);
}
