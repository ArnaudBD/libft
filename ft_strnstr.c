#include <unistd.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *h;
	char *n;

	h =(char *)haystack;
	n =(char *)needle;

	i = 0;

	if(n[i] == '\0')
		return(&h[i]);
	else
	{
		while(i < len)
		{
			j = 0;
			while(h[i] != n[j])
				i++;

			while(h[i] == n[j])
			{
				i++;
				j++;
				if(n[j] == '\0')
					return (&h[i-j]);
				if(h[i] != n[j])
					i = i - j + 1;
			}
		}
	}
	return(NULL);
}

