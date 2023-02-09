#include <unistd.h>

void print_hex(int num)
{
	char *str = "0123456789abcdef";
	if (num == 0)
		write(1, "0", 1);
	if (num > 16)
		print_hex(num / 16);
	if (num)
		write(1, &str[num % 16], 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i++] - '0';
	}
	return (result * sign);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		if (argv[1][i])
			print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
}

/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

/**
 * base 10 
 * 0123456789
 * base 16 lowercase
 * 0123456789abcdef
 * need to convert number into string
 * then need to divide number by 16 and at each result find its position in the set */