#include <unistd.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int result;
	i = 0;
	result = 0;

	while((s1[i] != '\0') && (s2[i] != '\0') && (i <= n))
	{
		if(s1[i] == s2[i])
			i++;
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}
