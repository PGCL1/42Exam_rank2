#include <unistd.h>

int ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (ft_isspace(argv[1][i]) && (ft_isspace(argv[1][i+1]) || argv[1][i+1] == '\0'))
				i++;
			else if (ft_isspace(argv[1][i] && ft_isalpha(argv[1][i+1])))
				write(1, &argv[1][i++], 1);
			else
				write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
