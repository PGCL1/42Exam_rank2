#include <unistd.h>

int main(int argc, char **argv)
{
	int j = 1;
	int i = 0;
	if (argc == 1)
		return write(1, "\n", 1);
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				{
					argv[j][i] -= 32;
					i++;
				}
				else
				{
					i++;
				}
			}
			j++;
		}
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				if ((argv[j][i] >= 'A' && argv[j][i] <= 'Z') && (argv[j][i-1] == ' ' || argv[j][i-1] == '\0'))
				{
					write (1, &argv[j][i], 1);
					i++;
				}
				else if (argv[j][i] >= 'A' && argv[j][i] <= 'Z' && argv[j][i-1] != ' ')
				{
					argv[j][i] += 32;
					write(1, &argv[j][i], 1);
					i++;
				}
				else if (((argv[j][i] >= 0 && argv[j][i] <= 64) || (argv[j][i] >= 123 && argv[j][i] <= 127)))
				{
					write (1, &argv[j][i], 1);
					i++;
				}
				else
				{
					write(1, &argv[j][i], 1);
					i++;
				}
			}
			write (1, "\n", 1);
			j++;
		}
	}
	return 0;
}