#include <unistd.h>

//one function to check if the character has not been seen before
int not_seen_before(char *str, char c, int index)
{
	int i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

//one function to see if the character was not present in s1 then write + to see if the new characters from s2 where not present in s2 and not present in s1 then write
void ft_union(char *s1, char *s2)
{
	int i = 0;
	int len = 0;
	while (s1[i])
	{
		if (not_seen_before(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	len = i;
	i = 0;
	while(s2[i])
	{
		if (not_seen_before(s2, s2[i], i) == 1)
		{
			if (not_seen_before(s1, s2[i], len) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
}

//int main with 3 parameters or else "\n"
int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}