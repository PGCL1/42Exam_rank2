int ft_isspace(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (isvalid(str[i], str_base))
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'F')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'f')
			result += str[i] - 87;
		i++;
	}
	return (result * sign);
}

/* #include <stdio.h>

int main()
{
	const char *str = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.";
	int str_base = 16;
	printf("%d", ft_atoi_base(str, str_base));
	return (0);
	//3308
} */

/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);

*/

/* formula:

0 48
1 49 
2 50
3 51
4 52
5 53
6 54
7 55
8 56
9 57
10 a 65-55 = 10
11 b 66-55 = 11
12 c
13 d
14 e
15 f
example: 205 in base 8
2 * (8^1) + 0 * (8^2) + 5 * (8^3) = 16 + 0 + 2560 = 2576 */