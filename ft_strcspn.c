#include <string.h>


int ft_strlen(const char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	int result = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		j = 0;
		while (j < ft_strlen(reject))
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (ft_strlen(s));
}
/* 
#include <stdio.h>

int main ()
{
	const char *s = "1Hi Violette";
	const char *reject = "f";
	printf("Theirs: %lu\n", strcspn(s, reject));
	printf("Mine: %lu\n", ft_strcspn(s, reject));
	printf("%s", s);
	return (0);
} */

/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/