#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i++] += 32;
			else
				i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == '_' && (argv[1][i+1] >= 'a' && argv[1][i] <= 'z'))
			{
				i++;
				argv[1][i] -= 32;
				write(1, &argv[1][i], 1);
				i++;
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}