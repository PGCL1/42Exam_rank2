#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		if (argv[2][i] == '+')
			printf("%d", num1 + num2);
		else if (argv[2][i] == '-')
			printf("%d", num1 - num2);
		else if (argv[2][i] == '/')
			printf("%d", num1 / num2);
		else if (argv[2][i] == '%')
			printf("%d", num1 % num2);
		else if (argv[2][i] == '*')
			printf("%d", num1 * num2);
	}
	printf("\n");
	return (0);
}
