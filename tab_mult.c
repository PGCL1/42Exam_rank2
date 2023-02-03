#include <unistd.h>

//need atoi to be able to convert string to int
int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
			i++;
		else if (str[i] >= 48 && str[i] <= 57)
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
	}
	return (result);
}

//need putnbr to be able to print numbers that have more than one digits
void ft_putnbr(int num)
{
	char c;
	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}


//need putnbr to be able to read a number with multiple digits

int main(int argc, char **argv)
{
	int i_multiply[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num;
	int result = 0;
	if (argc == 2)
	{

		int num = ft_atoi(argv[1]);
		for (int i = 0; i < 9; i++){
			ft_putnbr(i_multiply[i]);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " =  ", 3);
			result = num * i_multiply[i];
			ft_putnbr(result);
			write(1, "\n", 1);
		}
	}
	if (argc != 2)
		write(1, "\n", 1);
	return (0);
}

/*
Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>

*/