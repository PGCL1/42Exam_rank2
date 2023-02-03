#include <unistd.h>
#include <stdio.h>

//need to create an atoi to convert strings to int
int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
			i++;
		else if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
	}
	return (result * sign);
}

int main(int argc, char **argv)
{
	if (!argv[1] || !argv[3])
		return (printf("\n"));
	int num1 = ft_atoi(argv[1]);
	int num2 = ft_atoi(argv[3]);
	if (argc == 4)
	{
		if (argv[2][0] == '-')
			printf("%d", num1 - num2);
		else if (argv[2][0] == '*')
			printf("%d", num1 * num2);
		else if (argv[2][0] == '+')
			printf("%d", num1 + num2);
		else if (argv[2][0] == '/')
			printf("%d", num1 / num2);
		else if (argv[2][0] == '%')
			printf("%d", num1 % num2);
	}
	printf("\n");
}

/*
Assignment name  : do_op
Expected files   : do_op.c
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$

*/