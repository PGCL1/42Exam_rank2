#include <unistd.h>

int isalpha_low(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 1;
	if (argc >= 2)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				if (argv[j][i] >= 65 && argv[j][i] <= 90)
				{
					argv[j][i] += 32;
					i++;
				}
				else
					i++;
			}
			j++;
		}
		j = 1;
		i = 0;
		while (j < argc)
		{
			i = 0;
			while(argv[j][i] != '\0')
			{
				if (isalpha_low(argv[j][0]) > 0)
				{
					argv[j][0] -= 32;
					write(1, &argv[j][0], 1);
					i++;
				}
				else if (isalpha_low(argv[j][i]) > 0 && argv[j][i - 1] == ' ')
				{
					argv[j][i] -= 32;
					write(1, &argv[j][i], 1);
					i++;
				}
				else
				{
					write(1, &argv[j][i], 1);
					i++;
				}	
			}
			write(1, "\n", 1);
			j++;
		}
	}
	if (argc < 2)
		write(1, "\n", 1);
	return (0);
}

/*
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>

*/