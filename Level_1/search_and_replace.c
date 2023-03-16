#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 4)
	{
		while (argv[1][i] && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1 )
		{
			if (argv[1][i] == argv[2][j])
			{
				argv[1][i] = argv[3][j];
				write(1, &argv[1][i++], 1);
			}
			else
				write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
