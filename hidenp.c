#include <unistd.h>
//UNFINISHED__TO_BE_CONTINUED
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

//need to look for s1 characters in s2, 
int find_1stchar(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s2[i])
	{
		if (s1[j] == s2[i])
			return (i);
		else
			i++;
	}
	return (i);
}



//if one is found then start reading from s2 position for the next characters, 

//and so on

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[2][j])
		{

		}
	}
	write(1, "\n", 1);
}

/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>

*/