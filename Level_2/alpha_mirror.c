#include <unistd.h>

void Up_swap(char c)
{
	int j = 0;
	char Up_half1[13] = "ABCDEFGHIJKLM";
	char Up_half2[13] = "ZYXWVUTSRQPON";
	while (j < 13)
	{
		if (c  == Up_half1[j])
		{
			c  = Up_half2[j];
			write(1, &c, 1);
		}
		else if (c == Up_half2[j])
		{
			c = Up_half1[j];
			write(1, &c, 1);
		}
		j++;
	}
}

void Down_swap(char c)
{
	int j = 0;
	char down_half1[13] = "abcdefghijklm";
	char down_half2[13] = "zyxwvutsrqpon";
	while (j < 13)
	{
		if (c  == down_half1[j])
		{
			c  = down_half2[j];
			write(1, &c, 1);
		}
		else if (c == down_half2[j])
		{
			c = down_half1[j];
			write(1, &c, 1);
		}
		j++;
	}
}

int ft_isalpha(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (ft_isalpha(argv[1][i]))
				{
					Up_swap(argv[1][i]);
					Down_swap(argv[1][i]);
				}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
