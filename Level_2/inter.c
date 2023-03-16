#include <unistd.h>

int is_included(char c, char *str, int len)
{
	int i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int is_unique(char c, char *str, int i)
{
	while (i--)
	{
		if (c == str[i])
			return (0);
	}
	return (1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (is_included(argv[1][i], argv[2], ft_strlen(argv[2])))
			{
				if (is_unique(argv[1][i], argv[1], i))
					write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
