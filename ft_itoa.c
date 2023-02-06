#include <stdlib.h>
#include <stdio.h>

int length(int num)
{
	int digit = 0;
	if (num < 0)
	{
		num = -num;
		digit++;
	}
	while (num > 0)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int num)
{
	char *str;
	long	n;
	int		i;

	n = num;
	i = length(n);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

/* int main()
{
	int num = -654;
	printf("Result is : %s", ft_itoa(num));
	return 0;
} */
/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

/* from char to int formula:
result = result * 10 + str[i] - '0' */