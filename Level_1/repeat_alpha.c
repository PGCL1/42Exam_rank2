#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int count = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				count = argv[1][i] - 'A' + 1;
				while (count--)
					write(1, &argv[1][i], 1);
				i++;
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 'a' + 1;
				while (count--)
					write(1, &argv[1][i], 1);
				i++;
			}
			else
				write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}

