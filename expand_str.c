#include <unistd.h>

int ft_isspace(int c){
	if (c == 9 || c == 10 || c == 11|| c == 12 || c == 13 || c == 32)
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	int i = 0;
	int flag = 0;
	if (argc == 2)
	{        
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
		while (argv[1][i] != 0)
		{
			if (ft_isspace(argv[1][i]) > 0)
				flag = 1;
			else if (!ft_isspace(argv[1][i]))
			{
				if (flag > 0)
					write(1, "   ", 3);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}