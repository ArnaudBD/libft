#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}

	write(fd, "\n", 1);
}

int		main()
{
	char test[] = "Pas mal comme petit test, non?";

	ft_putendl_fd(test, 1);

	return (0);
}
