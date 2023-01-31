#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[j][i])
		{
			if (argv[j][i] >= 'a' && argv[j][i] <= 'z') || (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
			 	i++;

		}
	}
	if (argc != 2)
	{
		i = 0;
		while(argv[1][i] != 0)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

}
