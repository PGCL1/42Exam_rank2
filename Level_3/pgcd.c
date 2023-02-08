#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int result = 0;
	if (argc == 3)
	{
		int nb1 = atoi(argv[1]);
		int nb2 = atoi(argv[2]);
		if (nb1 > 0 && nb2 > 0)
		{
			while (nb1 != nb2)
			{
				if (nb1 > nb2)
					nb1 -= nb2;
				else
					nb2 -= nb1;
			}
			printf("%d", nb1);
		}
	}
	printf("\n");
}

/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$
*/