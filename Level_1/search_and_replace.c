#include <unistd.h>

int charinstring(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (!argv[1] || !argv[2] || !argv[3])
		return (write(1, "\n", 1));	
	if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		return (write(1, "\n", 1));
	if (argc == 4)
	{
		while (argv[1][i])
		{
			if (charinstring(argv[1][i], argv[2][j]))
			{
				argv[1][i] = argv[3][j];
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
}

/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $

*/