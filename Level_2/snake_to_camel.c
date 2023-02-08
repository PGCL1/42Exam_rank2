#include <unistd.h>

int isCAP(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (isCAP(argv[1][i]) > 0)
			{
				write(1, "_", 1);
				argv[1][i] += 32;
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