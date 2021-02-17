#include "../libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	printf("=== TESTING ATOI ===\n\n");
	
	char *space = "			/t-0";
	char *max = "2147483647";
	char *min = "-2147483648";

	printf("TRUE ATOI:\t%d\t%d\t%d\n", atoi(max), atoi(min), atoi(space));
	printf("YOUR ATOI:\t%d\t%d\t%d\n", ft_atoi(max), ft_atoi(min), ft_atoi(space));
	
	printf("\n=== TESTING SPLIT ===\n");
	
	char **test;
	int i;

	printf("\nSEP IN THE BEGINNING:\n");

	i = 0;
	test = ft_split(":::::test", ':');
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);

	printf("\nSEP IN THE END:\n");

	i = 0;
	test = ft_split("test:::::::", ':');
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);

	printf("\nSEP EVERYWHERE:\n");

	i = 0;
	test = ft_split("::t1:t2:t3:t4:t5:t6::", ':');
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);

	printf("\nEMPTY STRING AND EMPTY SEP:\n");

	i = 0;
	test = ft_split("", 0);
	while (test[i])
	{
		if (test[0][0] == '\0')
			printf("%d|(empty string)\n", i);
		else {
		printf("%d|%s\n", i, test[i]);
		}
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);

	printf("\nSEP AND STR ARE TAB:\n");

	i = 0;
	test = ft_split("\t", '\t');
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);

	printf("\nEMPTY SEP:\n");

	i = 0;
	test = ft_split("this is a test", 0);
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);
	
	printf("\nSEP IS NOT IN THE STRING:\n");

	i = 0;
	test = ft_split("t", ':');
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);

	printf("\nONLY \\0:\n");

	i = 0;
	test = ft_split("\0\0\0\0\0\0\0\0\0\0\0\0\0", '\0');
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);

	printf("\nONLY SEP:\n");

	i = 0;
	test = ft_split(":::::::::::::::::::::", ':');
	while (test[i])
	{
		printf("%d|%s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("%d|%s\n", i, test[i]);
	free(test);	
	return (0);
}
